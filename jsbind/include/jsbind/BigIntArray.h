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

DECLARE_EMLITE_TYPE(jb_BigInt64Array, em_Val);
DECLARE_EMLITE_TYPE(jb_BigUint64Array, em_Val);

// Forward declarations
typedef struct jb_ArrayBuffer jb_ArrayBuffer;

// BigInt64Array Factory methods
jb_BigInt64Array jb_BigInt64Array_create(void); // Empty array
jb_BigInt64Array jb_BigInt64Array_create_with_length(size_t length);
jb_BigInt64Array jb_BigInt64Array_create_from_buffer(
    const jb_ArrayBuffer *buffer, size_t byteOffset, size_t length
);

// BigInt64Array Clone/copy
jb_BigInt64Array jb_BigInt64Array_clone(const jb_BigInt64Array *arr);

// BigInt64Array Size and capacity
size_t jb_BigInt64Array_size(const jb_BigInt64Array *arr);
size_t jb_BigInt64Array_length(const jb_BigInt64Array *arr);
bool jb_BigInt64Array_empty(const jb_BigInt64Array *arr);
size_t jb_BigInt64Array_byteLength(const jb_BigInt64Array *arr);
size_t jb_BigInt64Array_byteOffset(const jb_BigInt64Array *arr);
jb_ArrayBuffer jb_BigInt64Array_buffer(const jb_BigInt64Array *arr);

// BigInt64Array Element access
jb_BigInt jb_BigInt64Array_get(const jb_BigInt64Array *arr, size_t index);
void jb_BigInt64Array_set(jb_BigInt64Array *arr, size_t index, const jb_BigInt *value);
jb_Any jb_BigInt64Array_at(
    const jb_BigInt64Array *arr, size_t index
);                                                          // Returns BigInt or Undefined
jb_Any jb_BigInt64Array_front(const jb_BigInt64Array *arr); // Returns BigInt or Undefined
jb_Any jb_BigInt64Array_back(const jb_BigInt64Array *arr);  // Returns BigInt or Undefined

// BigInt64Array Array methods
void jb_BigInt64Array_fill(jb_BigInt64Array *arr, const jb_BigInt *value, size_t start, size_t end);
jb_BigInt64Array jb_BigInt64Array_slice(const jb_BigInt64Array *arr, size_t start, size_t end);
jb_BigInt64Array jb_BigInt64Array_subarray(const jb_BigInt64Array *arr, size_t start, size_t end);
void jb_BigInt64Array_copyWithin(jb_BigInt64Array *arr, size_t target, size_t start, size_t end);

// BigInt64Array Iterator support
typedef struct {
    em_Val parent;
    size_t idx;
    size_t size;
} jb_BigInt64Array_iterator;

jb_BigInt64Array_iterator jb_BigInt64Array_begin(jb_BigInt64Array *arr);
jb_BigInt64Array_iterator jb_BigInt64Array_end(jb_BigInt64Array *arr);
bool jb_BigInt64Array_iterator_not_equal(
    const jb_BigInt64Array_iterator *a, const jb_BigInt64Array_iterator *b
);
bool jb_BigInt64Array_iterator_equal(
    const jb_BigInt64Array_iterator *a, const jb_BigInt64Array_iterator *b
);
jb_BigInt jb_BigInt64Array_iterator_deref(const jb_BigInt64Array_iterator *iter);
void jb_BigInt64Array_iterator_next(jb_BigInt64Array_iterator *iter);

// BigUint64Array Factory methods
jb_BigUint64Array jb_BigUint64Array_create(void); // Empty array
jb_BigUint64Array jb_BigUint64Array_create_with_length(size_t length);
jb_BigUint64Array jb_BigUint64Array_create_from_buffer(
    const jb_ArrayBuffer *buffer, size_t byteOffset, size_t length
);

// BigUint64Array Clone/copy
jb_BigUint64Array jb_BigUint64Array_clone(const jb_BigUint64Array *arr);

// BigUint64Array Size and capacity
size_t jb_BigUint64Array_size(const jb_BigUint64Array *arr);
size_t jb_BigUint64Array_length(const jb_BigUint64Array *arr);
bool jb_BigUint64Array_empty(const jb_BigUint64Array *arr);
size_t jb_BigUint64Array_byteLength(const jb_BigUint64Array *arr);
size_t jb_BigUint64Array_byteOffset(const jb_BigUint64Array *arr);
jb_ArrayBuffer jb_BigUint64Array_buffer(const jb_BigUint64Array *arr);

// BigUint64Array Element access
jb_BigInt jb_BigUint64Array_get(const jb_BigUint64Array *arr, size_t index);
void jb_BigUint64Array_set(jb_BigUint64Array *arr, size_t index, const jb_BigInt *value);
jb_Any jb_BigUint64Array_at(
    const jb_BigUint64Array *arr, size_t index
);                                                            // Returns BigInt or Undefined
jb_Any jb_BigUint64Array_front(const jb_BigUint64Array *arr); // Returns BigInt or Undefined
jb_Any jb_BigUint64Array_back(const jb_BigUint64Array *arr);  // Returns BigInt or Undefined

// BigUint64Array Array methods
void jb_BigUint64Array_fill(
    jb_BigUint64Array *arr, const jb_BigInt *value, size_t start, size_t end
);
jb_BigUint64Array jb_BigUint64Array_slice(const jb_BigUint64Array *arr, size_t start, size_t end);
jb_BigUint64Array jb_BigUint64Array_subarray(
    const jb_BigUint64Array *arr, size_t start, size_t end
);
void jb_BigUint64Array_copyWithin(jb_BigUint64Array *arr, size_t target, size_t start, size_t end);

// BigUint64Array Iterator support
typedef struct {
    em_Val parent;
    size_t idx;
    size_t size;
} jb_BigUint64Array_iterator;

jb_BigUint64Array_iterator jb_BigUint64Array_begin(jb_BigUint64Array *arr);
jb_BigUint64Array_iterator jb_BigUint64Array_end(jb_BigUint64Array *arr);
bool jb_BigUint64Array_iterator_not_equal(
    const jb_BigUint64Array_iterator *a, const jb_BigUint64Array_iterator *b
);
bool jb_BigUint64Array_iterator_equal(
    const jb_BigUint64Array_iterator *a, const jb_BigUint64Array_iterator *b
);
jb_BigInt jb_BigUint64Array_iterator_deref(const jb_BigUint64Array_iterator *iter);
void jb_BigUint64Array_iterator_next(jb_BigUint64Array_iterator *iter);

#ifdef __cplusplus
}
#endif