#pragma once

#include "utils.h"
#include <emlite/emlite.h>
#include <stdbool.h>
#include <stddef.h>

#define DOMSTR(x) ((jb_DOMString){.inner = em_Val_from(x)})

#define CSSStr(x)                                          \
    ((jb_CSSOMString){.inner = em_Val_from(x)})

#define USVStr(x) ((jb_USVString){.inner = em_Val_from(x)})

#define ByteStr(x)                                         \
    ((jb_ByteString){.inner = em_Val_from(x)})

DECLARE_EMLITE_TYPE(jb_DOMString, em_Val);

DECLARE_EMLITE_TYPE(jb_CSSOMString, em_Val);

DECLARE_EMLITE_TYPE(jb_USVString, em_Val);

DECLARE_EMLITE_TYPE(jb_ByteString, em_Val);

#define DECLARE_STRING_FUNCS(name)                         \
    size_t jb_##name##_byte_len(const jb_##name *s);       \
    bool jb_##name##_is_empty(const jb_##name *s);         \
    jb_##name jb_##name##_char_at(                         \
        const jb_##name *s, size_t i                       \
    );                                                     \
    const char *jb_##name##_as_str(const jb_##name *s);    \
    size_t jb_##name##_length(const jb_##name *s);         \
    int jb_##name##_char_code_at(                          \
        const jb_##name *s, size_t idx                     \
    );                                                     \
    void jb_##name##_set(                                  \
        jb_##name *s, size_t idx, char val                 \
    );                                                     \
    jb_##name jb_##name##_at(const jb_##name *s, int idx); \
    int jb_##name##_code_point_at(                         \
        const jb_##name *s, size_t idx                     \
    );                                                     \
    jb_##name jb_##name##_concat(                          \
        const jb_##name *a, const jb_##name *b             \
    );                                                     \
    bool jb_##name##_ends_with(                            \
        const jb_##name *s, const char *pat                \
    );                                                     \
    bool jb_##name##_includes(                             \
        const jb_##name *s, const char *pat                \
    );                                                     \
    int jb_##name##_index_of(                              \
        const jb_##name *s, const char *pat                \
    );                                                     \
    bool jb_##name##_is_well_formed(const jb_##name *s);   \
    int jb_##name##_last_index_of(                         \
        const jb_##name *s, const char *pat                \
    );                                                     \
    int jb_##name##_locale_compare(                        \
        const jb_##name *s, const char *other              \
    );

DECLARE_STRING_FUNCS(DOMString);
DECLARE_STRING_FUNCS(CSSOMString);
DECLARE_STRING_FUNCS(USVString);
DECLARE_STRING_FUNCS(ByteString);
