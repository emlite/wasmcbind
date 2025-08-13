#include <jsbind/Array.h>
#include <jsbind/String.h>

DEFINE_EMLITE_TYPE(jb_String, em_Val);

#define DEFINE_STRING_FUNCS(name)                                                                  \
    size_t jb_##name##_byte_len(const jb_##name *s) {                                              \
        char *str = em_Val_as_string(s->inner);                                                    \
        if (!str) return 0;                                                                        \
        size_t len = strlen(str);                                                                  \
        free(str);                                                                                 \
        return len;                                                                                \
    }                                                                                              \
    bool jb_##name##_is_empty(const jb_##name *s) { return jb_##name##_length(s) == 0; }           \
    jb_##name jb_##name##_char_at(const jb_##name *s, size_t i) {                                  \
        em_Val idx = em_Val_from_int((int)i);                                                      \
        em_Val v   = em_Val_call(s->inner, "charAt", idx);                                         \
        return (jb_##name){.inner = v};                                                            \
    }                                                                                              \
    char *jb_##name##_as_str(const jb_##name *s) { \
        if (!s) return NULL; \
        return em_Val_as_string(s->inner); \
    }      \
    size_t jb_##name##_length(const jb_##name *s) {                                                \
        if (!s) return 0;                                                                          \
        em_Val prop = em_Val_from_string("length");                                                \
        em_Val v    = em_Val_get(s->inner, prop);                                                  \
        if (em_Val_is_error(v) || em_Val_is_undefined(v)) return 0;                                \
        return (size_t)em_Val_as_int(v);                                                           \
    }                                                                                              \
    int jb_##name##_char_code_at(const jb_##name *s, size_t idx) {                                 \
        if (!s) return -1;                                                                         \
        em_Val idxv = em_Val_from_int((int)idx);                                                   \
        em_Val v    = em_Val_call(s->inner, "charCodeAt", idxv);                                   \
        if (em_Val_is_undefined(v) || em_Val_is_error(v))                                          \
            return -1;                                                                             \
        return em_Val_as_int(v);                                                                   \
    }                                                                                              \
    void jb_##name##_set(jb_##name *s, size_t idx, char val) {                                     \
        em_Val idxv = em_Val_from_int((int)idx);                                                   \
        em_Val valv = em_Val_from_int((int)val);                                                   \
        em_Val_set(s->inner, idxv, valv);                                                          \
    }                                                                                              \
    jb_##name jb_##name##_at(const jb_##name *s, int idx) {                                        \
        em_Val idxv = em_Val_from_int(idx);                                                        \
        em_Val v    = em_Val_call(s->inner, "at", idxv);                                           \
        return (jb_##name){.inner = v};                                                            \
    }                                                                                              \
    int jb_##name##_code_point_at(const jb_##name *s, size_t idx) {                                \
        if (!s) return -1;                                                                         \
        em_Val idxv = em_Val_from_int((int)idx);                                                   \
        em_Val v    = em_Val_call(s->inner, "codePointAt", idxv);                                  \
        if (em_Val_is_undefined(v) || em_Val_is_error(v))                                          \
            return -1;                                                                             \
        return em_Val_as_int(v);                                                                   \
    }                                                                                              \
    jb_##name jb_##name##_concat(const jb_##name *a, const jb_##name *b) {                         \
        em_Val v = em_Val_call(a->inner, "concat", b->inner);                                      \
        return (jb_##name){.inner = v};                                                            \
    }                                                                                              \
    bool jb_##name##_ends_with(const jb_##name *s, const char *pat) {                              \
        em_Val patv = em_Val_from_string(pat);                                                     \
        em_Val v    = em_Val_call(s->inner, "endsWith", patv);                                     \
        return em_Val_as_bool(v);                                                                  \
    }                                                                                              \
    bool jb_##name##_includes(const jb_##name *s, const char *pat) {                               \
        em_Val patv = em_Val_from_string(pat);                                                     \
        em_Val v    = em_Val_call(s->inner, "includes", patv);                                     \
        return em_Val_as_bool(v);                                                                  \
    }                                                                                              \
    int jb_##name##_index_of(const jb_##name *s, const char *pat) {                                \
        em_Val patv = em_Val_from_string(pat);                                                     \
        em_Val v    = em_Val_call(s->inner, "indexOf", patv);                                      \
        int n       = em_Val_as_int(v);                                                            \
        return n == -1 ? -1 : n;                                                                   \
    }                                                                                              \
    bool jb_##name##_is_well_formed(const jb_##name *s) {                                          \
        em_Val v = em_Val_call(s->inner, "isWellFormed");                                          \
        return em_Val_as_bool(v);                                                                  \
    }                                                                                              \
    int jb_##name##_last_index_of(const jb_##name *s, const char *pat) {                           \
        em_Val patv = em_Val_from_string(pat);                                                     \
        em_Val v    = em_Val_call(s->inner, "lastIndexOf", patv);                                  \
        int n       = em_Val_as_int(v);                                                            \
        return n == -1 ? -1 : n;                                                                   \
    }                                                                                              \
    int jb_##name##_locale_compare(const jb_##name *s, const char *other) {                        \
        em_Val otherv = em_Val_from_string(other);                                                 \
        em_Val v      = em_Val_call(s->inner, "localeCompare", otherv);                            \
        return em_Val_as_int(v);                                                                   \
    }                                                                                              \
    jb_Any jb_##name##_match(const jb_##name *s, const jb_Any *pat) {                              \
        return (jb_Any){.inner = em_Val_call(s->inner, "match", pat->inner)};                      \
    }                                                                                              \
    jb_Any jb_##name##_match_all(const jb_##name *s, const jb_Any *pat) {                          \
        return (jb_Any){.inner = em_Val_call(s->inner, "matchAll", pat->inner)};                   \
    }                                                                                              \
    jb_##name jb_##name##_normalize(const jb_##name *s, const char *form) {                        \
        if (form) {                                                                                \
            return (jb_##name                                                                      \
            ){.inner = em_Val_call(s->inner, "normalize", em_Val_from_string(form))};              \
        }                                                                                          \
        return (jb_##name){.inner = em_Val_call(s->inner, "normalize")};                           \
    }                                                                                              \
    jb_##name jb_##name##_pad_end(const jb_##name *s, size_t target_len, const char *pad) {        \
        if (pad) {                                                                                 \
            return (jb_##name                                                                      \
            ){.inner = em_Val_call(                                                                \
                  s->inner, "padEnd", em_Val_from_int(target_len), em_Val_from_string(pad)         \
              )};                                                                                  \
        }                                                                                          \
        return (jb_##name){.inner = em_Val_call(s->inner, "padEnd", em_Val_from_int(target_len))}; \
    }                                                                                              \
    jb_##name jb_##name##_pad_start(const jb_##name *s, size_t target_len, const char *pad) {      \
        if (pad) {                                                                                 \
            return (jb_##name                                                                      \
            ){.inner = em_Val_call(                                                                \
                  s->inner, "padStart", em_Val_from_int(target_len), em_Val_from_string(pad)       \
              )};                                                                                  \
        }                                                                                          \
        return (jb_##name                                                                          \
        ){.inner = em_Val_call(s->inner, "padStart", em_Val_from_int(target_len))};                \
    }                                                                                              \
    jb_##name jb_##name##_repeat(const jb_##name *s, size_t count) {                               \
        return (jb_##name){.inner = em_Val_call(s->inner, "repeat", em_Val_from_int(count))};      \
    }                                                                                              \
    jb_##name jb_##name##_replace(const jb_##name *s, const jb_Any *pat, const jb_Any *repl) {     \
        return (jb_##name){.inner = em_Val_call(s->inner, "replace", pat->inner, repl->inner)};    \
    }                                                                                              \
    jb_##name jb_##name##_replace_all(const jb_##name *s, const jb_Any *pat, const jb_Any *repl) { \
        return (jb_##name){.inner = em_Val_call(s->inner, "replaceAll", pat->inner, repl->inner)}; \
    }                                                                                              \
    int jb_##name##_search(const jb_##name *s, const jb_Any *pat) {                                \
        return em_Val_as_int(em_Val_call(s->inner, "search", pat->inner));                         \
    }                                                                                              \
    jb_##name jb_##name##_slice(const jb_##name *s, int start, int end) {                          \
        if (end != -1) {                                                                           \
            return (jb_##name                                                                      \
            ){.inner =                                                                             \
                  em_Val_call(s->inner, "slice", em_Val_from_int(start), em_Val_from_int(end))};   \
        }                                                                                          \
        return (jb_##name){.inner = em_Val_call(s->inner, "slice", em_Val_from_int(start))};       \
    }                                                                                              \
    jb_Array jb_##name##_split(const jb_##name *s, const char *sep) {                              \
        return (jb_Array){.inner = em_Val_call(s->inner, "split", em_Val_from_string(sep))};       \
    }                                                                                              \
    bool jb_##name##_starts_with(const jb_##name *s, const char *pat) {                            \
        return em_Val_as_bool(em_Val_call(s->inner, "startsWith", em_Val_from_string(pat)));       \
    }                                                                                              \
    jb_##name jb_##name##_substring(const jb_##name *s, size_t start, int end) {                   \
        if (end != -1) {                                                                           \
            return (jb_##name                                                                      \
            ){.inner =                                                                             \
                  em_Val_call(s->inner, "substring", em_Val_from_int(start), em_Val_from_int(end)) \
            };                                                                                     \
        }                                                                                          \
        return (jb_##name){.inner = em_Val_call(s->inner, "substring", em_Val_from_int(start))};   \
    }                                                                                              \
    jb_##name jb_##name##_to_locale_lower_case(const jb_##name *s) {                               \
        return (jb_##name){.inner = em_Val_call(s->inner, "toLocaleLowerCase")};                   \
    }                                                                                              \
    jb_##name jb_##name##_to_locale_upper_case(const jb_##name *s) {                               \
        return (jb_##name){.inner = em_Val_call(s->inner, "toLocaleUpperCase")};                   \
    }                                                                                              \
    jb_##name jb_##name##_to_lower_case(const jb_##name *s) {                                      \
        return (jb_##name){.inner = em_Val_call(s->inner, "toLowerCase")};                         \
    }                                                                                              \
    jb_##name jb_##name##_to_upper_case(const jb_##name *s) {                                      \
        return (jb_##name){.inner = em_Val_call(s->inner, "toUpperCase")};                         \
    }                                                                                              \
    jb_##name jb_##name##_to_well_formed(const jb_##name *s) {                                     \
        return (jb_##name){.inner = em_Val_call(s->inner, "toWellFormed")};                        \
    }                                                                                              \
    jb_##name jb_##name##_trim(const jb_##name *s) {                                               \
        return (jb_##name){.inner = em_Val_call(s->inner, "trim")};                                \
    }                                                                                              \
    jb_##name jb_##name##_trim_end(const jb_##name *s) {                                           \
        return (jb_##name){.inner = em_Val_call(s->inner, "trimEnd")};                             \
    }                                                                                              \
    jb_##name jb_##name##_trim_start(const jb_##name *s) {                                         \
        return (jb_##name){.inner = em_Val_call(s->inner, "trimStart")};                           \
    }                                                                                              \
    jb_##name jb_##name##_toString(const jb_##name *s) {                                           \
        return (jb_##name){.inner = em_Val_call(s->inner, "toString")};                            \
    }                                                                                              \
    jb_##name jb_##name##_substr(const jb_##name *s, int from, int length) {                       \
        if (length != -1) {                                                                        \
            return (jb_##name                                                                      \
            ){.inner =                                                                             \
                  em_Val_call(s->inner, "substr", em_Val_from_int(from), em_Val_from_int(length))  \
            };                                                                                     \
        }                                                                                          \
        return (jb_##name){.inner = em_Val_call(s->inner, "substr", em_Val_from_int(from))};       \
    }                                                                                              \
    jb_##name jb_##name##_valueOf(const jb_##name *s) {                                            \
        return (jb_##name){.inner = em_Val_call(s->inner, "valueOf")};                             \
    }

DEFINE_STRING_FUNCS(String);

char *jb_String_c_str(const jb_String *s) {
    // Return the allocated C string representation - caller must free()
    if (!s) return NULL;
    return em_Val_as_string(s->inner);
}

jb_String jb_String_to_string(const jb_String *s) {
    // Return string representation (same as toString)
    return jb_String_toString(s);
}