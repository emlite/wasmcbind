import fs from "fs";
import path from "path";
import { fileURLToPath } from "url";
import {
  builtinNominals,
  cppKeywords,
  IGNOREDFILES,
  missingDictFallback,
} from "./ignored.js";
import { enums, typedefs, callbacks } from "./globals.js";

let dictionaryRegistry = null;

const __filename = fileURLToPath(import.meta.url);
const __dirname = path.dirname(__filename);

export const OUT_INC = path.resolve(__dirname, "../webbind/include/webbind");
export const OUT_SRC = path.resolve(__dirname, "../webbind/src");

function pair(name) {
  return {
    h: path.join(OUT_INC, `${name}.h`),
    c: path.join(OUT_SRC, `${name}.c`),
  };
}

export function writePair(name, hdrLines, srcLines) {
  const { h, c } = pair(name);
  if (IGNOREDFILES.has(path.basename(h)) || IGNOREDFILES.has(path.basename(c)))
    return;

  // Use writeFileSync for complete, clean files (modern approach)
  const header = hdrLines.join("\n");
  const source = srcLines.join("\n");
  
  fs.writeFileSync(h, header + "\n", "utf8");
  fs.writeFileSync(c, source + "\n", "utf8");
}

export function flat(t) {
  if (!t) return { n: "__unk", unsigned: false };

  if (typeof t === "string") {
    let unsigned = false;
    let base = t.trim();

    base = base.replace(/^unrestricted /, "");

    if (base.startsWith("unsigned ")) {
      unsigned = true;
      base = base.replace(/^unsigned /, "");
    }
    return { n: base.trim(), unsigned };
  }

  if (Array.isArray(t)) return { n: "__union", unsigned: false };

  if (t.generic) {
    return {
      n: t.generic,
      inner: t.idlType,
      unsigned: false,
    };
  }

  if (t.idlType) {
    const inner = flat(t.idlType);
    return { n: inner.n, unsigned: !!t.unsigned || inner.unsigned };
  }

  return { n: "__unk", unsigned: false };
}

export function cpp(idlType) {
  const { n, unsigned } = flat(idlType);
  const jsbindMap = {
    undefined: "jb_Undefined",
    DOMString: "jb_String",
    USVString: "jb_String",
    ByteString: "jb_String",
    CSSOMString: "jb_String",
    object: "jb_Object",
    any: "jb_Any",
    Uint8Array: "jb_Uint8Array",
    Int8Array: "jb_Int8Array",
    Uint32Array: "jb_Uint32Array",
    Int32Array: "jb_Int32Array",
    Float32Array: "jb_Float32Array",
    Float64Array: "jb_Float64Array",
    ArrayBuffer: "jb_ArrayBuffer",
    DataView: "jb_DataView",
  };

  if (missingDictFallback.has(n) || builtinNominals.has(n))
    return "jb_Any";

  if (jsbindMap[n]) return jsbindMap[n];

  if (typeof idlType === "object" && idlType.generic) {
    const inner = idlType.idlType;

    const elem = Array.isArray(inner) ? inner[0] : inner;

    if (idlType.generic === "sequence") {
      return `jb_Array`;
    }

    if (idlType.generic === "Promise") {
      return `jb_Promise`;
    }

    if (idlType.generic === "FrozenArray") {
      return `jb_Array`;
    }

    if (idlType.generic === "ObservableArray") {
      return `jb_Array`;
    }

    if (idlType.generic === "record") {
      const [k, v] = inner;
      return `jb_Object`;
    }
  }
  if (["__union", "__unk"].includes(n)) return "jb_Any";
  if (n === "boolean") return "bool";
  if (n === "byte") return "char";
  if (n === "bigint") return "long long";
  if (n === "octet") return "unsigned char";
  if (n === "short" || n === "long" || n === "int")
    return (unsigned ? "unsigned " : "") + n;

  if (n === "double" || n === "float") return n;
  if (enums.has(n)) return n;
  if (callbacks.has(n)) return "jb_Function";
  if (typedefs.has(n) || n === "__union") return "jb_Any";
  
  // Check if it's a dictionary
  if (dictionaryRegistry && dictionaryRegistry.has(n)) return n;

  return n;
}

const primitiveRE = /\b(?:long|short|float|double|bool|char|int)\b/;
export function argtypeFix(type) {
  return primitiveRE.test(type) ? type : `${type} *`;
}

export function fixIdent(name) {
  if (cppKeywords.has(name)) return name + "_";
  if (name === "BroadcastChannel" || name === "SharedWorker") return name + "_";
  if (name === "") return "none";
  let out = name.replace(/[/\-+]/g, "_");
  if (/^[0-9]/.test(out)) out = "_" + out;
  return out;
}

export function variantsOf(args) {
  const firstOpt = args.findIndex((a) => a.optional || a.default != null);
  if (firstOpt === -1) return [args];
  const out = [args.slice(0, firstOpt)];
  for (let i = firstOpt + 1; i <= args.length; ++i) out.push(args.slice(0, i));
  return out;
}

export function argDecl(args, withNames = true) {
  return args
    .map((a) => {
      const t = argtypeFix(cpp(a.idlType));
      return withNames ? `${t} ${fixIdent(a.name)}` : t;
    })
    .join(", ");
}

export function setDictionaryRegistry(dicts) {
  dictionaryRegistry = dicts;
}

export function getHeaderPreamble(customIncludes = []) {
  const preamble = [
    "#pragma once",
    "",
    "#include <emlite/emlite.h>",
    "#include <jsbind/jsbind.h>",
    '#include "enums.h"',
    "",
  ];
  
  // Add custom includes (dependency includes are already formatted)
  if (customIncludes.length > 0) {
    preamble.push(...customIncludes);
    preamble.push("");
  }
  
  preamble.push(
    "#ifdef __cplusplus",
    "extern \"C\" {", 
    "#endif",
    ""
  );
  
  return preamble;
}

export function getHeaderPostamble() {
  return [
    "",
    "#ifdef __cplusplus",
    "}",
    "#endif"
  ];
}

export function getSourcePreamble(headerName, customIncludes = []) {
  const preamble = [
    `#include <webbind/${headerName}.h>`,
    ""
  ];
  
  // Add custom includes for source files (already formatted)
  if (customIncludes.length > 0) {
    preamble.push(...customIncludes);
    preamble.push("");
  }
  
  return preamble;
}
