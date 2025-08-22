#pragma once

#include "Any.h"
#include "BigInt.h"
#include "utils.h"
#include <emlite/emlite.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file BigIntArray.h
 * @brief Bindings for the JavaScript `BigInt64Array` and `BigUint64Array`
 * objects.
 *
 * This file provides functions for creating and manipulating typed arrays of
 * 64-bit big integers.
 */

/**
 * @brief An opaque type representing a JavaScript `BigInt64Array` object.
 */
DECLARE_EMLITE_TYPE(jb_BigInt64Array, em_Val);

/**
 * @brief An opaque type representing a JavaScript `BigUint64Array` object.
 */
DECLARE_EMLITE_TYPE(jb_BigUint64Array, em_Val);

// Forward declarations
typedef struct jb_ArrayBuffer jb_ArrayBuffer;

// BigInt64Array Factory methods

/** @brief Creates an empty `BigInt64Array`. */
jb_BigInt64Array jb_BigInt64Array_create(void);
/** @brief Creates a `BigInt64Array` of a specified length. */
jb_BigInt64Array jb_BigInt64Array_create_with_length(size_t length);
/** @brief Creates a `BigInt64Array` from an existing buffer. */
jb_BigInt64Array jb_BigInt64Array_create_from_buffer(
    const jb_ArrayBuffer *buffer, size_t byteOffset, size_t length
);

// BigInt64Array Clone/copy

/** @brief Clones a `BigInt64Array`. */
jb_BigInt64Array jb_BigInt64Array_clone(const jb_BigInt64Array *arr);

// BigInt64Array Size and capacity

/** @brief Gets the number of elements in the array. */
size_t jb_BigInt64Array_size(const jb_BigInt64Array *arr);
/** @brief Gets the number of elements in the array. */
size_t jb_BigInt64Array_length(const jb_BigInt64Array *arr);
/** @brief Checks if the array is empty. */
bool jb_BigInt64Array_empty(const jb_BigInt64Array *arr);
/** @brief Gets the size of the array in bytes. */
size_t jb_BigInt64Array_byteLength(const jb_BigInt64Array *arr);
/** @brief Gets the offset of the array from the start of its `ArrayBuffer`. */
size_t jb_BigInt64Array_byteOffset(const jb_BigInt64Array *arr);
/** @brief Gets the `ArrayBuffer` backing the array. */
jb_ArrayBuffer jb_BigInt64Array_buffer(const jb_BigInt64Array *arr);

// BigInt64Array Element access

/** @brief Gets the element at a specified index. */
jb_BigInt jb_BigInt64Array_get(const jb_BigInt64Array *arr, size_t index);
/** @brief Sets the element at a specified index. */
void jb_BigInt64Array_set(jb_BigInt64Array *arr, size_t index, const jb_BigInt *value);
/** @brief Gets the element at a specified index, with bounds checking. */
jb_Any jb_BigInt64Array_at(
    const jb_BigInt64Array *arr, size_t index
); // Returns BigInt or Undefined
/** @brief Gets the first element of the array. */
jb_Any jb_BigInt64Array_front(const jb_BigInt64Array *arr); // Returns BigInt or Undefined
/** @brief Gets the last element of the array. */
jb_Any jb_BigInt64Array_back(const jb_BigInt64Array *arr); // Returns BigInt or Undefined

// BigInt64Array Array methods

/** @brief Fills the array with a static value. */
void jb_BigInt64Array_fill(jb_BigInt64Array *arr, const jb_BigInt *value, size_t start, size_t end);
/** @brief Extracts a section of an array and returns a new array. */
jb_BigInt64Array jb_BigInt64Array_slice(const jb_BigInt64Array *arr, size_t start, size_t end);
/** @brief Returns a new `BigInt64Array` from a given start and end index. */
jb_BigInt64Array jb_BigInt64Array_subarray(const jb_BigInt64Array *arr, size_t start, size_t end);
/** @brief Copies a sequence of array elements within the array. */
void jb_BigInt64Array_copyWithin(jb_BigInt64Array *arr, size_t target, size_t start, size_t end);

// BigInt64Array Iterator support

/**
 * @brief An iterator for `BigInt64Array`.
 */
typedef struct {
    em_Val parent;
    size_t idx;
    size_t size;
} jb_BigInt64Array_iterator;

/** @brief Returns an iterator to the beginning of the array. */
jb_BigInt64Array_iterator jb_BigInt64Array_begin(jb_BigInt64Array *arr);
/** @brief Returns an iterator to the end of the array. */
jb_BigInt64Array_iterator jb_BigInt64Array_end(jb_BigInt64Array *arr);
/** @brief Compares two iterators for inequality. */
bool jb_BigInt64Array_iterator_not_equal(
    const jb_BigInt64Array_iterator *a, const jb_BigInt64Array_iterator *b
);
/** @brief Compares two iterators for equality. */
bool jb_BigInt64Array_iterator_equal(
    const jb_BigInt64Array_iterator *a, const jb_BigInt64Array_iterator *b
);
/** @brief Dereferences an iterator to get the current element. */
jb_BigInt jb_BigInt64Array_iterator_deref(const jb_BigInt64Array_iterator *iter);
/** @brief Advances the iterator to the next element. */
void jb_BigInt64Array_iterator_next(jb_BigInt64Array_iterator *iter);

