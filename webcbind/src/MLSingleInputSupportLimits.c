#include <webcbind/MLSingleInputSupportLimits.h>

DEFINE_EMLITE_TYPE(MLSingleInputSupportLimits, em_Val);


MLTensorLimits MLSingleInputSupportLimits_input(const MLSingleInputSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("input")));
}


void MLSingleInputSupportLimits_set_input(MLSingleInputSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("input"), em_Val_from(value));
}


MLDataTypeLimits MLSingleInputSupportLimits_output(const MLSingleInputSupportLimits *self) {
    return em_Val_as(MLDataTypeLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("output")));
}


void MLSingleInputSupportLimits_set_output(MLSingleInputSupportLimits* self, MLDataTypeLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("output"), em_Val_from(value));
}


MLSingleInputSupportLimits MLSingleInputSupportLimits_new() {
    em_Val obj = em_Val_object();
    return MLSingleInputSupportLimits_from_val(&obj);
}

