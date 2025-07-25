#include <jsbind/Array.h>

DEFINE_EMLITE_TYPE(jb_Uint8Array, em_Val);

DEFINE_EMLITE_TYPE(jb_Int8Array, em_Val);

DEFINE_EMLITE_TYPE(jb_Uint32Array, em_Val);

DEFINE_EMLITE_TYPE(jb_Int32Array, em_Val);

DEFINE_EMLITE_TYPE(jb_Float32Array, em_Val);

DEFINE_EMLITE_TYPE(jb_Float64Array, em_Val);

DEFINE_EMLITE_TYPE(jb_ArrayBuffer, em_Val);

DEFINE_EMLITE_TYPE(jb_DataView, em_Val);

DEFINE_EMLITE_TYPE(jb_FrozenArray, em_Val);

DEFINE_EMLITE_TYPE(jb_ObservableArray, em_Val);

size_t jb_Array_length(jb_Sequence a) {
    em_Val prop = em_Val_from_string("length");
    em_Val v = em_Val_get(a.inner, prop);
    return (size_t)em_Val_as_int(v);
}
jb_Any jb_Array_get(jb_Sequence a, size_t idx) {
    em_Val idxv = em_Val_from_int((int)idx);
    em_Val v = em_Val_call(a.inner, "at", idxv);
    return (jb_Any){.inner = v};
}
void jb_Array_set(jb_Sequence a, size_t idx, jb_Any v) {
    em_Val idxv = em_Val_from_int((int)idx);
    em_Val_set(a.inner, idxv, v.inner);
}
void jb_Array_push(jb_Sequence a, jb_Any v) {
    em_Val_call(a.inner, "push", v.inner);
}
jb_Sequence jb_Array_slice(jb_Sequence a, size_t start, size_t end) {
    em_Val startv = em_Val_from_int((int)start);
    em_Val endv = em_Val_from_int((int)end);
    em_Val v = em_Val_call(a.inner, "slice", startv, endv);
    return (jb_Sequence){.inner = v};
}