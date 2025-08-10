import { 
  writePair, 
  fixIdent, 
  cpp, 
  argtypeFix,
  getHeaderPreamble,
  getHeaderPostamble,
  getSourcePreamble
} from "../utils.js";

function emitDictAttr(attr, dictName, parent) {
  const H = [], S = [];
  const type = cpp(attr.idlType);

  H.push(
    `\n${type} ${dictName}_${fixIdent(attr.name)}(const ${dictName} *self);`
  );

  S.push(
    `\n${type} ${dictName}_${fixIdent(attr.name)}(const ${dictName} *self) {`,
    `    return em_Val_as(${type}, em_Val_get(${parent}_as_val(self->inner), em_Val_from("${attr.name}")));`,
    `}`,
    ""
  );

  // Add setter if not required (dictionaries have setters by default)
  H.push(
    `\nvoid ${dictName}_set_${fixIdent(
      attr.name
    )}(${dictName}* self, ${argtypeFix(type)} value);`
  );
  S.push(
    `\nvoid ${dictName}_set_${fixIdent(
      attr.name
    )}(${dictName}* self, ${argtypeFix(type)} value) {`,
    `    em_Val_set(${parent}_as_val(self->inner), em_Val_from("${attr.name}"), em_Val_from(value));`,
    `}`,
    ""
  );

  return { H, S };
}

export function generateDictionary(dictName, dict, dependencies) {
  // Start with proper header structure
  const hdr = [...getHeaderPreamble(dependencies.hdrIncludes)];
  const src = [...getSourcePreamble(dictName, dependencies.srcIncludes)];
  
  // Add forward declarations in header
  if (dependencies.forwardDecls.length > 0) {
    dependencies.forwardDecls.forEach((decl) => {
      hdr.push(`typedef struct ${decl} ${decl};`);
    });
    hdr.push("");
  }

  // Determine parent class - critical inheritance fix
  const parent = dict.inheritance && dict.inheritance !== dictName 
    ? dict.inheritance 
    : "em_Val";

  // Generate the main dictionary declaration
  hdr.push(`DECLARE_EMLITE_TYPE(${dictName}, ${parent});`);
  src.push(`DEFINE_EMLITE_TYPE(${dictName}, ${parent});`, "");

  // Generate member accessors
  dict.members.forEach((m) => {
    if (m.type === "field") {
      const { H, S } = emitDictAttr(m, dictName, parent);
      hdr.push(...H);
      src.push(...S);
    }
  });

  // Add constructor
  hdr.push(`\n${dictName} ${dictName}_new();`);
  src.push(
    `\n${dictName} ${dictName}_new() {`,
    `    em_Val obj = em_Val_object();`,
    `    return ${dictName}_from_val(&obj);`,
    `}`,
    ""
  );

  // Add header postamble
  hdr.push(...getHeaderPostamble());

  writePair(dictName, hdr, src);
}