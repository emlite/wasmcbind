import { 
  writePair, 
  fixIdent, 
  cpp, 
  variantsOf, 
  argDecl,
  getHeaderPreamble,
  getHeaderPostamble,
  getSourcePreamble
} from "../utils.js";

export function generateNamespace(nsRec, dependencies) {
  // Start with proper header structure  
  const hdr = [...getHeaderPreamble(dependencies.hdrIncludes)];
  const src = [...getSourcePreamble(nsRec.name, dependencies.srcIncludes)];
  
  // Add forward declarations in header
  if (dependencies.forwardDecls.length > 0) {
    dependencies.forwardDecls.forEach((decl) => {
      hdr.push(`typedef struct ${decl} ${decl};`);
    });
    hdr.push("");
  }

  // Generate namespace functions - now includes partial namespace merging
  nsRec.members
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
          `${ret} ${nsRec.name}_${cppName}${sz === 1 ? "" : i}(${declHdr});`
        );

        const callExpr =
          `em_Val_call(em_Val_global("${nsRec.name.toLowerCase()}"), "${
            op.name
          }"` + (callArgs ? `, ${callArgs})` : ")");

        src.push(
          `${ret} ${nsRec.name}_${cppName}${sz === 1 ? "" : i}(${declSrc}) {`,
          `    return em_Val_as(${ret}, ${callExpr});`,
          `}`,
          ""
        );
        i += 1;
      }
    });

  // Add header postamble
  hdr.push(...getHeaderPostamble());

  writePair(nsRec.name, hdr, src);
}