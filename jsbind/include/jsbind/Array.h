#pragma once

#include "Any.h"
#include "String.h"
#include "utils.h"
#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file Array.h
 * @brief Bindings for the JavaScript `Array`, `TypedArray`, `ArrayBuffer`, and
 * `DataView` objects.
 *
 * This file provides functions for creating and manipulating arrays and binary
 * data buffers.
 */

/** @brief An opaque type representing a JavaScript `Array` object. */
DECLARE_EMLITE_TYPE(jb_Array, em_Val);
/** @brief An opaque type representing a JavaScript `Uint8Array` object. */
DECLARE_EMLITE_TYPE(jb_Uint8Array, em_Val);
/** @brief An opaque type representing a JavaScript `Int8Array` object. */
DECLARE_EMLITE_TYPE(jb_Int8Array, em_Val);
/** @brief An opaque type representing a JavaScript `Uint16Array` object. */
DECLARE_EMLITE_TYPE(jb_Uint16Array, em_Val);
/** @brief An opaque type representing a JavaScript `Int16Array` object. */
DECLARE_EMLITE_TYPE(jb_Int16Array, em_Val);
/** @brief An opaque type representing a JavaScript `Uint32Array` object. */
DECLARE_EMLITE_TYPE(jb_Uint32Array, em_Val);
/** @brief An opaque type representing a JavaScript `Int32Array` object. */
DECLARE_EMLITE_TYPE(jb_Int32Array, em_Val);
/** @brief An opaque type representing a JavaScript `Float32Array` object. */
DECLARE_EMLITE_TYPE(jb_Float32Array, em_Val);
/** @brief An opaque type representing a JavaScript `Float64Array` object. */
DECLARE_EMLITE_TYPE(jb_Float64Array, em_Val);
/** @brief An opaque type representing a JavaScript `ArrayBuffer` object. */
DECLARE_EMLITE_TYPE(jb_ArrayBuffer, em_Val);
/** @brief An opaque type representing a JavaScript `DataView` object. */
DECLARE_EMLITE_TYPE(jb_DataView, em_Val);

typedef struct jb_String jb_String;
typedef struct jb_Function jb_Function;

/** @brief Creates a new, empty `Array`. */
jb_Array jb_Array_new();
/** @brief Gets the number of elements in the array. */
size_t jb_Array_length(const jb_Array *a);
/** @brief Gets the element at a specified index. */
jb_Any jb_Array_get(const jb_Array *a, size_t idx);
/** @brief Sets the element at a specified index. */
void jb_Array_set(const jb_Array *a, size_t idx, const jb_Any *v);
/** @brief Adds an element to the end of the array. */
void jb_Array_push(const jb_Array *a, const jb_Any *v);
/** @brief Extracts a section of an array and returns a new array. */
jb_Array jb_Array_slice(const jb_Array *a, size_t start, size_t end);

/** @brief Returns a string representing the array. */
jb_String jb_Array_toString(const jb_Array *a);
/** @brief Returns a localized string representing the array. */
jb_String jb_Array_toLocaleString(const jb_Array *a);
/** @brief Removes the last element from an array and returns that element. */
jb_Any jb_Array_pop(jb_Array *a);
/** @brief Merges two or more arrays. */
jb_Array jb_Array_concat(const jb_Array *a, const jb_Array *items);
/** @brief Joins all elements of an array into a string. */
jb_String jb_Array_join(const jb_Array *a, const jb_String *separator);
/** @brief Reverses an array in place. */
jb_Array jb_Array_reverse(jb_Array *a);
/** @brief Removes the first element from an array and returns that element. */
jb_Any jb_Array_shift(jb_Array *a);
/** @brief Sorts the elements of an array in place. */
jb_Array jb_Array_sort(jb_Array *a, const jb_Function *compareFn);
/** @brief Adds and/or removes elements from an array. */
jb_Array jb_Array_splice(jb_Array *a, size_t start, size_t deleteCount, const jb_Array *items);
/** @brief Adds one or more elements to the beginning of an array. */
size_t jb_Array_unshift(jb_Array *a, const jb_Array *items);
/** @brief Returns the first index at which a given element can be found in the array. */
int jb_Array_indexOf(const jb_Array *a, const jb_Any *searchElement, size_t fromIndex);
/** @brief Returns the last index at which a given element can be found in the array. */
int jb_Array_lastIndexOf(const jb_Array *a, const jb_Any *searchElement, size_t fromIndex);
/** @brief Tests whether all elements in the array pass the test implemented by the provided
 * function. */
