#include <webbind/MLGatherSupportLimits.h>

DEFINE_EMLITE_TYPE(MLGatherSupportLimits, em_Val);


MLTensorLimits MLGatherSupportLimits_input(const MLGatherSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("input")));
}


void MLGatherSupportLimits_set_input(MLGatherSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("input"), em_Val_from(value));
}


MLTensorLimits MLGatherSupportLimits_indices(const MLGatherSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("indices")));
}


void MLGatherSupportLimits_set_indices(MLGatherSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("indices"), em_Val_from(value));
}


MLDataTypeLimits MLGatherSupportLimits_output(const MLGatherSupportLimits *self) {
    return em_Val_as(MLDataTypeLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("output")));
}


void MLGatherSupportLimits_set_output(MLGatherSupportLimits* self, MLDataTypeLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("output"), em_Val_from(value));
}


MLGatherSupportLimits MLGatherSupportLimits_new() {
    em_Val obj = em_Val_object();
    return MLGatherSupportLimits_from_val(&obj);
}

