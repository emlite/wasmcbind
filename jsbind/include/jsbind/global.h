#pragma once

#include "Any.h"
#include "Error.h"
#include "Function.h"
#include "String.h"
#include "utils.h"
#include <emlite/emlite.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// Global parsing functions with error handling
jb_Any jb_parseInt_safe(const char *src);                      // Returns Number or Error
jb_Any jb_parseInt_radix_safe(const char *src, int32_t radix); // Returns Number or Error
jb_Any jb_parseFloat_safe(const char *src);                    // Returns Number or Error

// Legacy global parsing functions (may return NaN)
int32_t jb_parseInt(const char *src);
int32_t jb_parseInt_radix(const char *src, int32_t radix);
double jb_parseFloat(const char *src);

// Base64 encoding/decoding with error handling
jb_Any jb_atob(const jb_String *encoded); // Returns String or Error
jb_Any jb_btoa(const jb_String *data);    // Returns String or Error

// Base64 encoding/decoding with C strings
jb_Any jb_atob_cstring(const char *encoded); // Returns String or Error
jb_Any jb_btoa_cstring(const char *data);    // Returns String or Error

// Global utility functions
bool jb_isNaN_any(const jb_Any *value);
bool jb_isFinite_any(const jb_Any *value);

// Microtask support
void jb_queueMicrotask(const jb_Function *callback);

// Structured cloning support
DECLARE_EMLITE_TYPE(jb_StructuredSerializeOptions, em_Val);

jb_StructuredSerializeOptions jb_StructuredSerializeOptions_create(void);
jb_StructuredSerializeOptions jb_StructuredSerializeOptions_clone(
    const jb_StructuredSerializeOptions *opts
);

// Structured clone operations
jb_Any jb_structuredClone(const jb_Any *value); // Clone without options
jb_Any jb_structuredClone_with_options(
    const jb_Any *value, const jb_StructuredSerializeOptions *options
);

// Global object access utilities
jb_Any jb_global_get(const char *name);                    // Get global property by name
void jb_global_set(const char *name, const jb_Any *value); // Set global property
bool jb_global_has(const char *name);                      // Check if global property exists
bool jb_global_delete(const char *name);                   // Delete global property

// Common global objects/functions
jb_Any jb_global_console(void);
jb_Any jb_global_window(void);    // May return undefined in non-browser environments
jb_Any jb_global_document(void);  // May return undefined in non-browser environments
jb_Any jb_global_navigator(void); // May return undefined in non-browser environments
jb_Any jb_global_location(void);  // May return undefined in non-browser environments

// Global constructors
jb_Any jb_global_Object(void);
jb_Any jb_global_Array(void);
jb_Any jb_global_Function(void);
jb_Any jb_global_String(void);
jb_Any jb_global_Number(void);
jb_Any jb_global_Boolean(void);
jb_Any jb_global_Date(void);
jb_Any jb_global_RegExp(void);
jb_Any jb_global_Error(void);
jb_Any jb_global_Map(void);
jb_Any jb_global_Set(void);
jb_Any jb_global_Promise(void);
jb_Any jb_global_Symbol(void);
jb_Any jb_global_BigInt(void);

// Timeout/interval functions (may not be available in all
// environments)
jb_Any jb_setTimeout(const jb_Function *callback, int32_t delay);
jb_Any jb_setInterval(const jb_Function *callback, int32_t delay);
void jb_clearTimeout(const jb_Any *timeoutId);
void jb_clearInterval(const jb_Any *intervalId);

#ifdef __cplusplus
}
#endif