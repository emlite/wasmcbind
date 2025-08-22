#include <jscbind/global.h>

DEFINE_EMLITE_TYPE(jb_StructuredSerializeOptions, em_Val);

// Global parsing functions with error handling
jb_Any jb_parseInt(const char *src) {
    em_Val src_val         = em_Val_from_string(src);
    em_Val global_parseint = em_Val_global("parseInt");
    em_Val result          = em_Val_invoke(global_parseint, src_val);
    return (jb_Any){.inner = result};
}

jb_Any jb_parseInt_radix(const char *src, int32_t radix) {
    em_Val src_val         = em_Val_from_string(src);
    em_Val radix_val       = em_Val_from_int(radix);
    em_Val global_parseint = em_Val_global("parseInt");
    em_Val result          = em_Val_invoke(global_parseint, src_val, radix_val);
    return (jb_Any){.inner = result};
}

jb_Any jb_parseFloat(const char *src) {
    em_Val src_val           = em_Val_from_string(src);
    em_Val global_parsefloat = em_Val_global("parseFloat");
    em_Val result            = em_Val_invoke(global_parsefloat, src_val);
    return (jb_Any){.inner = result};
}

// Base64 encoding/decoding with error handling
jb_Any jb_atob(const jb_String *encoded) {
    em_Val global_atob = em_Val_global("atob");
    em_Val result      = em_Val_invoke(global_atob, encoded->inner);
    return (jb_Any){.inner = result};
}

jb_Any jb_btoa(const jb_String *data) {
    em_Val global_btoa = em_Val_global("btoa");
    em_Val result      = em_Val_invoke(global_btoa, data->inner);
    return (jb_Any){.inner = result};
}

// Base64 encoding/decoding with C strings
jb_Any jb_atob_cstring(const char *encoded) {
    jb_String encoded_str = {.inner = em_Val_from_string(encoded)};
    return jb_atob(&encoded_str);
}

jb_Any jb_btoa_cstring(const char *data) {
    jb_String data_str = {.inner = em_Val_from_string(data)};
    return jb_btoa(&data_str);
}

// Global utility functions
bool jb_isNaN_any(const jb_Any *value) {
    em_Val global_isnan = em_Val_global("isNaN");
    em_Val result       = em_Val_call(global_isnan, "call", em_Val_null(), value->inner);
    return em_Val_as_bool(result);
}

bool jb_isFinite_any(const jb_Any *value) {
    em_Val global_isfinite = em_Val_global("isFinite");
    em_Val result          = em_Val_call(global_isfinite, "call", em_Val_null(), value->inner);
    return em_Val_as_bool(result);
}

// Microtask support
void jb_queueMicrotask(const jb_Function *callback) {
    em_Val global_queuemicrotask = em_Val_global("queueMicrotask");
    em_Val_call(global_queuemicrotask, "call", em_Val_null(), callback->inner);
}

// Structured cloning support
jb_StructuredSerializeOptions jb_StructuredSerializeOptions_create(void) {
    em_Val options = em_Val_object();
    return (jb_StructuredSerializeOptions){.inner = options};
}

jb_StructuredSerializeOptions jb_StructuredSerializeOptions_clone(
    const jb_StructuredSerializeOptions *opts
) {
    return (jb_StructuredSerializeOptions){.inner = opts->inner};
}

// Structured clone operations
jb_Any jb_structuredClone(const jb_Any *value) {
    em_Val global_structuredclone = em_Val_global("structuredClone");
    em_Val result = em_Val_call(global_structuredclone, "call", em_Val_null(), value->inner);
    return (jb_Any){.inner = result};
}

jb_Any jb_structuredClone_with_options(
    const jb_Any *value, const jb_StructuredSerializeOptions *options
) {
    em_Val global_structuredclone = em_Val_global("structuredClone");
    em_Val result =
        em_Val_call(global_structuredclone, "call", em_Val_null(), value->inner, options->inner);
    return (jb_Any){.inner = result};
}

// Global object access utilities
jb_Any jb_global_get(const char *name) {
    em_Val result = em_Val_global(name);
    return (jb_Any){.inner = result};
}

void jb_global_set(const char *name, const jb_Any *value) {
    em_Val global_obj = em_Val_global("globalThis");
    em_Val name_val   = em_Val_from_string(name);
    em_Val_set(global_obj, name_val, value->inner);
}

bool jb_global_has(const char *name) {
    em_Val global_obj = em_Val_global("globalThis");
    em_Val name_val   = em_Val_from_string(name);
    em_Val result     = em_Val_call(global_obj, "hasOwnProperty", name_val);
    return em_Val_as_bool(result);
}

bool jb_global_delete(const char *name) {
    em_Val global_obj  = em_Val_global("globalThis");
    em_Val name_val    = em_Val_from_string(name);
    em_Val delete_code = em_Val_from_string("return delete arguments[0][arguments[1]]");
    em_Val delete_func = em_Val_call(em_Val_global("Function"), "constructor", delete_code);
    em_Val result      = em_Val_call(delete_func, "call", em_Val_null(), global_obj, name_val);
    return em_Val_as_bool(result);
}

