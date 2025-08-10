#include <webbind/MLPreluSupportLimits.h>

DEFINE_EMLITE_TYPE(MLPreluSupportLimits, em_Val);


MLTensorLimits MLPreluSupportLimits_input(const MLPreluSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("input")));
}


void MLPreluSupportLimits_set_input(MLPreluSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("input"), em_Val_from(value));
}


MLTensorLimits MLPreluSupportLimits_slope(const MLPreluSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("slope")));
}


void MLPreluSupportLimits_set_slope(MLPreluSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("slope"), em_Val_from(value));
}


MLDataTypeLimits MLPreluSupportLimits_output(const MLPreluSupportLimits *self) {
    return em_Val_as(MLDataTypeLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("output")));
}


void MLPreluSupportLimits_set_output(MLPreluSupportLimits* self, MLDataTypeLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("output"), em_Val_from(value));
}


MLPreluSupportLimits MLPreluSupportLimits_new() {
    em_Val obj = em_Val_object();
    return MLPreluSupportLimits_from_val(&obj);
}

