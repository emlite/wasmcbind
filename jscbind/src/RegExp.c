#include <jscbind/RegExp.h>

DEFINE_EMLITE_TYPE(jb_RegExp, em_Val);

// Factory methods
jb_RegExp jb_RegExp_create(void) {
    em_Val regexp_ctor = em_Val_global("RegExp");
    em_Val result      = em_Val_new(regexp_ctor);
    return (jb_RegExp){.inner = result};
}

jb_Any jb_RegExp_create_from_pattern(const jb_String *pattern) {
    em_Val regexp_ctor = em_Val_global("RegExp");
    em_Val result      = em_Val_new(regexp_ctor, pattern->inner);
    return (jb_Any){.inner = result};
}

jb_Any jb_RegExp_create_from_pattern_flags(const jb_String *pattern, const jb_String *flags) {
    em_Val regexp_ctor = em_Val_global("RegExp");
    em_Val result      = em_Val_new(regexp_ctor, pattern->inner, flags->inner);
    return (jb_Any){.inner = result};
}

jb_Any jb_RegExp_create_from_cstring(const char *pattern) {
    em_Val regexp_ctor = em_Val_global("RegExp");
    em_Val pattern_val = em_Val_from_string(pattern);
    em_Val result      = em_Val_new(regexp_ctor, pattern_val);
    return (jb_Any){.inner = result};
}

jb_Any jb_RegExp_create_from_cstring_flags(const char *pattern, const char *flags) {
    em_Val regexp_ctor = em_Val_global("RegExp");
    em_Val pattern_val = em_Val_from_string(pattern);
    em_Val flags_val   = em_Val_from_string(flags);
    em_Val result      = em_Val_new(regexp_ctor, pattern_val, flags_val);
    return (jb_Any){.inner = result};
}

// Clone/copy
jb_RegExp jb_RegExp_clone(const jb_RegExp *regex) { return (jb_RegExp){.inner = regex->inner}; }

// Properties
jb_String jb_RegExp_source(const jb_RegExp *regex) {
    em_Val prop   = em_Val_from_string("source");
    em_Val result = em_Val_get(regex->inner, prop);
    return (jb_String){.inner = result};
}

jb_String jb_RegExp_flags(const jb_RegExp *regex) {
    em_Val prop   = em_Val_from_string("flags");
    em_Val result = em_Val_get(regex->inner, prop);
    return (jb_String){.inner = result};
}

bool jb_RegExp_global(const jb_RegExp *regex) {
    em_Val prop   = em_Val_from_string("global");
    em_Val result = em_Val_get(regex->inner, prop);
    return em_Val_as_bool(result);
}

bool jb_RegExp_ignoreCase(const jb_RegExp *regex) {
    em_Val prop   = em_Val_from_string("ignoreCase");
    em_Val result = em_Val_get(regex->inner, prop);
    return em_Val_as_bool(result);
}

bool jb_RegExp_multiline(const jb_RegExp *regex) {
    em_Val prop   = em_Val_from_string("multiline");
    em_Val result = em_Val_get(regex->inner, prop);
    return em_Val_as_bool(result);
}

bool jb_RegExp_dotAll(const jb_RegExp *regex) {
    em_Val prop   = em_Val_from_string("dotAll");
    em_Val result = em_Val_get(regex->inner, prop);
    return em_Val_as_bool(result);
}

bool jb_RegExp_unicode(const jb_RegExp *regex) {
    em_Val prop   = em_Val_from_string("unicode");
    em_Val result = em_Val_get(regex->inner, prop);
    return em_Val_as_bool(result);
}

bool jb_RegExp_sticky(const jb_RegExp *regex) {
    em_Val prop   = em_Val_from_string("sticky");
    em_Val result = em_Val_get(regex->inner, prop);
    return em_Val_as_bool(result);
}

size_t jb_RegExp_lastIndex(const jb_RegExp *regex) {
    em_Val prop   = em_Val_from_string("lastIndex");
    em_Val result = em_Val_get(regex->inner, prop);
    return (size_t)em_Val_as_int(result);
}

void jb_RegExp_setLastIndex(jb_RegExp *regex, size_t index) {
    em_Val prop      = em_Val_from_string("lastIndex");
    em_Val index_val = em_Val_from_int((int)index);
    em_Val_set(regex->inner, prop, index_val);
}

// Core methods
bool jb_RegExp_test(const jb_RegExp *regex, const jb_String *str) {
    em_Val result = em_Val_call(regex->inner, "test", str->inner);
    return em_Val_as_bool(result);
}

jb_Any jb_RegExp_exec(const jb_RegExp *regex, const jb_String *str) {
    em_Val result = em_Val_call(regex->inner, "exec", str->inner);
    return (jb_Any){.inner = result};
}

