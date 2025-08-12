#include <jsbind/Array.h>
#include <jsbind/BigIntArray.h>

DEFINE_EMLITE_TYPE(jb_BigInt64Array, em_Val);
DEFINE_EMLITE_TYPE(jb_BigUint64Array, em_Val);

// Helper macros for size parameters
#define SIZE_MAX_TO_UNDEFINED(size)                                                                \
    ((size) == SIZE_MAX ? em_Val_undefined() : em_Val_from_int((int)(size)))

// BigInt64Array Factory methods
jb_BigInt64Array jb_BigInt64Array_create(void) {
    em_Val ctor   = em_Val_global("BigInt64Array");
    em_Val result = em_Val_call(ctor, "constructor");
    return (jb_BigInt64Array){.inner = result};
}

jb_BigInt64Array jb_BigInt64Array_create_with_length(size_t length) {
    em_Val ctor       = em_Val_global("BigInt64Array");
    em_Val length_val = em_Val_from_int((int)length);
    em_Val result     = em_Val_new(ctor, length_val);
    return (jb_BigInt64Array){.inner = result};
}

jb_BigInt64Array jb_BigInt64Array_create_from_buffer(
    const jb_ArrayBuffer *buffer, size_t byteOffset, size_t length
) {
    em_Val ctor       = em_Val_global("BigInt64Array");
    em_Val offset_val = em_Val_from_int((int)byteOffset);
    em_Val length_val = SIZE_MAX_TO_UNDEFINED(length);

    em_Val result;
    if (em_Val_is_undefined(length_val)) {
        result = em_Val_new(ctor, buffer->inner, offset_val);
    } else {
        result = em_Val_new(ctor, buffer->inner, offset_val, length_val);
    }
    return (jb_BigInt64Array){.inner = result};
}

// BigInt64Array Clone/copy
jb_BigInt64Array jb_BigInt64Array_clone(const jb_BigInt64Array *arr) {
    em_Val ctor   = em_Val_global("BigInt64Array");
    em_Val result = em_Val_new(ctor, arr->inner);
    return (jb_BigInt64Array){.inner = result};
}

// BigInt64Array Size and capacity
size_t jb_BigInt64Array_size(const jb_BigInt64Array *arr) { return jb_BigInt64Array_length(arr); }

size_t jb_BigInt64Array_length(const jb_BigInt64Array *arr) {
    em_Val prop   = em_Val_from_string("length");
    em_Val result = em_Val_get(arr->inner, prop);
    return (size_t)em_Val_as_int(result);
}

bool jb_BigInt64Array_empty(const jb_BigInt64Array *arr) {
    return jb_BigInt64Array_length(arr) == 0;
}

size_t jb_BigInt64Array_byteLength(const jb_BigInt64Array *arr) {
    em_Val prop   = em_Val_from_string("byteLength");
    em_Val result = em_Val_get(arr->inner, prop);
    return (size_t)em_Val_as_int(result);
}

size_t jb_BigInt64Array_byteOffset(const jb_BigInt64Array *arr) {
    em_Val prop   = em_Val_from_string("byteOffset");
    em_Val result = em_Val_get(arr->inner, prop);
    return (size_t)em_Val_as_int(result);
}

jb_ArrayBuffer jb_BigInt64Array_buffer(const jb_BigInt64Array *arr) {
    em_Val prop   = em_Val_from_string("buffer");
    em_Val result = em_Val_get(arr->inner, prop);
    return (jb_ArrayBuffer){.inner = result};
}

// BigInt64Array Element access
jb_BigInt jb_BigInt64Array_get(const jb_BigInt64Array *arr, size_t index) {
    em_Val index_val = em_Val_from_int((int)index);
    em_Val result    = em_Val_get(arr->inner, index_val);
    return (jb_BigInt){.inner = result};
}

void jb_BigInt64Array_set(jb_BigInt64Array *arr, size_t index, const jb_BigInt *value) {
    em_Val index_val = em_Val_from_int((int)index);
    em_Val_set(arr->inner, index_val, value->inner);
}

jb_Any jb_BigInt64Array_at(const jb_BigInt64Array *arr, size_t index) {
    em_Val index_val = em_Val_from_int((int)index);
    em_Val result    = em_Val_call(arr->inner, "at", index_val);
    return (jb_Any){.inner = result};
}

