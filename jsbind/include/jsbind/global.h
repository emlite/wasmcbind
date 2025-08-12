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

/**
 * @file global.h
 * @brief Bindings for global JavaScript functions and objects.
 *
 * This file provides access to various global functions and objects available in
 * a standard JavaScript environment.
 */

// Global parsing functions with error handling

/** @brief Parses a string and returns an integer. */
jb_Any jb_parseInt(const char *src); // Returns Number or Error
/** @brief Parses a string and returns an integer of the specified radix. */
jb_Any jb_parseInt_radix(const char *src, int32_t radix); // Returns Number or Error
/** @brief Parses a string and returns a floating-point number. */
jb_Any jb_parseFloat(const char *src); // Returns Number or Error

// Base64 encoding/decoding with error handling

/** @brief Decodes a base64-encoded string. */
jb_Any jb_atob(const jb_String *encoded); // Returns String or Error
/** @brief Encodes a string in base64. */
jb_Any jb_btoa(const jb_String *data); // Returns String or Error

// Base64 encoding/decoding with C strings

/** @brief Decodes a base64-encoded C-string. */
jb_Any jb_atob_cstring(const char *encoded); // Returns String or Error
/** @brief Encodes a C-string in base64. */
jb_Any jb_btoa_cstring(const char *data); // Returns String or Error

// Global utility functions

/** @brief Checks if a value is `NaN`. */
bool jb_isNaN_any(const jb_Any *value);
/** @brief Checks if a value is a finite number. */
bool jb_isFinite_any(const jb_Any *value);

// Microtask support

/** @brief Queues a microtask to be executed at the end of the current event loop. */
void jb_queueMicrotask(const jb_Function *callback);

// Structured cloning support

/**
 * @brief An opaque type representing options for structured cloning.
 */
DECLARE_EMLITE_TYPE(jb_StructuredSerializeOptions, em_Val);

/** @brief Creates a new `StructuredSerializeOptions` object. */
jb_StructuredSerializeOptions jb_StructuredSerializeOptions_create(void);
/** @brief Clones a `StructuredSerializeOptions` object. */
jb_StructuredSerializeOptions jb_StructuredSerializeOptions_clone(
    const jb_StructuredSerializeOptions *opts
);

// Structured clone operations

/** @brief Creates a deep copy of a value using the structured clone algorithm. */
jb_Any jb_structuredClone(const jb_Any *value); // Clone without options
/** @brief Creates a deep copy of a value using the structured clone algorithm with options. */
jb_Any jb_structuredClone_with_options(
    const jb_Any *value, const jb_StructuredSerializeOptions *options
);

// Global object access utilities

/** @brief Gets a global property by name. */
jb_Any jb_global_get(const char *name); // Get global property by name
/** @brief Sets a global property. */
void jb_global_set(const char *name, const jb_Any *value); // Set global property
/** @brief Checks if a global property exists. */
bool jb_global_has(const char *name); // Check if global property exists
/** @brief Deletes a global property. */
bool jb_global_delete(const char *name); // Delete global property

// Common global objects/functions

/** @brief Gets the global `console` object. */
jb_Any jb_global_console(void);
/** @brief Gets the global `window` object. */
jb_Any jb_global_window(void); // May return undefined in non-browser environments
/** @brief Gets the global `document` object. */
jb_Any jb_global_document(void); // May return undefined in non-browser environments
/** @brief Gets the global `navigator` object. */
jb_Any jb_global_navigator(void); // May return undefined in non-browser environments
/** @brief Gets the global `location` object. */
jb_Any jb_global_location(void); // May return undefined in non-browser environments

// Global constructors

/** @brief Gets the global `Object` constructor. */
jb_Any jb_global_Object(void);
/** @brief Gets the global `Array` constructor. */
jb_Any jb_global_Array(void);
/** @brief Gets the global `Function` constructor. */
jb_Any jb_global_Function(void);
/** @brief Gets the global `String` constructor. */
jb_Any jb_global_String(void);
/** @brief Gets the global `Number` constructor. */
jb_Any jb_global_Number(void);
/** @brief Gets the global `Boolean` constructor. */
jb_Any jb_global_Boolean(void);
/** @brief Gets the global `Date` constructor. */
jb_Any jb_global_Date(void);
/** @brief Gets the global `RegExp` constructor. */
jb_Any jb_global_RegExp(void);
/** @brief Gets the global `Error` constructor. */
jb_Any jb_global_Error(void);
/** @brief Gets the global `Map` constructor. */
jb_Any jb_global_Map(void);
/** @brief Gets the global `Set` constructor. */
jb_Any jb_global_Set(void);
/** @brief Gets the global `Promise` constructor. */
jb_Any jb_global_Promise(void);
/** @brief Gets the global `Symbol` constructor. */
jb_Any jb_global_Symbol(void);
/** @brief Gets the global `BigInt` constructor. */
jb_Any jb_global_BigInt(void);

// Timeout/interval functions (may not be available in all
// environments)

/** @brief Calls a function or evaluates an expression after a specified number of milliseconds. */
jb_Any jb_setTimeout(const jb_Function *callback, int32_t delay);
/** @brief Calls a function or evaluates an expression at specified intervals (in milliseconds). */
jb_Any jb_setInterval(const jb_Function *callback, int32_t delay);
/** @brief Clears a timer set with `setTimeout()`. */
void jb_clearTimeout(const jb_Any *timeoutId);
/** @brief Clears a timer set with `setInterval()`. */
void jb_clearInterval(const jb_Any *intervalId);

#ifdef __cplusplus
}
#endif