bool jb_Array_every(const jb_Array *a, const jb_Function *predicate, const jb_Any *thisArg);
/** @brief Tests whether at least one element in the array passes the test implemented by the
 * provided function. */
bool jb_Array_some(const jb_Array *a, const jb_Function *predicate, const jb_Any *thisArg);
/** @brief Executes a provided function once for each array element. */
void jb_Array_forEach(const jb_Array *a, const jb_Function *callbackfn, const jb_Any *thisArg);
/** @brief Creates a new array with the results of calling a provided function on every element in
 * the calling array. */
jb_Array jb_Array_map(const jb_Array *a, const jb_Function *callbackfn, const jb_Any *thisArg);
/** @brief Creates a new array with all elements that pass the test implemented by the provided
 * function. */
jb_Array jb_Array_filter(const jb_Array *a, const jb_Function *predicate, const jb_Any *thisArg);
/** @brief Executes a reducer function on each element of the array, resulting in a single output
 * value. */
jb_Any jb_Array_reduce(
    const jb_Array *a, const jb_Function *callbackfn, const jb_Any *initialValue
);
/** @brief Applies a function against an accumulator and each value of the array (from
 * right-to-left) to reduce it to a single value. */
jb_Any jb_Array_reduceRight(
    const jb_Array *a, const jb_Function *callbackfn, const jb_Any *initialValue
);
/** @brief Returns a new `Array Iterator` object that contains the key/value pairs for each index in
 * the array. */
jb_Any jb_Array_entries(const jb_Array *a);
/** @brief Returns a new `Array Iterator` object that contains the keys for each index in the array.
 */
jb_Any jb_Array_keys(const jb_Array *a);
/** @brief Returns a new `Array Iterator` object that contains the values for each index in the
 * array. */
jb_Any jb_Array_values(const jb_Array *a);

/**
 * @brief A macro to declare the functions for a `TypedArray` type.
 */
#define DECLARE_TYPED_ARRAY_FUNCS(name, elem_type)                                                 \
    jb_##name jb_##name##_new(void);                                                               \
    jb_##name jb_##name##_new_with_length(size_t length);                                          \
    jb_##name jb_##name##_new_from_buffer(                                                         \
        const jb_ArrayBuffer *buffer, size_t byteOffset, size_t length                             \
    );                                                                                             \
                                                                                                   \
    jb_##name jb_##name##_clone(const jb_##name *arr);                                             \
    size_t jb_##name##_size(const jb_##name *arr);                                                 \
    size_t jb_##name##_byteLength(const jb_##name *arr);                                           \
    size_t jb_##name##_byteOffset(const jb_##name *arr);                                           \
    jb_ArrayBuffer jb_##name##_buffer(const jb_##name *arr);                                       \
    elem_type jb_##name##_get(const jb_##name *arr, size_t index);                                 \
    void jb_##name##_set(jb_##name *arr, size_t index, elem_type value);                           \
    jb_Any jb_##name##_at(const jb_##name *arr, size_t index);                                     \
    void jb_##name##_fill(jb_##name *arr, elem_type value, size_t start, size_t end);              \
    jb_##name jb_##name##_slice(const jb_##name *arr, size_t start, size_t end);                   \
    jb_##name jb_##name##_subarray(const jb_##name *arr, size_t start, size_t end);                \
    void jb_##name##_copyWithin(jb_##name *arr, size_t target, size_t start, size_t end);          \
    jb_String jb_##name##_toString(const jb_##name *arr);                                          \
    int jb_##name##_indexOf(const jb_##name *arr, elem_type searchElement, size_t fromIndex);      \
    int jb_##name##_lastIndexOf(const jb_##name *arr, elem_type searchElement, size_t fromIndex);  \
    bool jb_##name##_includes(const jb_##name *arr, elem_type searchElement, size_t fromIndex);    \
    void jb_##name##_reverse(jb_##name *arr);                                                      \
    void jb_##name##_sort(jb_##name *arr, const jb_Function *compareFn);

