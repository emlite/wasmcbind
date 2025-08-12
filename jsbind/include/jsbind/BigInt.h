#pragma once

#include "Any.h"
#include "Error.h"
#include "String.h"
#include "utils.h"
#include <emlite/emlite.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file BigInt.h
 * @brief Bindings for the JavaScript `BigInt` object.
 *
 * This file provides functions for creating and manipulating arbitrary-precision
 * integers.
 */

/**
 * @brief An opaque type representing a JavaScript `BigInt` object.
 */
DECLARE_EMLITE_TYPE(jb_BigInt, em_Val);

// Factory methods

/** @brief Creates a `BigInt` from a string. */
jb_BigInt jb_BigInt_create_from_string(const char *value);
/** @brief Creates a `BigInt` from a `jb_String`. */
jb_BigInt jb_BigInt_create_from_jb_string(const jb_String *value);
/** @brief Creates a `BigInt` from an `int64_t`. */
jb_BigInt jb_BigInt_create_from_int64(int64_t value);
/** @brief Creates a `BigInt` from a `uint64_t`. */
jb_BigInt jb_BigInt_create_from_uint64(uint64_t value);
/** @brief Returns a `BigInt` with a value of 0. */
jb_BigInt jb_BigInt_zero(void);
/** @brief Returns a `BigInt` with a value of 1. */
jb_BigInt jb_BigInt_one(void);
/** @brief Returns a `BigInt` with a value of -1. */
jb_BigInt jb_BigInt_minus_one(void);

// Type conversion

/** @brief Returns a string representation of the `BigInt`. */
jb_String jb_BigInt_toString(const jb_BigInt *bi);
/** @brief Returns a string representation of the `BigInt` in the specified radix. */
jb_String jb_BigInt_toString_radix(const jb_BigInt *bi, int radix);
/** @brief Returns the primitive value of the `BigInt`. */
jb_String jb_BigInt_valueOf(const jb_BigInt *bi);
/** @brief Returns a language-sensitive representation of the `BigInt`. */
jb_String jb_BigInt_toLocaleString(const jb_BigInt *bi);

// Clone/copy

/** @brief Clones a `BigInt` object. */
jb_BigInt jb_BigInt_clone(const jb_BigInt *bi);

// Arithmetic operations

/** @brief Adds two `BigInt`s. */
jb_BigInt jb_BigInt_add(const jb_BigInt *a, const jb_BigInt *b);
/** @brief Subtracts two `BigInt`s. */
jb_BigInt jb_BigInt_subtract(const jb_BigInt *a, const jb_BigInt *b);
/** @brief Multiplies two `BigInt`s. */
jb_BigInt jb_BigInt_multiply(const jb_BigInt *a, const jb_BigInt *b);
/** @brief Divides two `BigInt`s. */
jb_BigInt jb_BigInt_divide(const jb_BigInt *a, const jb_BigInt *b);
/** @brief Returns the remainder of a division of two `BigInt`s. */
jb_BigInt jb_BigInt_modulo(const jb_BigInt *a, const jb_BigInt *b);
/** @brief Raises a `BigInt` to the power of another `BigInt`. */
jb_BigInt jb_BigInt_pow(const jb_BigInt *base, const jb_BigInt *exp);

// Bitwise operations

/** @brief Performs a bitwise AND operation on two `BigInt`s. */
jb_BigInt jb_BigInt_and(const jb_BigInt *a, const jb_BigInt *b);
/** @brief Performs a bitwise OR operation on two `BigInt`s. */
jb_BigInt jb_BigInt_or(const jb_BigInt *a, const jb_BigInt *b);
/** @brief Performs a bitwise XOR operation on two `BigInt`s. */
jb_BigInt jb_BigInt_xor(const jb_BigInt *a, const jb_BigInt *b);
/** @brief Performs a bitwise left shift. */
jb_BigInt jb_BigInt_left_shift(const jb_BigInt *a, const jb_BigInt *shift);
/** @brief Performs a bitwise right shift. */
jb_BigInt jb_BigInt_right_shift(const jb_BigInt *a, const jb_BigInt *shift);

// Unary operations

/** @brief Negates a `BigInt`. */
jb_BigInt jb_BigInt_negate(const jb_BigInt *bi);
/** @brief Performs a bitwise NOT operation. */
jb_BigInt jb_BigInt_bitwise_not(const jb_BigInt *bi);

// Comparison operations

/** @brief Checks if one `BigInt` is less than another. */
bool jb_BigInt_less_than(const jb_BigInt *a, const jb_BigInt *b);
/** @brief Checks if one `BigInt` is greater than another. */
bool jb_BigInt_greater_than(const jb_BigInt *a, const jb_BigInt *b);
/** @brief Checks if one `BigInt` is less than or equal to another. */
bool jb_BigInt_less_equal(const jb_BigInt *a, const jb_BigInt *b);
/** @brief Checks if one `BigInt` is greater than or equal to another. */
bool jb_BigInt_greater_equal(const jb_BigInt *a, const jb_BigInt *b);
/** @brief Checks if two `BigInt`s are equal. */
bool jb_BigInt_equals(const jb_BigInt *a, const jb_BigInt *b);

// Static utility methods

/** @brief Clamps a `BigInt` to a signed integer of a specified width. */
jb_BigInt jb_BigInt_asIntN(int width, const jb_BigInt *bigint);
/** @brief Clamps a `BigInt` to an unsigned integer of a specified width. */
jb_BigInt jb_BigInt_asUintN(int width, const jb_BigInt *bigint);

// Utility methods

/** @brief Computes a hash for the `BigInt`. */
size_t jb_BigInt_hash(const jb_BigInt *bi);
/** @brief Checks if the `BigInt` is zero. */
bool jb_BigInt_is_zero(const jb_BigInt *bi);
/** @brief Checks if the `BigInt` is positive. */
bool jb_BigInt_is_positive(const jb_BigInt *bi);
/** @brief Checks if the `BigInt` is negative. */
bool jb_BigInt_is_negative(const jb_BigInt *bi);
/** @brief Returns the absolute value of the `BigInt`. */
jb_BigInt jb_BigInt_abs(const jb_BigInt *bi);

// Parsing with error handling

/** @brief Parses a string into a `BigInt`. */
jb_Any jb_BigInt_parse(const jb_String *str); // Returns BigInt or Error

#ifdef __cplusplus
}
#endif
