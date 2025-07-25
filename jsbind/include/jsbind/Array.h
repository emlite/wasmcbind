#pragma once

#include "Any.h"
#include "Sequence.h"
#include "utils.h"
#include <emlite/emlite.h>

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

size_t jb_Array_length(jb_Sequence a);
jb_Any jb_Array_get(jb_Sequence a, size_t idx);
void jb_Array_set(jb_Sequence a, size_t idx, jb_Any v);
void jb_Array_push(jb_Sequence a, jb_Any v);
jb_Sequence jb_Array_slice(
    jb_Sequence a, size_t start, size_t end
);
