#include <webbind/MLSplitSupportLimits.h>

DEFINE_EMLITE_TYPE(MLSplitSupportLimits, em_Val);


MLTensorLimits MLSplitSupportLimits_input(const MLSplitSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("input")));
}


void MLSplitSupportLimits_set_input(MLSplitSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("input"), em_Val_from(value));
}


MLDataTypeLimits MLSplitSupportLimits_outputs(const MLSplitSupportLimits *self) {
    return em_Val_as(MLDataTypeLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("outputs")));
}


void MLSplitSupportLimits_set_outputs(MLSplitSupportLimits* self, MLDataTypeLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("outputs"), em_Val_from(value));
}


MLSplitSupportLimits MLSplitSupportLimits_new() {
    em_Val obj = em_Val_object();
    return MLSplitSupportLimits_from_val(&obj);
}

