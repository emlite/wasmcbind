#include <webcbind/MLTensorLimits.h>

DEFINE_EMLITE_TYPE(MLTensorLimits, em_Val);


jb_Any MLTensorLimits_dataTypes(const MLTensorLimits *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dataTypes")));
}


void MLTensorLimits_set_dataTypes(MLTensorLimits* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dataTypes"), em_Val_from(value));
}


MLRankRange MLTensorLimits_rankRange(const MLTensorLimits *self) {
    return em_Val_as(MLRankRange, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rankRange")));
}


void MLTensorLimits_set_rankRange(MLTensorLimits* self, MLRankRange * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rankRange"), em_Val_from(value));
}


MLTensorLimits MLTensorLimits_new() {
    em_Val obj = em_Val_object();
    return MLTensorLimits_from_val(&obj);
}

