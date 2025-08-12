#include <jsbind/Symbol.h>

DEFINE_EMLITE_TYPE(jb_Symbol, em_Val);

// Factory methods
jb_Symbol jb_Symbol_create(void) {
    em_Val symbol_ctor = em_Val_global("Symbol");
    em_Val result      = em_Val_call(symbol_ctor, "constructor");
    return (jb_Symbol){.inner = result};
}

jb_Symbol jb_Symbol_create_with_description(const jb_String *description) {
    em_Val symbol_ctor = em_Val_global("Symbol");
    em_Val result      = em_Val_call(symbol_ctor, "constructor", description->inner);
    return (jb_Symbol){.inner = result};
}

jb_Symbol jb_Symbol_create_with_cstring(const char *description) {
    em_Val symbol_ctor = em_Val_global("Symbol");
    em_Val desc_val    = em_Val_from_string(description);
    em_Val result      = em_Val_call(symbol_ctor, "constructor", desc_val);
    return (jb_Symbol){.inner = result};
}

// Clone/copy
jb_Symbol jb_Symbol_clone(const jb_Symbol *sym) { return (jb_Symbol){.inner = sym->inner}; }

// Properties
jb_Any jb_Symbol_description(const jb_Symbol *sym) {
    em_Val prop   = em_Val_from_string("description");
    em_Val result = em_Val_get(sym->inner, prop);
    return (jb_Any){.inner = result};
}

// Static well-known symbols
jb_Symbol jb_Symbol_iterator(void) {
    em_Val symbol_ctor = em_Val_global("Symbol");
    em_Val prop        = em_Val_from_string("iterator");
    em_Val result      = em_Val_get(symbol_ctor, prop);
    return (jb_Symbol){.inner = result};
}

jb_Symbol jb_Symbol_asyncIterator(void) {
    em_Val symbol_ctor = em_Val_global("Symbol");
    em_Val prop        = em_Val_from_string("asyncIterator");
    em_Val result      = em_Val_get(symbol_ctor, prop);
    return (jb_Symbol){.inner = result};
}

jb_Symbol jb_Symbol_hasInstance(void) {
    em_Val symbol_ctor = em_Val_global("Symbol");
    em_Val prop        = em_Val_from_string("hasInstance");
    em_Val result      = em_Val_get(symbol_ctor, prop);
    return (jb_Symbol){.inner = result};
}

jb_Symbol jb_Symbol_isConcatSpreadable(void) {
    em_Val symbol_ctor = em_Val_global("Symbol");
    em_Val prop        = em_Val_from_string("isConcatSpreadable");
    em_Val result      = em_Val_get(symbol_ctor, prop);
    return (jb_Symbol){.inner = result};
}

jb_Symbol jb_Symbol_match(void) {
    em_Val symbol_ctor = em_Val_global("Symbol");
    em_Val prop        = em_Val_from_string("match");
    em_Val result      = em_Val_get(symbol_ctor, prop);
    return (jb_Symbol){.inner = result};
}

jb_Symbol jb_Symbol_matchAll(void) {
    em_Val symbol_ctor = em_Val_global("Symbol");
    em_Val prop        = em_Val_from_string("matchAll");
    em_Val result      = em_Val_get(symbol_ctor, prop);
    return (jb_Symbol){.inner = result};
}

jb_Symbol jb_Symbol_replace(void) {
    em_Val symbol_ctor = em_Val_global("Symbol");
    em_Val prop        = em_Val_from_string("replace");
    em_Val result      = em_Val_get(symbol_ctor, prop);
    return (jb_Symbol){.inner = result};
}

jb_Symbol jb_Symbol_search(void) {
    em_Val symbol_ctor = em_Val_global("Symbol");
    em_Val prop        = em_Val_from_string("search");
    em_Val result      = em_Val_get(symbol_ctor, prop);
    return (jb_Symbol){.inner = result};
}

jb_Symbol jb_Symbol_species(void) {
    em_Val symbol_ctor = em_Val_global("Symbol");
    em_Val prop        = em_Val_from_string("species");
    em_Val result      = em_Val_get(symbol_ctor, prop);
    return (jb_Symbol){.inner = result};
}

