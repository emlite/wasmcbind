#pragma once

#include "Any.h"
#include "String.h"
#include "utils.h"
#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(jb_Array, em_Val);
DECLARE_EMLITE_TYPE(jb_Uint8Array, em_Val);
DECLARE_EMLITE_TYPE(jb_Int8Array, em_Val);
DECLARE_EMLITE_TYPE(jb_Uint32Array, em_Val);
DECLARE_EMLITE_TYPE(jb_Int32Array, em_Val);
DECLARE_EMLITE_TYPE(jb_Float32Array, em_Val);
DECLARE_EMLITE_TYPE(jb_Float64Array, em_Val);
DECLARE_EMLITE_TYPE(jb_ArrayBuffer, em_Val);
DECLARE_EMLITE_TYPE(jb_DataView, em_Val);

typedef struct jb_String jb_String;
typedef struct jb_Function jb_Function;

jb_Array jb_Array_new();
size_t jb_Array_length(const jb_Array *a);
jb_Any jb_Array_get(const jb_Array *a, size_t idx);
void jb_Array_set(
    const jb_Array *a, size_t idx, const jb_Any *v
);
void jb_Array_push(const jb_Array *a, const jb_Any *v);
jb_Array jb_Array_slice(
    const jb_Array *a, size_t start, size_t end
);

jb_String jb_Array_toString(const jb_Array *a);
jb_String jb_Array_toLocaleString(const jb_Array *a);
jb_Any jb_Array_pop(jb_Array *a);
jb_Array jb_Array_concat(
    const jb_Array *a, const jb_Array *items
);
jb_String jb_Array_join(
    const jb_Array *a, const jb_String *separator
);
jb_Array jb_Array_reverse(jb_Array *a);
jb_Any jb_Array_shift(jb_Array *a);
jb_Array jb_Array_sort(
    jb_Array *a, const jb_Function *compareFn
);
jb_Array jb_Array_splice(
    jb_Array *a,
    size_t start,
    size_t deleteCount,
    const jb_Array *items
);
size_t jb_Array_unshift(jb_Array *a, const jb_Array *items);
int jb_Array_indexOf(
    const jb_Array *a,
    const jb_Any *searchElement,
    size_t fromIndex
);
int jb_Array_lastIndexOf(
    const jb_Array *a,
    const jb_Any *searchElement,
    size_t fromIndex
);
bool jb_Array_every(
    const jb_Array *a,
    const jb_Function *predicate,
    const jb_Any *thisArg
);
bool jb_Array_some(
    const jb_Array *a,
    const jb_Function *predicate,
    const jb_Any *thisArg
);
void jb_Array_forEach(
    const jb_Array *a,
    const jb_Function *callbackfn,
    const jb_Any *thisArg
);
jb_Array jb_Array_map(
    const jb_Array *a,
    const jb_Function *callbackfn,
    const jb_Any *thisArg
);
jb_Array jb_Array_filter(
    const jb_Array *a,
    const jb_Function *predicate,
    const jb_Any *thisArg
);
jb_Any jb_Array_reduce(
    const jb_Array *a,
    const jb_Function *callbackfn,
    const jb_Any *initialValue
);
jb_Any jb_Array_reduceRight(
    const jb_Array *a,
    const jb_Function *callbackfn,
    const jb_Any *initialValue
);
jb_Any jb_Array_entries(const jb_Array *a);
jb_Any jb_Array_keys(const jb_Array *a);
jb_Any jb_Array_values(const jb_Array *a);

jb_ArrayBuffer jb_ArrayBuffer_new(size_t byteLen);
size_t jb_ArrayBuffer_byteLength(const jb_ArrayBuffer *buf);
jb_ArrayBuffer jb_ArrayBuffer_slice(
    const jb_ArrayBuffer *buf, size_t begin, size_t end
);
bool jb_ArrayBuffer_isView(const jb_Any *v);

jb_DataView jb_DataView_new(
    const jb_ArrayBuffer *buf,
    size_t byteOffset,
    size_t byteLen
);
size_t jb_DataView_byteLength(const jb_DataView *view);
size_t jb_DataView_byteOffset(const jb_DataView *view);
jb_ArrayBuffer jb_DataView_buffer(const jb_DataView *view);

uint8_t jb_DataView_getUint8(
    const jb_DataView *view, size_t o
);
int8_t jb_DataView_getInt8(
    const jb_DataView *view, size_t o
);
void jb_DataView_setUint8(
    jb_DataView *view, size_t o, uint8_t v
);
void jb_DataView_setInt8(
    jb_DataView *view, size_t o, int8_t v
);

uint16_t jb_DataView_getUint16(
    const jb_DataView *view, size_t off, bool le
);
int16_t jb_DataView_getInt16(
    const jb_DataView *view, size_t off, bool le
);
uint32_t jb_DataView_getUint32(
    const jb_DataView *view, size_t off, bool le
);
int32_t jb_DataView_getInt32(
    const jb_DataView *view, size_t off, bool le
);
float jb_DataView_getFloat32(
    const jb_DataView *view, size_t off, bool le
);
double jb_DataView_getFloat64(
    const jb_DataView *view, size_t off, bool le
);

void jb_DataView_setUint16(
    jb_DataView *view, size_t off, uint16_t v, bool le
);
void jb_DataView_setInt16(
    jb_DataView *view, size_t off, int16_t v, bool le
);
void jb_DataView_setUint32(
    jb_DataView *view, size_t off, uint32_t v, bool le
);
void jb_DataView_setInt32(
    jb_DataView *view, size_t off, int32_t v, bool le
);
void jb_DataView_setFloat32(
    jb_DataView *view, size_t off, float v, bool le
);
void jb_DataView_setFloat64(
    jb_DataView *view, size_t off, double v, bool le
);

#ifdef __cplusplus
}
#endif