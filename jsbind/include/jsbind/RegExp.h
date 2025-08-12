#pragma once

#include "Any.h"
#include "Array.h"
#include "Error.h"
#include "String.h"
#include "utils.h"
#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(jb_RegExp, em_Val);

// Factory methods
jb_RegExp jb_RegExp_create(void);                               // Empty RegExp
jb_Any jb_RegExp_create_from_pattern(const jb_String *pattern); // Returns RegExp or Error
jb_Any jb_RegExp_create_from_pattern_flags(
    const jb_String *pattern, const jb_String *flags
);                                                         // Returns RegExp or Error
jb_Any jb_RegExp_create_from_cstring(const char *pattern); // Returns RegExp or Error
jb_Any jb_RegExp_create_from_cstring_flags(
    const char *pattern, const char *flags
); // Returns RegExp or Error

// Clone/copy
jb_RegExp jb_RegExp_clone(const jb_RegExp *regex);

// Properties
jb_String jb_RegExp_source(const jb_RegExp *regex);
jb_String jb_RegExp_flags(const jb_RegExp *regex);
bool jb_RegExp_global(const jb_RegExp *regex);
bool jb_RegExp_ignoreCase(const jb_RegExp *regex);
bool jb_RegExp_multiline(const jb_RegExp *regex);
bool jb_RegExp_dotAll(const jb_RegExp *regex);
bool jb_RegExp_unicode(const jb_RegExp *regex);
bool jb_RegExp_sticky(const jb_RegExp *regex);
size_t jb_RegExp_lastIndex(const jb_RegExp *regex);
void jb_RegExp_setLastIndex(jb_RegExp *regex, size_t index);

// Core methods
bool jb_RegExp_test(const jb_RegExp *regex, const jb_String *str);
jb_Any jb_RegExp_exec(const jb_RegExp *regex, const jb_String *str); // Returns Array or Null

// STL-like methods
bool jb_RegExp_contains(const jb_RegExp *regex, const jb_String *str);
jb_Any jb_RegExp_find(const jb_RegExp *regex, const jb_String *str);      // Returns Array or Null
jb_Array jb_RegExp_findAll(const jb_RegExp *regex, const jb_String *str); // Requires global flag

// Static factory methods for common patterns
jb_Any jb_RegExp_literal(const jb_String *text);    // Returns RegExp or Error - escaped literal
jb_Any jb_RegExp_literal_cstring(const char *text); // Returns RegExp or Error
jb_Any jb_RegExp_caseInsensitive(const jb_String *pattern);     // Returns RegExp or Error
jb_Any jb_RegExp_caseInsensitive_cstring(const char *pattern);  // Returns RegExp or Error
jb_Any jb_RegExp_global_pattern(const jb_String *pattern);      // Returns RegExp or Error
jb_Any jb_RegExp_global_cstring(const char *pattern);           // Returns RegExp or Error
jb_Any jb_RegExp_globalIgnoreCase(const jb_String *pattern);    // Returns RegExp or Error
jb_Any jb_RegExp_globalIgnoreCase_cstring(const char *pattern); // Returns RegExp or Error
jb_Any jb_RegExp_multiline_pattern(const jb_String *pattern);   // Returns RegExp or Error
jb_Any jb_RegExp_multiline_cstring(const char *pattern);        // Returns RegExp or Error

// Iterator support for global matches
typedef struct {
    em_Val regexp;
    em_Val text;
    em_Val current_match;
    bool at_end;
} jb_RegExp_MatchIterator;

// Iterator methods
jb_RegExp_MatchIterator jb_RegExp_begin(const jb_RegExp *regex, const jb_String *text);
jb_RegExp_MatchIterator jb_RegExp_end(const jb_RegExp *regex, const jb_String *text);
bool jb_RegExp_iterator_not_equal(
    const jb_RegExp_MatchIterator *a, const jb_RegExp_MatchIterator *b
);
bool jb_RegExp_iterator_equal(const jb_RegExp_MatchIterator *a, const jb_RegExp_MatchIterator *b);
jb_Array jb_RegExp_iterator_deref(const jb_RegExp_MatchIterator *iter);
void jb_RegExp_iterator_next(jb_RegExp_MatchIterator *iter);

#ifdef __cplusplus
}
#endif