jb_Symbol jb_Symbol_split(void) {
    em_Val symbol_ctor = em_Val_global("Symbol");
    em_Val prop        = em_Val_from_string("split");
    em_Val result      = em_Val_get(symbol_ctor, prop);
    return (jb_Symbol){.inner = result};
}

jb_Symbol jb_Symbol_toPrimitive(void) {
    em_Val symbol_ctor = em_Val_global("Symbol");
    em_Val prop        = em_Val_from_string("toPrimitive");
    em_Val result      = em_Val_get(symbol_ctor, prop);
    return (jb_Symbol){.inner = result};
}

jb_Symbol jb_Symbol_toStringTag(void) {
    em_Val symbol_ctor = em_Val_global("Symbol");
    em_Val prop        = em_Val_from_string("toStringTag");
    em_Val result      = em_Val_get(symbol_ctor, prop);
    return (jb_Symbol){.inner = result};
}

jb_Symbol jb_Symbol_unscopables(void) {
    em_Val symbol_ctor = em_Val_global("Symbol");
    em_Val prop        = em_Val_from_string("unscopables");
    em_Val result      = em_Val_get(symbol_ctor, prop);
    return (jb_Symbol){.inner = result};
}

// Static registry methods
jb_Symbol jb_Symbol_for(const jb_String *key) {
    em_Val symbol_ctor = em_Val_global("Symbol");
    em_Val result      = em_Val_call(symbol_ctor, "for", key->inner);
    return (jb_Symbol){.inner = result};
}

jb_Symbol jb_Symbol_for_cstring(const char *key) {
    em_Val symbol_ctor = em_Val_global("Symbol");
    em_Val key_val     = em_Val_from_string(key);
    em_Val result      = em_Val_call(symbol_ctor, "for", key_val);
    return (jb_Symbol){.inner = result};
}

jb_Any jb_Symbol_keyFor(const jb_Symbol *symbol) {
    em_Val symbol_ctor = em_Val_global("Symbol");
    em_Val result      = em_Val_call(symbol_ctor, "keyFor", symbol->inner);
    return (jb_Any){.inner = result};
}

// Utility methods
jb_String jb_Symbol_toString(const jb_Symbol *sym) {
    em_Val result = em_Val_call(sym->inner, "toString");
    return (jb_String){.inner = result};
}

jb_String jb_Symbol_valueOf(const jb_Symbol *sym) {
    em_Val result = em_Val_call(sym->inner, "valueOf");
    return (jb_String){.inner = result};
}

bool jb_Symbol_empty(const jb_Symbol *sym) {
    jb_Any desc = jb_Symbol_description(sym);
    return em_Val_is_undefined(desc.inner);
}

size_t jb_Symbol_hash(const jb_Symbol *sym) {
    // Simple hash based on the string representation
    jb_String str = jb_Symbol_toString(sym);
    // Use a simple string hash algorithm
    size_t hash = 0;
    // Since we can't access the actual string in this environment,
    // use the em_Val as a hash directly
    return (size_t)em_Val_as_int(sym->inner);
}

// Comparison operations (symbols don't have natural ordering, but we provide utilities)
bool jb_Symbol_less_than(const jb_Symbol *a, const jb_Symbol *b) {
    // Symbols don't have natural ordering, but we can compare based on internal values
    return em_Val_as_int(a->inner) < em_Val_as_int(b->inner);
}

bool jb_Symbol_greater_than(const jb_Symbol *a, const jb_Symbol *b) {
    return em_Val_as_int(a->inner) > em_Val_as_int(b->inner);
}

bool jb_Symbol_less_equal(const jb_Symbol *a, const jb_Symbol *b) {
    return em_Val_as_int(a->inner) <= em_Val_as_int(b->inner);
}

bool jb_Symbol_greater_equal(const jb_Symbol *a, const jb_Symbol *b) {
    return em_Val_as_int(a->inner) >= em_Val_as_int(b->inner);
}

bool jb_Symbol_equals(const jb_Symbol *a, const jb_Symbol *b) {
    // Use JavaScript strict equality check
    em_Val result = em_Val_call(em_Val_global("Object"), "is", a->inner, b->inner);
    return em_Val_as_bool(result);
}