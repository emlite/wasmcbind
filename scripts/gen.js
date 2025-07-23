import {
  flat,
  cpp,
  writePair,
  fixIdent,
  argtypeFix,
  variantsOf,
  argDecl,
} from "./utils.js";
import {
  emittedDicts,
  dictOwner,
  enums,
  typedefs,
  callbacks,
} from "./globals.js";

function emitAttr(attr, owner, isStatic = false, parent0) {
  const H = [],
    S = [];
  const type = cpp(attr.idlType);
  const staticKw = isStatic ? "static " : "";
  const constQual = isStatic ? "" : " const";

  let parent = parent0 ? parent0 : "em_Val";

  H.push(
    `\n${type} ${owner}_${fixIdent(attr.name)}(const ${owner} *self);`
  );

  if (isStatic) {
    S.push(
      `\n${type} ${owner}_${fixIdent(attr.name)}(const ${owner} *self) {`,
      `    return em_Val_as(${type}, em_Val_get(em_Val_global("${owner.toLowerCase()}"), em_Val_from("${
        attr.name
      }")));`,
      `}`,
      ""
    );
  } else {
    S.push(
      `\n${type} ${owner}_${fixIdent(attr.name)}(const ${owner} *self) {`,
      `    return em_Val_as(${type}, em_Val_get(${parent}_as_val(self->inner), em_Val_from("${attr.name}")));`,
      `}`,
      ""
    );

    if (!attr.readonly) {
      H.push(
        `\nvoid ${owner}_set_${fixIdent(
          attr.name
        )}(${owner}* self, ${argtypeFix(type)} value);`
      );
      S.push(
        `\nvoid ${owner}_set_${fixIdent(
          attr.name
        )}(${owner}* self, ${argtypeFix(type)} value) {`,
        `    em_Val_set(${parent}_as_val(self->inner), em_Val_from("${attr.name}"), em_Val_from(value));`,
        `}`,
        ""
      );
    }
  }
  return { H, S };
}

function emitOp(op, owner, isStatic = false, parent0) {
  const H = [],
    S = [];
  const parent = parent0 ? parent0 : "em_Val";
  if (!op.name) return { H, S };
  const ret = cpp(op.idlType || "undefined");
  const cppName = fixIdent(op.name);
  const variants = variantsOf(op.arguments);

  let i = 0;
  const sz = variants.length;
  for (const v of variants) {
    const declHdr = argDecl(v);
    const declSrc = declHdr;
    const callArgs = v
      .map((a) => `em_Val_from(${fixIdent(a.name)})`)
      .join(", ");
    const callExpr = isStatic
      ? `em_Val_call(em_Val_global("${owner.toLowerCase()}"), "${op.name}"${
          callArgs ? ", " + callArgs : ""
        })`
      : `em_Val_call(${parent}_as_val(self->inner), "${op.name}"${
          callArgs ? ", " + callArgs : ""
        })`;

    H.push(
      `\n${ret} ${owner}_${cppName}${sz === 1 ? "" : i}(${owner}* self ${
        declHdr.length === 0 ? "" : ", " + declHdr
      });`
    );

    S.push(
      `\n${ret} ${owner}_${cppName}${sz === 1 ? "" : i}(${owner}* self ${
        declSrc.length === 0 ? "" : ", " + declSrc
      }) {`,
      `    return em_Val_as(${ret}, ${callExpr});`,
      `}`,
      ""
    );
    i += 1;
  }
  return { H, S };
}

function emitCtor(ctor, owner, parent) {
  const variants = variantsOf(ctor.arguments);
  const H = [];
  const S = [];

  let i = 0;
  const sz = variants.length;
  for (const v of variants) {
    const declHdr = argDecl(v);
    const declSrc = declHdr;
    const callArgs = v
      .map((a) => `em_Val_from(${fixIdent(a.name)})`)
      .join(", ");

    H.push(`\n${owner} ${owner}_new${sz === 1 ? "" : i}(${declHdr});`);

    S.push(
      `\n${owner} ${owner}_new${sz === 1 ? "" : i}(${declSrc}) {
        em_Val vv = em_Val_new(em_Val_global("${owner}") ${
        callArgs.length === 0 ? "" : ", " + callArgs
      });
        return ${owner}_from_val(&vv);
      }`,
      ""
    );
    i += 1;
  }
  return { H, S };
}

