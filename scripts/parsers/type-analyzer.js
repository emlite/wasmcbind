import { flat } from "../utils.js";

/**
 * Extract all type references from a list of members (for interfaces, dictionaries, etc.)
 */
export function getAllTypeRefs(members) {
  const refs = new Set();
  
  members.forEach((member) => {
    extractTypeRefs(member).forEach((ref) => refs.add(ref));
  });
  
  return refs;
}

/**
 * Extract type references from a single member
 */
export function extractTypeRefs(member) {
  const refs = new Set();
  
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

    refs.add(n);

    if (typeof t === "object" && t.idlType) scan(t.idlType);
  };

  if (member.type === "attribute") {
    scan(member.idlType);
  } else if (member.type === "operation") {
    scan(member.idlType);
    member.arguments?.forEach((a) => scan(a.idlType));
  } else if (member.type === "constructor") {
    member.arguments?.forEach((a) => scan(a.idlType));
  } else if (member.type === "field") {
    // Critical fix: handle dictionary field type - missing in original
    scan(member.idlType);
  }
  
  return refs;
}