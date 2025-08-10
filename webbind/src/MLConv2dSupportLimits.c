#include <webbind/MLConv2dSupportLimits.h>

DEFINE_EMLITE_TYPE(MLConv2dSupportLimits, em_Val);


MLTensorLimits MLConv2dSupportLimits_input(const MLConv2dSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("input")));
}


void MLConv2dSupportLimits_set_input(MLConv2dSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("input"), em_Val_from(value));
}


MLTensorLimits MLConv2dSupportLimits_filter(const MLConv2dSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("filter")));
}


void MLConv2dSupportLimits_set_filter(MLConv2dSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("filter"), em_Val_from(value));
}


MLTensorLimits MLConv2dSupportLimits_bias(const MLConv2dSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bias")));
}


void MLConv2dSupportLimits_set_bias(MLConv2dSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bias"), em_Val_from(value));
}


MLDataTypeLimits MLConv2dSupportLimits_output(const MLConv2dSupportLimits *self) {
    return em_Val_as(MLDataTypeLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("output")));
}


void MLConv2dSupportLimits_set_output(MLConv2dSupportLimits* self, MLDataTypeLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("output"), em_Val_from(value));
}


MLConv2dSupportLimits MLConv2dSupportLimits_new() {
    em_Val obj = em_Val_object();
    return MLConv2dSupportLimits_from_val(&obj);
}