jb_Any jb_BigInt64Array_front(const jb_BigInt64Array *arr) {
    if (jb_BigInt64Array_empty(arr)) {
        return (jb_Any){.inner = em_Val_undefined()};
    }
    return jb_BigInt64Array_at(arr, 0);
}

jb_Any jb_BigInt64Array_back(const jb_BigInt64Array *arr) {
    size_t len = jb_BigInt64Array_length(arr);
    if (len == 0) {
        return (jb_Any){.inner = em_Val_undefined()};
    }
    return jb_BigInt64Array_at(arr, len - 1);
}

// BigInt64Array Array methods
void jb_BigInt64Array_fill(
    jb_BigInt64Array *arr, const jb_BigInt *value, size_t start, size_t end
) {
    em_Val start_val = em_Val_from_int((int)start);
    em_Val end_val   = SIZE_MAX_TO_UNDEFINED(end);

    if (em_Val_is_undefined(end_val)) {
        em_Val_call(arr->inner, "fill", value->inner, start_val);
    } else {
        em_Val_call(arr->inner, "fill", value->inner, start_val, end_val);
    }
}

jb_BigInt64Array jb_BigInt64Array_slice(const jb_BigInt64Array *arr, size_t start, size_t end) {
    em_Val start_val = em_Val_from_int((int)start);
    em_Val end_val   = SIZE_MAX_TO_UNDEFINED(end);

    em_Val result;
    if (em_Val_is_undefined(end_val)) {
        result = em_Val_call(arr->inner, "slice", start_val);
    } else {
        result = em_Val_call(arr->inner, "slice", start_val, end_val);
    }
    return (jb_BigInt64Array){.inner = result};
}

jb_BigInt64Array jb_BigInt64Array_subarray(const jb_BigInt64Array *arr, size_t start, size_t end) {
    em_Val start_val = em_Val_from_int((int)start);
    em_Val end_val   = SIZE_MAX_TO_UNDEFINED(end);

    em_Val result;
    if (em_Val_is_undefined(end_val)) {
        result = em_Val_call(arr->inner, "subarray", start_val);
    } else {
        result = em_Val_call(arr->inner, "subarray", start_val, end_val);
    }
    return (jb_BigInt64Array){.inner = result};
}

void jb_BigInt64Array_copyWithin(jb_BigInt64Array *arr, size_t target, size_t start, size_t end) {
    em_Val target_val = em_Val_from_int((int)target);
    em_Val start_val  = em_Val_from_int((int)start);
    em_Val end_val    = SIZE_MAX_TO_UNDEFINED(end);

    if (em_Val_is_undefined(end_val)) {
        em_Val_call(arr->inner, "copyWithin", target_val, start_val);
    } else {
        em_Val_call(arr->inner, "copyWithin", target_val, start_val, end_val);
    }
}

// BigInt64Array Iterator support
jb_BigInt64Array_iterator jb_BigInt64Array_begin(jb_BigInt64Array *arr) {
    jb_BigInt64Array_iterator iter = {
        .parent = arr->inner, .idx = 0, .size = jb_BigInt64Array_length(arr)
    };
    return iter;
}

jb_BigInt64Array_iterator jb_BigInt64Array_end(jb_BigInt64Array *arr) {
    size_t size                    = jb_BigInt64Array_length(arr);
    jb_BigInt64Array_iterator iter = {.parent = arr->inner, .idx = size, .size = size};
    return iter;
}

bool jb_BigInt64Array_iterator_not_equal(
    const jb_BigInt64Array_iterator *a, const jb_BigInt64Array_iterator *b
) {
    return a->idx != b->idx;
}

bool jb_BigInt64Array_iterator_equal(
    const jb_BigInt64Array_iterator *a, const jb_BigInt64Array_iterator *b
) {
    return a->idx == b->idx;
}

jb_BigInt jb_BigInt64Array_iterator_deref(const jb_BigInt64Array_iterator *iter) {
    em_Val index_val = em_Val_from_int((int)iter->idx);
    em_Val result    = em_Val_get(iter->parent, index_val);
    return (jb_BigInt){.inner = result};
}

