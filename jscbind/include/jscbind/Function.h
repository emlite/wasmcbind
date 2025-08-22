#pragma once

#include "Any.h"
#include "Array.h"
#include "utils.h"
#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file Function.h
 * @brief Bindings for the JavaScript `Function` object.
 *
 * This file provides functions for creating and interacting with JavaScript
 * functions.
 */

/**
 * @brief An opaque type representing a JavaScript `Function` object.
 */
DECLARE_EMLITE_TYPE(jb_Function, em_Val);

/**
 * @brief Creates a function from a global name.
 *
 * @param name The name of the global function.
 * @return A new `jb_Function` instance.
 */
jb_Function jb_Function_from_name(const char *name);

/**
 * @brief Creates a new dynamic function from argument names and a body.
 *
 * @param args An array of argument names.
 * @param nargs The number of arguments.
 * @param body The function body as a string.
 * @return A new `jb_Function` instance.
 */
jb_Function jb_Function_new(const char **args, size_t nargs, const char *body);

/**
 * @brief Calls a function with a given `this` value and arguments provided as an
 * array.
 *
 * @param fn A pointer to the `jb_Function` to call.
 * @param this_arg The value to be used as `this`.
 * @param args_array An array of arguments.
 * @return The result of the function call.
 */
jb_Any jb_Function_apply(const jb_Function *fn, const jb_Any *this_arg, const jb_Array *args_array);

/**
 * @brief Creates a new function that, when called, has its `this` keyword set
 * to the provided value, with a given sequence of arguments preceding any
 * provided when the new function is called.
 *
 * @param fn A pointer to the `jb_Function` to bind.
 * @param this_arg The value to be passed as the `this` parameter.
 * @param args_array An array of arguments to be passed to the new function.
 * @return A new `jb_Function` instance.
 */
jb_Function jb_Function_bind(
    const jb_Function *fn, const jb_Any *this_arg, const jb_Array *args_array
);

/**
 * @brief Calls a function with a given `this` value and arguments provided as an
 * array.
 *
 * @param fn A pointer to the `jb_Function` to call.
 * @param this_arg The value to be used as `this`.
 * @param args_array An array of arguments.
 * @return The result of the function call.
 */
jb_Any jb_Function_call(const jb_Function *fn, const jb_Any *this_arg, const jb_Array *args_array);

/**
 * @brief A C callback function that can be invoked from JavaScript.
 *
 * @param args An array of arguments passed from JavaScript.
 * @param data A pointer to user-defined data.
 * @return The result of the callback, to be passed back to JavaScript.
 */
typedef jb_Any (*jb_Callback)(const jb_Array *, const jb_Any *);

/**
 * @brief Creates a JavaScript function from a C callback.
 *
 * @param cb The C callback function.
 * @param data User-defined data to be passed to the callback.
 * @return A new `jb_Function` instance.
 */
jb_Function jb_Function_from(jb_Callback cb, const jb_Any *data);

/**
 * @brief A macro to create a `jb_Function` from a C callback and user data.
 */
#define FUNC(x, data) ((jb_Function){.inner = em_Val_make_fn(x, data)})

#ifdef __cplusplus
}
#endif