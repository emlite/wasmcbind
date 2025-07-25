#pragma once

#include "Any.h"
#include "utils.h"
#include <emlite/emlite.h>

DECLARE_EMLITE_TYPE(jb_Array, em_Val);

DECLARE_EMLITE_TYPE(jb_Uint8Array, em_Val);

DECLARE_EMLITE_TYPE(jb_Int8Array, em_Val);

DECLARE_EMLITE_TYPE(jb_Uint32Array, em_Val);

DECLARE_EMLITE_TYPE(jb_Int32Array, em_Val);

DECLARE_EMLITE_TYPE(jb_Float32Array, em_Val);

DECLARE_EMLITE_TYPE(jb_Float64Array, em_Val);

DECLARE_EMLITE_TYPE(jb_FrozenArray, em_Val);

DECLARE_EMLITE_TYPE(jb_ObservableArray, em_Val);

DECLARE_EMLITE_TYPE(jb_ArrayBuffer, em_Val);

DECLARE_EMLITE_TYPE(jb_DataView, em_Val);

jb_Array jb_Array_new();

size_t jb_Array_length(const jb_Array *a);
jb_Any jb_Array_get(const jb_Array *a, size_t idx);
void jb_Array_set(const jb_Array *a, size_t idx, const jb_Any *v);
void jb_Array_push(const jb_Array *a, const jb_Any *v);
jb_Array jb_Array_slice(
    const jb_Array *a, size_t start, size_t end
);
