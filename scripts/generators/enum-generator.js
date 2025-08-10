import { enums } from "../globals.js";
import { 
  writePair, 
  fixIdent,
  getHeaderPreamble,
  getHeaderPostamble,
  getSourcePreamble
} from "../utils.js";

export function generateEnums() {
  // Start with proper header structure
  const hdr = [...getHeaderPreamble()];
  const src = [...getSourcePreamble("enums")];

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

  // Add header postamble
  hdr.push(...getHeaderPostamble());

  writePair("enums", hdr, src);
}