#pragma once

#include "Any.h"
#include "utils.h"
#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(jb_String, em_Val);

#define JSSTR(x) ((jb_String){.inner = em_Val_from(x)})

typedef struct jb_Array jb_Array;

size_t jb_String_byte_len(const jb_String *s);
bool jb_String_is_empty(const jb_String *s);
jb_String jb_String_char_at(const jb_String *s, size_t i);
const char *jb_String_as_str(const jb_String *s);
size_t jb_String_length(const jb_String *s);
int jb_String_char_code_at(const jb_String *s, size_t idx);
void jb_String_set(jb_String *s, size_t idx, char val);
jb_String jb_String_at(const jb_String *s, int idx);
int jb_String_code_point_at(const jb_String *s, size_t idx);
jb_String jb_String_concat(
    const jb_String *a, const jb_String *b
);
bool jb_String_ends_with(
    const jb_String *s, const char *pat
);
bool jb_String_includes(
    const jb_String *s, const char *pat
);
int jb_String_index_of(const jb_String *s, const char *pat);
bool jb_String_is_well_formed(const jb_String *s);
int jb_String_last_index_of(
    const jb_String *s, const char *pat
);
int jb_String_locale_compare(
    const jb_String *s, const char *other
);
jb_Any jb_String_match(
    const jb_String *s, const jb_Any *pat
);
jb_Any jb_String_match_all(
    const jb_String *s, const jb_Any *pat
);
jb_String jb_String_normalize(
    const jb_String *s, const char *form
);
jb_String jb_String_pad_end(
    const jb_String *s, size_t target_len, const char *pad
);
jb_String jb_String_pad_start(
    const jb_String *s, size_t target_len, const char *pad
);
jb_String jb_String_repeat(
    const jb_String *s, size_t count
);
jb_String jb_String_replace(
    const jb_String *s,
    const jb_Any *pat,
    const jb_Any *repl
);
jb_String jb_String_replace_all(
    const jb_String *s,
    const jb_Any *pat,
    const jb_Any *repl
);
int jb_String_search(const jb_String *s, const jb_Any *pat);
jb_String jb_String_slice(
    const jb_String *s, int start, int end
);
jb_Array jb_String_split(
    const jb_String *s, const char *sep
);
bool jb_String_starts_with(
    const jb_String *s, const char *pat
);
jb_String jb_String_substring(
    const jb_String *s, size_t start, int end
);
jb_String jb_String_to_locale_lower_case(const jb_String *s
);
jb_String jb_String_to_locale_upper_case(const jb_String *s
);
jb_String jb_String_to_lower_case(const jb_String *s);
jb_String jb_String_to_upper_case(const jb_String *s);
jb_String jb_String_to_well_formed(const jb_String *s);
jb_String jb_String_trim(const jb_String *s);
jb_String jb_String_trim_end(const jb_String *s);
jb_String jb_String_trim_start(const jb_String *s);
jb_String jb_String_toString(const jb_String *s);
jb_String jb_String_substr(
    const jb_String *s, int from, int length
);
jb_String jb_String_valueOf(const jb_String *s);

#ifdef __cplusplus
}
#endif