void jb_BigInt64Array_iterator_next(jb_BigInt64Array_iterator *iter) {
    if (iter->idx < iter->size) {
        iter->idx++;
    }
}

// BigUint64Array Factory methods
jb_BigUint64Array jb_BigUint64Array_create(void) {
    em_Val ctor   = em_Val_global("BigUint64Array");
    em_Val result = em_Val_call(ctor, "constructor");
    return (jb_BigUint64Array){.inner = result};
}

jb_BigUint64Array jb_BigUint64Array_create_with_length(size_t length) {
    em_Val ctor       = em_Val_global("BigUint64Array");
    em_Val length_val = em_Val_from_int((int)length);
    em_Val result     = em_Val_new(ctor, length_val);
    return (jb_BigUint64Array){.inner = result};
}

jb_BigUint64Array jb_BigUint64Array_create_from_buffer(
    const jb_ArrayBuffer *buffer, size_t byteOffset, size_t length
) {
    em_Val ctor       = em_Val_global("BigUint64Array");
    em_Val offset_val = em_Val_from_int((int)byteOffset);
    em_Val length_val = SIZE_MAX_TO_UNDEFINED(length);

    em_Val result;
    if (em_Val_is_undefined(length_val)) {
        result = em_Val_new(ctor, buffer->inner, offset_val);
    } else {
        result = em_Val_new(ctor, buffer->inner, offset_val, length_val);
    }
    return (jb_BigUint64Array){.inner = result};
}

// BigUint64Array Clone/copy
jb_BigUint64Array jb_BigUint64Array_clone(const jb_BigUint64Array *arr) {
    em_Val ctor   = em_Val_global("BigUint64Array");
    em_Val result = em_Val_new(ctor, arr->inner);
    return (jb_BigUint64Array){.inner = result};
}

// BigUint64Array Size and capacity
size_t jb_BigUint64Array_size(const jb_BigUint64Array *arr) {
    return jb_BigUint64Array_length(arr);
}

size_t jb_BigUint64Array_length(const jb_BigUint64Array *arr) {
    em_Val prop   = em_Val_from_string("length");
    em_Val result = em_Val_get(arr->inner, prop);
    return (size_t)em_Val_as_int(result);
}

bool jb_BigUint64Array_empty(const jb_BigUint64Array *arr) {
    return jb_BigUint64Array_length(arr) == 0;
}

size_t jb_BigUint64Array_byteLength(const jb_BigUint64Array *arr) {
    em_Val prop   = em_Val_from_string("byteLength");
    em_Val result = em_Val_get(arr->inner, prop);
    return (size_t)em_Val_as_int(result);
}

size_t jb_BigUint64Array_byteOffset(const jb_BigUint64Array *arr) {
    em_Val prop   = em_Val_from_string("byteOffset");
    em_Val result = em_Val_get(arr->inner, prop);
    return (size_t)em_Val_as_int(result);
}

jb_ArrayBuffer jb_BigUint64Array_buffer(const jb_BigUint64Array *arr) {
    em_Val prop   = em_Val_from_string("buffer");
    em_Val result = em_Val_get(arr->inner, prop);
    return (jb_ArrayBuffer){.inner = result};
}

// BigUint64Array Element access
jb_BigInt jb_BigUint64Array_get(const jb_BigUint64Array *arr, size_t index) {
    em_Val index_val = em_Val_from_int((int)index);
    em_Val result    = em_Val_get(arr->inner, index_val);
    return (jb_BigInt){.inner = result};
}

void jb_BigUint64Array_set(jb_BigUint64Array *arr, size_t index, const jb_BigInt *value) {
    em_Val index_val = em_Val_from_int((int)index);
    em_Val_set(arr->inner, index_val, value->inner);
}

jb_Any jb_BigUint64Array_at(const jb_BigUint64Array *arr, size_t index) {
    em_Val index_val = em_Val_from_int((int)index);
    em_Val result    = em_Val_call(arr->inner, "at", index_val);
    return (jb_Any){.inner = result};
}

