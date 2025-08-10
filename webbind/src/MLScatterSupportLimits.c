#include <webbind/MLScatterSupportLimits.h>

DEFINE_EMLITE_TYPE(MLScatterSupportLimits, em_Val);


MLTensorLimits MLScatterSupportLimits_input(const MLScatterSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("input")));
}


void MLScatterSupportLimits_set_input(MLScatterSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("input"), em_Val_from(value));
}


MLTensorLimits MLScatterSupportLimits_indices(const MLScatterSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("indices")));
}


void MLScatterSupportLimits_set_indices(MLScatterSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("indices"), em_Val_from(value));
}


MLTensorLimits MLScatterSupportLimits_updates(const MLScatterSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("updates")));
}


void MLScatterSupportLimits_set_updates(MLScatterSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("updates"), em_Val_from(value));
}


MLDataTypeLimits MLScatterSupportLimits_output(const MLScatterSupportLimits *self) {
    return em_Val_as(MLDataTypeLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("output")));
}


void MLScatterSupportLimits_set_output(MLScatterSupportLimits* self, MLDataTypeLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("output"), em_Val_from(value));
}


MLScatterSupportLimits MLScatterSupportLimits_new() {
    em_Val obj = em_Val_object();
    return MLScatterSupportLimits_from_val(&obj);
}