function embedDict(dict, hdr, src, ownerName) {
  if (emittedDicts.has(dict.name)) return;
  emittedDicts.add(dict.name);
  if (!dictOwner.has(dict.name)) {
    dictOwner.set(dict.name, `${ownerName}.h`);
  }
  hdr.push(`DECLARE_EMLITE_TYPE(${dict.name}, em_Val);`);
  src.push(`DEFINE_EMLITE_TYPE(${dict.name}, em_Val);`, "");
  dict.members.forEach((m) => {
    const { H, S } = emitAttr(m, dict.name);
    hdr.push(...H);
    src.push(...S);
  });
}

function refNames(member) {
  const out = new Set();
  const scan = (t) => {
    if (!t) return;

    if (Array.isArray(t)) return t.forEach(scan);

    if (typeof t === "object" && t.generic && t.idlType) {
      if (Array.isArray(t.idlType)) t.idlType.forEach(scan);
      else scan(t.idlType);
    }

    const n = flat(t).n;
    if (
      /^(undefined|any|object|Promise|DOMString|USVString|ByteString|CSSOMString|boolean)$/.test(
        n
      ) ||
      /long|short|float|double/.test(n) ||
      n.startsWith("__")
    )
      return;

    out.add(n);

    if (typeof t === "object" && t.idlType) scan(t.idlType);
  };

  if (member.type === "attribute") scan(member.idlType);
  else if (member.type === "operation") {
    scan(member.idlType);
    member.arguments.forEach((a) => scan(a.idlType));
  }
  return out;
}