jb_Any jb_BigUint64Array_front(const jb_BigUint64Array *arr) {
    if (jb_BigUint64Array_empty(arr)) {
        return (jb_Any){.inner = em_Val_undefined()};
    }
    return jb_BigUint64Array_at(arr, 0);
}

jb_Any jb_BigUint64Array_back(const jb_BigUint64Array *arr) {
    size_t len = jb_BigUint64Array_length(arr);
    if (len == 0) {
        return (jb_Any){.inner = em_Val_undefined()};
    }
    return jb_BigUint64Array_at(arr, len - 1);
}

// BigUint64Array Array methods
void jb_BigUint64Array_fill(
    jb_BigUint64Array *arr, const jb_BigInt *value, size_t start, size_t end
) {
    em_Val start_val = em_Val_from_int((int)start);
    em_Val end_val   = SIZE_MAX_TO_UNDEFINED(end);

    if (em_Val_is_undefined(end_val)) {
        em_Val_call(arr->inner, "fill", value->inner, start_val);
    } else {
        em_Val_call(arr->inner, "fill", value->inner, start_val, end_val);
    }
}

jb_BigUint64Array jb_BigUint64Array_slice(const jb_BigUint64Array *arr, size_t start, size_t end) {
    em_Val start_val = em_Val_from_int((int)start);
    em_Val end_val   = SIZE_MAX_TO_UNDEFINED(end);

    em_Val result;
    if (em_Val_is_undefined(end_val)) {
        result = em_Val_call(arr->inner, "slice", start_val);
    } else {
        result = em_Val_call(arr->inner, "slice", start_val, end_val);
    }
    return (jb_BigUint64Array){.inner = result};
}

jb_BigUint64Array jb_BigUint64Array_subarray(
    const jb_BigUint64Array *arr, size_t start, size_t end
) {
    em_Val start_val = em_Val_from_int((int)start);
    em_Val end_val   = SIZE_MAX_TO_UNDEFINED(end);

    em_Val result;
    if (em_Val_is_undefined(end_val)) {
        result = em_Val_call(arr->inner, "subarray", start_val);
    } else {
        result = em_Val_call(arr->inner, "subarray", start_val, end_val);
    }
    return (jb_BigUint64Array){.inner = result};
}

void jb_BigUint64Array_copyWithin(jb_BigUint64Array *arr, size_t target, size_t start, size_t end) {
    em_Val target_val = em_Val_from_int((int)target);
    em_Val start_val  = em_Val_from_int((int)start);
    em_Val end_val    = SIZE_MAX_TO_UNDEFINED(end);

    if (em_Val_is_undefined(end_val)) {
        em_Val_call(arr->inner, "copyWithin", target_val, start_val);
    } else {
        em_Val_call(arr->inner, "copyWithin", target_val, start_val, end_val);
    }
}

// BigUint64Array Iterator support
jb_BigUint64Array_iterator jb_BigUint64Array_begin(jb_BigUint64Array *arr) {
    jb_BigUint64Array_iterator iter = {
        .parent = arr->inner, .idx = 0, .size = jb_BigUint64Array_length(arr)
    };
    return iter;
}

jb_BigUint64Array_iterator jb_BigUint64Array_end(jb_BigUint64Array *arr) {
    size_t size                     = jb_BigUint64Array_length(arr);
    jb_BigUint64Array_iterator iter = {.parent = arr->inner, .idx = size, .size = size};
    return iter;
}

bool jb_BigUint64Array_iterator_not_equal(
    const jb_BigUint64Array_iterator *a, const jb_BigUint64Array_iterator *b
) {
    return a->idx != b->idx;
}

bool jb_BigUint64Array_iterator_equal(
    const jb_BigUint64Array_iterator *a, const jb_BigUint64Array_iterator *b
) {
    return a->idx == b->idx;
}

jb_BigInt jb_BigUint64Array_iterator_deref(const jb_BigUint64Array_iterator *iter) {
    em_Val index_val = em_Val_from_int((int)iter->idx);
    em_Val result    = em_Val_get(iter->parent, index_val);
    return (jb_BigInt){.inner = result};
}

void jb_BigUint64Array_iterator_next(jb_BigUint64Array_iterator *iter) {
    if (iter->idx < iter->size) {
        iter->idx++;
    }
}