// Common global objects/functions
jb_Any jb_global_console(void) { return jb_global_get("console"); }

jb_Any jb_global_window(void) { return jb_global_get("window"); }

jb_Any jb_global_document(void) { return jb_global_get("document"); }

jb_Any jb_global_navigator(void) { return jb_global_get("navigator"); }

jb_Any jb_global_location(void) { return jb_global_get("location"); }

// Global constructors
jb_Any jb_global_Object(void) { return jb_global_get("Object"); }

jb_Any jb_global_Array(void) { return jb_global_get("Array"); }

jb_Any jb_global_Function(void) { return jb_global_get("Function"); }

jb_Any jb_global_String(void) { return jb_global_get("String"); }

jb_Any jb_global_Number(void) { return jb_global_get("Number"); }

jb_Any jb_global_Boolean(void) { return jb_global_get("Boolean"); }

jb_Any jb_global_Date(void) { return jb_global_get("Date"); }

jb_Any jb_global_RegExp(void) { return jb_global_get("RegExp"); }

jb_Any jb_global_Error(void) { return jb_global_get("Error"); }

jb_Any jb_global_Map(void) { return jb_global_get("Map"); }

jb_Any jb_global_Set(void) { return jb_global_get("Set"); }

jb_Any jb_global_Promise(void) { return jb_global_get("Promise"); }

jb_Any jb_global_Symbol(void) { return jb_global_get("Symbol"); }

jb_Any jb_global_BigInt(void) { return jb_global_get("BigInt"); }

// Timeout/interval functions (may not be available in all environments)
jb_Any jb_setTimeout(const jb_Function *callback, int32_t delay) {
    em_Val global_settimeout = em_Val_global("setTimeout");
    em_Val delay_val         = em_Val_from_int(delay);
    em_Val result =
        em_Val_call(global_settimeout, "call", em_Val_null(), callback->inner, delay_val);
    return (jb_Any){.inner = result};
}

jb_Any jb_setInterval(const jb_Function *callback, int32_t delay) {
    em_Val global_setinterval = em_Val_global("setInterval");
    em_Val delay_val          = em_Val_from_int(delay);
    em_Val result =
        em_Val_call(global_setinterval, "call", em_Val_null(), callback->inner, delay_val);
    return (jb_Any){.inner = result};
}

void jb_clearTimeout(const jb_Any *timeoutId) {
    em_Val global_cleartimeout = em_Val_global("clearTimeout");
    em_Val_call(global_cleartimeout, "call", em_Val_null(), timeoutId->inner);
}

void jb_clearInterval(const jb_Any *intervalId) {
    em_Val global_clearinterval = em_Val_global("clearInterval");
    em_Val_call(global_clearinterval, "call", em_Val_null(), intervalId->inner);
}

// Module loading functions
jb_Any jb_import(const char *specifier) {
    em_Val specifier_val = em_Val_from_string(specifier);
    em_Val global_import = em_Val_global("import");
    em_Val result = em_Val_invoke(global_import, specifier_val);
    return (jb_Any){.inner = result};
}

jb_Any jb_require(const char *specifier) {
    em_Val specifier_val = em_Val_from_string(specifier);
    em_Val global_require = em_Val_global("require");
    
    if (em_Val_is_undefined(global_require)) {
        // Return an error - require is not available
        em_Val error_msg = em_Val_from_string("require is not available in this environment");
        em_Val error_ctor = em_Val_global("Error");
        em_Val error_obj = em_Val_new(error_ctor, error_msg);
        return (jb_Any){.inner = error_obj};
    }
    
    em_Val result = em_Val_invoke(global_require, specifier_val);
    return (jb_Any){.inner = result};
}

jb_Any jb_createRequire(const jb_Any *importMetaUrl) {
    em_Val module_obj = em_Val_global("module");
    
    if (em_Val_is_undefined(module_obj)) {
        // Return an error - module.createRequire is not available
        em_Val error_msg = em_Val_from_string("module.createRequire not supported in this environment");
        em_Val error_ctor = em_Val_global("Error");
        em_Val error_obj = em_Val_new(error_ctor, error_msg);
        return (jb_Any){.inner = error_obj};
    }
    
    em_Val createRequire_fn = em_Val_get(module_obj, em_Val_from_string("createRequire"));
    
    if (em_Val_is_undefined(createRequire_fn)) {
        // Return an error - module.createRequire is not available
        em_Val error_msg = em_Val_from_string("module.createRequire not available");
        em_Val error_ctor = em_Val_global("Error");
        em_Val error_obj = em_Val_new(error_ctor, error_msg);
        return (jb_Any){.inner = error_obj};
    }
    
    em_Val result = em_Val_invoke(createRequire_fn, importMetaUrl->inner);
    return (jb_Any){.inner = result};
}