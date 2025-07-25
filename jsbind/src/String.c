#include <jsbind/String.h>

#define DEFINE_STRING_FUNCS(name)                          \
    size_t jb_##name##_byte_len(const jb_##name *s) {      \
        const char *str = em_Val_as_string(s->inner);      \
        size_t len      = 0;                               \
        while (str && str[len] != '\0')                    \
            ++len;                                         \
        return len;                                        \
    }                                                      \
    bool jb_##name##_is_empty(const jb_##name *s) {        \
        return jb_##name##_length(s) == 0;                 \
    }                                                      \
    jb_##name jb_##name##_char_at(                         \
        const jb_##name *s, size_t i                       \
    ) {                                                    \
        em_Val idx = em_Val_from_int((int)i);              \
        em_Val v   = em_Val_call(s->inner, "charAt", idx); \
        return (jb_##name){.inner = v};                    \
    }                                                      \
    const char *jb_##name##_as_str(const jb_##name *s) {   \
        return em_Val_as_string(s->inner);                 \
    }                                                      \
    size_t jb_##name##_length(const jb_##name *s) {        \
        em_Val prop = em_Val_from_string("length");        \
        em_Val v    = em_Val_get(s->inner, prop);          \
        return (size_t)em_Val_as_int(v);                   \
    }                                                      \
    int jb_##name##_char_code_at(                          \
        const jb_##name *s, size_t idx                     \
    ) {                                                    \
        em_Val idxv = em_Val_from_int((int)idx);           \
        em_Val v =                                         \
            em_Val_call(s->inner, "charCodeAt", idxv);     \
        if (em_Val_is_undefined(v))                        \
            return -1;                                     \
        return em_Val_as_int(v);                           \
    }                                                      \
    void jb_##name##_set(                                  \
        jb_##name *s, size_t idx, char val                 \
    ) {                                                    \
        em_Val idxv = em_Val_from_int((int)idx);           \
        em_Val valv = em_Val_from_int((int)val);           \
        em_Val_set(s->inner, idxv, valv);                  \
    }                                                      \
    jb_##name jb_##name##_at(                              \
        const jb_##name *s, int idx                        \
    ) {                                                    \
        em_Val idxv = em_Val_from_int(idx);                \
        em_Val v    = em_Val_call(s->inner, "at", idxv);   \
        return (jb_##name){.inner = v};                    \
    }                                                      \
    int jb_##name##_code_point_at(                         \
        const jb_##name *s, size_t idx                     \
    ) {                                                    \
        em_Val idxv = em_Val_from_int((int)idx);           \
        em_Val v =                                         \
            em_Val_call(s->inner, "codePointAt", idxv);    \
        if (em_Val_is_undefined(v))                        \
            return -1;                                     \
        return em_Val_as_int(v);                           \
    }                                                      \
    jb_##name jb_##name##_concat(                          \
        const jb_##name *a, const jb_##name *b             \
    ) {                                                    \
        em_Val v =                                         \
            em_Val_call(a->inner, "concat", b->inner);     \
        return (jb_##name){.inner = v};                    \
    }                                                      \
    bool jb_##name##_ends_with(                            \
        const jb_##name *s, const char *pat                \
    ) {                                                    \
        em_Val patv = em_Val_from_string(pat);             \
        em_Val v =                                         \
            em_Val_call(s->inner, "endsWith", patv);       \
        return em_Val_as_bool(v);                          \
    }                                                      \
    bool jb_##name##_includes(                             \
        const jb_##name *s, const char *pat                \
    ) {                                                    \
        em_Val patv = em_Val_from_string(pat);             \
        em_Val v =                                         \
            em_Val_call(s->inner, "includes", patv);       \
        return em_Val_as_bool(v);                          \
    }                                                      \
    int jb_##name##_index_of(                              \
        const jb_##name *s, const char *pat                \
    ) {                                                    \
        em_Val patv = em_Val_from_string(pat);             \
        em_Val v = em_Val_call(s->inner, "indexOf", patv); \
        int n    = em_Val_as_int(v);                       \
        return n == -1 ? -1 : n;                           \
    }                                                      \
    bool jb_##name##_is_well_formed(const jb_##name *s) {  \
        em_Val v = em_Val_call(s->inner, "isWellFormed");  \
        return em_Val_as_bool(v);                          \
    }                                                      \
    int jb_##name##_last_index_of(                         \
        const jb_##name *s, const char *pat                \
    ) {                                                    \
        em_Val patv = em_Val_from_string(pat);             \
        em_Val v =                                         \
            em_Val_call(s->inner, "lastIndexOf", patv);    \
        int n = em_Val_as_int(v);                          \
        return n == -1 ? -1 : n;                           \
    }                                                      \
    int jb_##name##_locale_compare(                        \
        const jb_##name *s, const char *other              \
    ) {                                                    \
        em_Val otherv = em_Val_from_string(other);         \
        em_Val v      = em_Val_call(                       \
            s->inner, "localeCompare", otherv         \
        );                                            \
        return em_Val_as_int(v);                           \
    }

DEFINE_STRING_FUNCS(DOMString);
DEFINE_STRING_FUNCS(CSSOMString);
DEFINE_STRING_FUNCS(USVString);
DEFINE_STRING_FUNCS(ByteString);
