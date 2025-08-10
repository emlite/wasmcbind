import { 
  writePair, 
  fixIdent, 
  cpp, 
  argtypeFix, 
  variantsOf, 
  argDecl,
  getHeaderPreamble,
  getHeaderPostamble,
  getSourcePreamble
} from "../utils.js";

function emitAttr(attr, owner, isStatic = false, parent0) {
  const H = [], S = [];
  const type = cpp(attr.idlType);
  const parent = parent0 ? parent0 : "em_Val";

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
  const H = [], S = [];
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

export function generateInterface(interfaceName, interfaceRec, dependencies) {
  // Start with proper header structure
  const hdr = [...getHeaderPreamble(dependencies.hdrIncludes)];
  const src = [...getSourcePreamble(interfaceName, dependencies.srcIncludes)];
  
  // Add forward declarations in header
  if (dependencies.forwardDecls.length > 0) {
    dependencies.forwardDecls.forEach((decl) => {
      hdr.push(`typedef struct ${decl} ${decl};`);
    });
    hdr.push("");
  }

  const parent = interfaceRec.inheritance || null;

  // Generate the main interface declaration
  hdr.push(
    `DECLARE_EMLITE_TYPE(${interfaceName}, ${parent ? `${parent}` : "em_Val"});`
  );
  src.push(
    `DEFINE_EMLITE_TYPE(${interfaceName}, ${parent ? `${parent}` : "em_Val"});`,
    ""
  );

  const parentType = parent || "em_Val";

  // Generate constants
  interfaceRec.consts?.forEach((c) =>
    hdr.push(`const ${cpp(c.idlType)} ${interfaceName}_${c.name} = ${c.value.value};`)
  );

  // Generate members
  interfaceRec.members.forEach((m) => {
    const isStatic = m.static === true || m.special === "static";
    if (m.type === "attribute") {
      const { H, S } = emitAttr(m, interfaceName, isStatic, parentType);
      hdr.push(...H);
      src.push(...S);
    } else if (m.type === "operation") {
      const { H, S } = emitOp(m, interfaceName, isStatic, parentType);
      hdr.push(...H);
      src.push(...S);
    } else if (
      m.type === "constructor" ||
      (m.type === "operation" && m.special === "constructor")
    ) {
      const { H, S } = emitCtor(m, interfaceName, parentType);
      hdr.push(...H);
      src.push(...S);
    }
  });

  // Add header postamble
  hdr.push(...getHeaderPostamble());

  writePair(interfaceName, hdr, src);
}