// Declare functions for all TypedArray types
DECLARE_TYPED_ARRAY_FUNCS(Uint8Array, uint8_t)
DECLARE_TYPED_ARRAY_FUNCS(Int8Array, int8_t)
DECLARE_TYPED_ARRAY_FUNCS(Uint16Array, uint16_t)
DECLARE_TYPED_ARRAY_FUNCS(Int16Array, int16_t)
DECLARE_TYPED_ARRAY_FUNCS(Uint32Array, uint32_t)
DECLARE_TYPED_ARRAY_FUNCS(Int32Array, int32_t)
DECLARE_TYPED_ARRAY_FUNCS(Float32Array, float)
DECLARE_TYPED_ARRAY_FUNCS(Float64Array, double)

/** @brief Creates a new `ArrayBuffer` object. */
jb_ArrayBuffer jb_ArrayBuffer_new(size_t byteLen);
/** @brief Gets the size, in bytes, of the array. */
size_t jb_ArrayBuffer_byteLength(const jb_ArrayBuffer *buf);
/** @brief Returns a new `ArrayBuffer` whose contents are a copy of this `ArrayBuffer`'s bytes from
 * `begin` (inclusive) up to `end` (exclusive). */
jb_ArrayBuffer jb_ArrayBuffer_slice(const jb_ArrayBuffer *buf, size_t begin, size_t end);
/** @brief Determines if a value is a view on an `ArrayBuffer`. */
bool jb_ArrayBuffer_isView(const jb_Any *v);

/** @brief Creates a new `DataView` object. */
jb_DataView jb_DataView_new(const jb_ArrayBuffer *buf, size_t byteOffset, size_t byteLen);
/** @brief Gets the length (in bytes) of the `DataView`. */
size_t jb_DataView_byteLength(const jb_DataView *view);
/** @brief Gets the offset (in bytes) of the `DataView` from the start of its `ArrayBuffer`. */
size_t jb_DataView_byteOffset(const jb_DataView *view);
/** @brief Gets the `ArrayBuffer` referenced by the `DataView`. */
jb_ArrayBuffer jb_DataView_buffer(const jb_DataView *view);

/** @brief Gets an unsigned 8-bit integer at the specified byte offset. */
uint8_t jb_DataView_getUint8(const jb_DataView *view, size_t o);
/** @brief Gets a signed 8-bit integer at the specified byte offset. */
int8_t jb_DataView_getInt8(const jb_DataView *view, size_t o);
/** @brief Stores an unsigned 8-bit integer at the specified byte offset. */
void jb_DataView_setUint8(jb_DataView *view, size_t o, uint8_t v);
/** @brief Stores a signed 8-bit integer at the specified byte offset. */
void jb_DataView_setInt8(jb_DataView *view, size_t o, int8_t v);

/** @brief Gets an unsigned 16-bit integer at the specified byte offset. */
uint16_t jb_DataView_getUint16(const jb_DataView *view, size_t off, bool le);
/** @brief Gets a signed 16-bit integer at the specified byte offset. */
int16_t jb_DataView_getInt16(const jb_DataView *view, size_t off, bool le);
/** @brief Gets an unsigned 32-bit integer at the specified byte offset. */
uint32_t jb_DataView_getUint32(const jb_DataView *view, size_t off, bool le);
/** @brief Gets a signed 32-bit integer at the specified byte offset. */
int32_t jb_DataView_getInt32(const jb_DataView *view, size_t off, bool le);
/** @brief Gets a 32-bit float at the specified byte offset. */
float jb_DataView_getFloat32(const jb_DataView *view, size_t off, bool le);
/** @brief Gets a 64-bit float at the specified byte offset. */
double jb_DataView_getFloat64(const jb_DataView *view, size_t off, bool le);

/** @brief Stores an unsigned 16-bit integer at the specified byte offset. */
void jb_DataView_setUint16(jb_DataView *view, size_t off, uint16_t v, bool le);
/** @brief Stores a signed 16-bit integer at the specified byte offset. */
void jb_DataView_setInt16(jb_DataView *view, size_t off, int16_t v, bool le);
/** @brief Stores an unsigned 32-bit integer at the specified byte offset. */
void jb_DataView_setUint32(jb_DataView *view, size_t off, uint32_t v, bool le);
/** @brief Stores a signed 32-bit integer at the specified byte offset. */
void jb_DataView_setInt32(jb_DataView *view, size_t off, int32_t v, bool le);
/** @brief Stores a 32-bit float at the specified byte offset. */
void jb_DataView_setFloat32(jb_DataView *view, size_t off, float v, bool le);
/** @brief Stores a 64-bit float at the specified byte offset. */
void jb_DataView_setFloat64(jb_DataView *view, size_t off, double v, bool le);

#ifdef __cplusplus
}
#endif
