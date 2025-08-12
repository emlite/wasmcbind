#pragma once

#include "utils.h"
#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief An opaque type representing any JavaScript value.
 *
 * This type can hold any JavaScript value, including primitives (like numbers,
 * strings, booleans) and objects. It is used for interoperability when the
 * exact type of a value is not known in advance.
 */
DECLARE_EMLITE_TYPE(jb_Any, em_Val);

/**
 * @brief Checks if the `jb_Any` holds an `undefined` value.
 *
 * @param a A pointer to the `jb_Any` instance.
 * @return 1 if the value is `undefined`, 0 otherwise.
 */
int jb_Any_is_undefined(const jb_Any *a);

/**
 * @brief Checks if the `jb_Any` holds a `null` value.
 *
 * @param a A pointer to the `jb_Any` instance.
 * @return 1 if the value is `null`, 0 otherwise.
 */
int jb_Any_is_null(const jb_Any *a);

/**
 * @brief Checks if the `jb_Any` holds a number.
 *
 * @param a A pointer to the `jb_Any` instance.
 * @return 1 if the value is a number, 0 otherwise.
 */
int jb_Any_is_number(const jb_Any *a);

/**
 * @brief Checks if the `jb_Any` holds a string.
 *
 * @param a A pointer to the `jb_Any` instance.
 * @return 1 if the value is a string, 0 otherwise.
 */
int jb_Any_is_string(const jb_Any *a);

/**
 * @brief Checks if the `jb_Any` holds a function.
 *
 * @param a A pointer to the `jb_Any` instance.
 * @return 1 if the value is a function, 0 otherwise.
 */
int jb_Any_is_function(const jb_Any *a);

/**
 * @brief Checks if the `jb_Any` holds an error object.
 *
 * @param a A pointer to the `jb_Any` instance.
 * @return 1 if the value is an error, 0 otherwise.
 */
int jb_Any_is_error(const jb_Any *a);

/**
 * @brief Converts the `jb_Any` to a boolean value.
 *
 * This follows JavaScript's truthiness rules. For example, `false`, `0`, `""`,
 * `null`, `undefined`, and `NaN` become `0`, while other values become `1`.
 *
 * @param a A pointer to the `jb_Any` instance.
 * @return The boolean representation of the value.
 */
int jb_Any_as_bool(const jb_Any *a);

/**
 * @brief Creates a clone of the `jb_Any` instance.
 *
 * @param a A pointer to the `jb_Any` instance to clone.
 * @return A new `jb_Any` instance holding the same value.
 */
jb_Any jb_Any_clone(const jb_Any *a);

/**
 * @brief A macro to create a `jb_Any` from a C value.
 *
 * This is a convenience macro for converting C types (like `int`, `double`,
 * `const char*`) into a `jb_Any` instance.
 *
 * @param x The C value to convert.
 */
#define ANY(x) ((jb_Any){.inner = em_Val_from(x)})

/**
 * @brief A macro to create a `jb_Any` from another jsbind type.
 *
 * This is used for casting between different jsbind types (e.g., from
 * `jb_String` to `jb_Any`).
 *
 * @param x The jsbind value to convert.
 */
#define ANY_JB(x) ((jb_Any){.inner = x.inner})

#ifdef __cplusplus
}
#endif