export function generate(specAst) {
  const interfaces = new Map();
  const mixins = new Map();
  const includeRel = [];
  const dicts = new Map();
  const namespaces = [];

  for (const ast of Object.values(specAst)) {
    for (const def of ast) {
      switch (def.type) {
        case "interface": {
          const rec = interfaces.get(def.name) || {
            partials: [],
            includes: [],
          };
          if (def.partial) rec.partials.push(def);
          else rec.base = def;
          interfaces.set(def.name, rec);
          break;
        }
        case "interface mixin":
          mixins.set(def.name, def);
          break;
        case "includes":
          includeRel.push({ target: def.target, mixin: def.includes });
          break;
        case "dictionary":
          dicts.set(def.name, def);
          break;
        case "enum":
          enums.set(def.name, def);
          break;
        case "namespace":
          namespaces.push(def);
          break;
        case "callback":
        case "callback interface":
          callbacks.add(def.name);
          break;
        case "typedef":
          typedefs.set(def.name, def.idlType);
          break;
      }
    }
  }

  {
    const hdr = ["\n"];
    const src = ["\n"];

    for (const e of enums.values()) {
      hdr.push(`DECLARE_EMLITE_TYPE(${e.name}, em_Val);`);
      src.push(`DEFINE_EMLITE_TYPE(${e.name}, em_Val);`);
      for (const v of e.values) {
        hdr.push(`${e.name} ${e.name}_${fixIdent(v.value)}();`);
        src.push(
          `${e.name} ${e.name}_${fixIdent(v.value)}() { return (${
            e.name
          }){em_Val_from_string("${v.value}")}; }`
        );
      }
    }

    writePair("enums", hdr, src);
  }

  includeRel.forEach(({ target, mixin }) => {
    const rec = interfaces.get(target);
    if (rec) rec.includes.push(mixin);
  });

  for (const [name, rec] of interfaces) {
    const mem = new Map();
    const cons = new Map();
    const addM = (m) => mem.set(`${m.type}:${m.name}`, m);
    const addC = (c) => cons.set(c.name, c);

    if (rec.base) {
      rec.base.members.forEach(addM);
      rec.base.constants?.forEach(addC);
    }
    rec.partials.forEach((p) => {
      p.members.forEach(addM);
      p.constants?.forEach(addC);
    });
    rec.includes.forEach((mn) => {
      const mx = mixins.get(mn);
      if (mx) {
        mx.members.forEach(addM);
        mx.constants?.forEach(addC);
      }
    });

    rec.members = [...mem.values()];
    rec.consts = [...cons.values()];
    interfaces.set(name, rec);
  }

  for (const [iname, rec] of interfaces) {
    const hdr = ["\n"],
      src = ["\n"];
    let parent = rec.base?.inheritance || null;

    const fwd = new Set();
    const srcInc = new Set();
    const hdrInc = new Set(parent ? [`"${parent}.h"`] : []);
    const localEnums = new Set();
    const localDicts = [];

    rec.members.forEach((m) => {
      refNames(m).forEach((tn) => {
        if (dicts.has(tn)) {
          if (dictOwner.has(tn)) {
            const hdrFile = dictOwner.get(tn);
            hdrInc.add(`"${hdrFile}"`);
            srcInc.add(hdrFile);
          } else {
            // not sure how to deal with these!
            fwd.add(tn);
            localDicts.push(dicts.get(tn));
          }
          return;
        }
        if (enums.has(tn)) {
          localEnums.add(enums.get(tn));
          return;
        }
        if (interfaces.has(tn) && tn !== parent) {
          // not sure how to deal with these!
          fwd.add(tn);
          srcInc.add(`${tn}.h`);
        }
      });
    });

    localDicts.forEach((d) => {
      d.members.forEach((dm) => {
        refNames(dm).forEach((tn) => {
          if (dicts.has(tn)) {
            const hdrFile = dictOwner.get(tn);
            if (hdrFile) {
              hdrInc.push(hdrFile);
              srcInc.add(hdrFile);
            }
            return;
          }
          if (interfaces.has(tn) && tn !== parent) {
            fwd.add(tn);
            srcInc.add(`${tn}.h`);
          }
        });
      });
    });

    localDicts.forEach((d) => embedDict(d, hdr, src, iname));

    hdr.push(
      `DECLARE_EMLITE_TYPE(${iname}, ${parent ? `${parent}` : "em_Val"});`
    );
    src.push(
      `DEFINE_EMLITE_TYPE(${iname}, ${parent ? `${parent}` : "em_Val"});`,
      ""
    );

    if (!parent) parent = "em_Val";

    rec.consts.forEach((c) =>
      hdr.push(`const ${cpp(c.idlType)} ${iname}_${c.name} = ${c.value.value};`)
    );
    rec.members.forEach((m) => {
      const isStatic = m.static === true || m.special === "static";
      if (m.type === "attribute") {
        const { H, S } = emitAttr(m, iname, isStatic, parent);
        hdr.push(...H);
        src.push(...S);
      } else if (m.type === "operation") {
        const { H, S } = emitOp(m, iname, isStatic, parent);
        hdr.push(...H);
        src.push(...S);
      } else if (
        m.type === "constructor" ||
        (m.type === "operation" && m.special === "constructor")
      ) {
        const { H, S } = emitCtor(m, iname, parent);
        hdr.push(...H);
        src.push(...S);
      }
    });

    writePair(iname, hdr, src);
  }
  for (const ns of namespaces) {
    const hdr = ["\n"];
    const src = ["\n"];

    ns.members
      .filter((m) => m.type === "operation")
      .forEach((op) => {
        const ret = cpp(op.idlType || "undefined");
        const cppName = fixIdent(op.name);
        const variants = variantsOf(op.arguments);
        let i = 0;
        const sz = variants.length;
        for (const v of variants) {
          const declHdr = argDecl(v);
          const declSrc = declHdr;
          const callArgs = v
            .map((a) => `em_Val_from(${fixIdent(a.name)})`)
            .join(", ");

          hdr.push(
            `${ret} ${ns.name}_${cppName}${sz === 1 ? "" : i}(${declHdr});`
          );

          const callExpr =
            `em_Val_call(em_Val_global("${ns.name.toLowerCase()}"), "${
              op.name
            }"` + (callArgs ? `, ${callArgs})` : ")");

          src.push(
            `${ret} ${ns.name}_${cppName}${sz === 1 ? "" : i}(${declSrc}) {`,
            `    return em_Val_as(${ret}, ${callExpr});`,
            `}`,
            ""
          );
          i += 1;
        }
      });

    writePair(ns.name, hdr, src);
  }
}