// BigUint64Array Factory methods

/** @brief Creates an empty `BigUint64Array`. */
jb_BigUint64Array jb_BigUint64Array_create(void);
/** @brief Creates a `BigUint64Array` of a specified length. */
jb_BigUint64Array jb_BigUint64Array_create_with_length(size_t length);
/** @brief Creates a `BigUint64Array` from an existing buffer. */
jb_BigUint64Array jb_BigUint64Array_create_from_buffer(
    const jb_ArrayBuffer *buffer, size_t byteOffset, size_t length
);

// BigUint64Array Clone/copy

/** @brief Clones a `BigUint64Array`. */
jb_BigUint64Array jb_BigUint64Array_clone(const jb_BigUint64Array *arr);

// BigUint64Array Size and capacity

/** @brief Gets the number of elements in the array. */
size_t jb_BigUint64Array_size(const jb_BigUint64Array *arr);
/** @brief Gets the number of elements in the array. */
size_t jb_BigUint64Array_length(const jb_BigUint64Array *arr);
/** @brief Checks if the array is empty. */
bool jb_BigUint64Array_empty(const jb_BigUint64Array *arr);
/** @brief Gets the size of the array in bytes. */
size_t jb_BigUint64Array_byteLength(const jb_BigUint64Array *arr);
/** @brief Gets the offset of the array from the start of its `ArrayBuffer`. */
size_t jb_BigUint64Array_byteOffset(const jb_BigUint64Array *arr);
/** @brief Gets the `ArrayBuffer` backing the array. */
jb_ArrayBuffer jb_BigUint64Array_buffer(const jb_BigUint64Array *arr);

// BigUint64Array Element access

/** @brief Gets the element at a specified index. */
jb_BigInt jb_BigUint64Array_get(const jb_BigUint64Array *arr, size_t index);
/** @brief Sets the element at a specified index. */
void jb_BigUint64Array_set(jb_BigUint64Array *arr, size_t index, const jb_BigInt *value);
/** @brief Gets the element at a specified index, with bounds checking. */
jb_Any jb_BigUint64Array_at(
    const jb_BigUint64Array *arr, size_t index
); // Returns BigInt or Undefined
/** @brief Gets the first element of the array. */
jb_Any jb_BigUint64Array_front(const jb_BigUint64Array *arr); // Returns BigInt or Undefined
/** @brief Gets the last element of the array. */
jb_Any jb_BigUint64Array_back(const jb_BigUint64Array *arr); // Returns BigInt or Undefined

// BigUint64Array Array methods

/** @brief Fills the array with a static value. */
void jb_BigUint64Array_fill(
    jb_BigUint64Array *arr, const jb_BigInt *value, size_t start, size_t end
);
/** @brief Extracts a section of an array and returns a new array. */
jb_BigUint64Array jb_BigUint64Array_slice(const jb_BigUint64Array *arr, size_t start, size_t end);
/** @brief Returns a new `BigUint64Array` from a given start and end index. */
jb_BigUint64Array jb_BigUint64Array_subarray(
    const jb_BigUint64Array *arr, size_t start, size_t end
);
/** @brief Copies a sequence of array elements within the array. */
void jb_BigUint64Array_copyWithin(jb_BigUint64Array *arr, size_t target, size_t start, size_t end);

// BigUint64Array Iterator support

/**
 * @brief An iterator for `BigUint64Array`.
 */
typedef struct {
    em_Val parent;
    size_t idx;
    size_t size;
} jb_BigUint64Array_iterator;

/** @brief Returns an iterator to the beginning of the array. */
jb_BigUint64Array_iterator jb_BigUint64Array_begin(jb_BigUint64Array *arr);
/** @brief Returns an iterator to the end of the array. */
jb_BigUint64Array_iterator jb_BigUint64Array_end(jb_BigUint64Array *arr);
/** @brief Compares two iterators for inequality. */
bool jb_BigUint64Array_iterator_not_equal(
    const jb_BigUint64Array_iterator *a, const jb_BigUint64Array_iterator *b
);
/** @brief Compares two iterators for equality. */
bool jb_BigUint64Array_iterator_equal(
    const jb_BigUint64Array_iterator *a, const jb_BigUint64Array_iterator *b
);
/** @brief Dereferences an iterator to get the current element. */
jb_BigInt jb_BigUint64Array_iterator_deref(const jb_BigUint64Array_iterator *iter);
/** @brief Advances the iterator to the next element. */
void jb_BigUint64Array_iterator_next(jb_BigUint64Array_iterator *iter);

#ifdef __cplusplus
}
#endif