// STL-like methods
bool jb_RegExp_contains(const jb_RegExp *regex, const jb_String *str) {
    return jb_RegExp_test(regex, str);
}

jb_Any jb_RegExp_find(const jb_RegExp *regex, const jb_String *str) {
    return jb_RegExp_exec(regex, str);
}

jb_Array jb_RegExp_findAll(const jb_RegExp *regex, const jb_String *str) {
    // Requires global flag - use String.matchAll
    em_Val result       = em_Val_call(str->inner, "matchAll", regex->inner);
    em_Val array_from   = em_Val_global("Array");
    em_Val array_result = em_Val_call(array_from, "from", result);
    return (jb_Array){.inner = array_result};
}

// Static factory methods for common patterns
jb_Any jb_RegExp_literal(const jb_String *text) {
    // Escape special regex characters
    em_Val escape_code =
        em_Val_from_string("return arguments[0].replace(/[.*+?^${}()|[\\]\\\\]/g, '\\\\$&')");
    em_Val escape_func  = em_Val_new(em_Val_global("Function"), escape_code);
    em_Val escaped_text = em_Val_call(escape_func, "call", em_Val_null(), text->inner);
    return jb_RegExp_create_from_pattern(&(jb_String){.inner = escaped_text});
}

jb_Any jb_RegExp_literal_cstring(const char *text) {
    jb_String text_str = {.inner = em_Val_from_string(text)};
    return jb_RegExp_literal(&text_str);
}

jb_Any jb_RegExp_caseInsensitive(const jb_String *pattern) {
    jb_String flags = {.inner = em_Val_from_string("i")};
    return jb_RegExp_create_from_pattern_flags(pattern, &flags);
}

jb_Any jb_RegExp_caseInsensitive_cstring(const char *pattern) {
    return jb_RegExp_create_from_cstring_flags(pattern, "i");
}

jb_Any jb_RegExp_global_pattern(const jb_String *pattern) {
    jb_String flags = {.inner = em_Val_from_string("g")};
    return jb_RegExp_create_from_pattern_flags(pattern, &flags);
}

jb_Any jb_RegExp_global_cstring(const char *pattern) {
    return jb_RegExp_create_from_cstring_flags(pattern, "g");
}

jb_Any jb_RegExp_globalIgnoreCase(const jb_String *pattern) {
    jb_String flags = {.inner = em_Val_from_string("gi")};
    return jb_RegExp_create_from_pattern_flags(pattern, &flags);
}

jb_Any jb_RegExp_globalIgnoreCase_cstring(const char *pattern) {
    return jb_RegExp_create_from_cstring_flags(pattern, "gi");
}

jb_Any jb_RegExp_multiline_pattern(const jb_String *pattern) {
    jb_String flags = {.inner = em_Val_from_string("m")};
    return jb_RegExp_create_from_pattern_flags(pattern, &flags);
}

jb_Any jb_RegExp_multiline_cstring(const char *pattern) {
    return jb_RegExp_create_from_cstring_flags(pattern, "m");
}

// Iterator support for global matches
jb_RegExp_MatchIterator jb_RegExp_begin(const jb_RegExp *regex, const jb_String *text) {
    jb_RegExp_MatchIterator iter = {
        .regexp = regex->inner, .text = text->inner, .current_match = em_Val_null(), .at_end = false
    };

    // Get first match
    em_Val match = em_Val_call(regex->inner, "exec", text->inner);
    if (em_Val_is_null(match)) {
        iter.at_end = true;
    } else {
        iter.current_match = match;
    }

    return iter;
}

jb_RegExp_MatchIterator jb_RegExp_end(const jb_RegExp *regex, const jb_String *text) {
    jb_RegExp_MatchIterator iter = {
        .regexp = regex->inner, .text = text->inner, .current_match = em_Val_null(), .at_end = true
    };
    return iter;
}

bool jb_RegExp_iterator_not_equal(
    const jb_RegExp_MatchIterator *a, const jb_RegExp_MatchIterator *b
) {
    return a->at_end != b->at_end;
}

bool jb_RegExp_iterator_equal(const jb_RegExp_MatchIterator *a, const jb_RegExp_MatchIterator *b) {
    return a->at_end == b->at_end;
}

jb_Array jb_RegExp_iterator_deref(const jb_RegExp_MatchIterator *iter) {
    return (jb_Array){.inner = iter->current_match};
}

void jb_RegExp_iterator_next(jb_RegExp_MatchIterator *iter) {
    if (iter->at_end)
        return;

    em_Val next_match = em_Val_call(iter->regexp, "exec", iter->text);
    if (em_Val_is_null(next_match)) {
        iter->at_end        = true;
        iter->current_match = em_Val_null();
    } else {
        iter->current_match = next_match;
    }
}