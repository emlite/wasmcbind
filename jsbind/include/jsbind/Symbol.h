#pragma once

#include "Any.h"
#include "String.h"
#include "utils.h"
#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(jb_Symbol, em_Val);

// Factory methods
jb_Symbol jb_Symbol_create(void); // Symbol()
jb_Symbol jb_Symbol_create_with_description(const jb_String *description);
jb_Symbol jb_Symbol_create_with_cstring(const char *description);

// Clone/copy
jb_Symbol jb_Symbol_clone(const jb_Symbol *sym);

// Properties
jb_Any jb_Symbol_description(const jb_Symbol *sym); // Returns String or Undefined

// Static well-known symbols
jb_Symbol jb_Symbol_iterator(void);
jb_Symbol jb_Symbol_asyncIterator(void);
jb_Symbol jb_Symbol_hasInstance(void);
jb_Symbol jb_Symbol_isConcatSpreadable(void);
jb_Symbol jb_Symbol_match(void);
jb_Symbol jb_Symbol_matchAll(void);
jb_Symbol jb_Symbol_replace(void);
jb_Symbol jb_Symbol_search(void);
jb_Symbol jb_Symbol_species(void);
jb_Symbol jb_Symbol_split(void);
jb_Symbol jb_Symbol_toPrimitive(void);
jb_Symbol jb_Symbol_toStringTag(void);
jb_Symbol jb_Symbol_unscopables(void);

// Static registry methods
jb_Symbol jb_Symbol_for(const jb_String *key); // Symbol.for()
jb_Symbol jb_Symbol_for_cstring(const char *key);
jb_Any jb_Symbol_keyFor(const jb_Symbol *symbol); // Returns String or Undefined

// Utility methods
jb_String jb_Symbol_toString(const jb_Symbol *sym);
jb_String jb_Symbol_valueOf(const jb_Symbol *sym);
bool jb_Symbol_empty(const jb_Symbol *sym); // Has no description
size_t jb_Symbol_hash(const jb_Symbol *sym);

// Comparison operations (for ordering in containers)
bool jb_Symbol_less_than(const jb_Symbol *a, const jb_Symbol *b);
bool jb_Symbol_greater_than(const jb_Symbol *a, const jb_Symbol *b);
bool jb_Symbol_less_equal(const jb_Symbol *a, const jb_Symbol *b);
bool jb_Symbol_greater_equal(const jb_Symbol *a, const jb_Symbol *b);
bool jb_Symbol_equals(const jb_Symbol *a, const jb_Symbol *b);

#ifdef __cplusplus
}
#endif