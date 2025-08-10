#include <webbind/MLLogicalNotSupportLimits.h>

DEFINE_EMLITE_TYPE(MLLogicalNotSupportLimits, em_Val);


MLTensorLimits MLLogicalNotSupportLimits_a(const MLLogicalNotSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("a")));
}


void MLLogicalNotSupportLimits_set_a(MLLogicalNotSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("a"), em_Val_from(value));
}


MLDataTypeLimits MLLogicalNotSupportLimits_output(const MLLogicalNotSupportLimits *self) {
    return em_Val_as(MLDataTypeLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("output")));
}


void MLLogicalNotSupportLimits_set_output(MLLogicalNotSupportLimits* self, MLDataTypeLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("output"), em_Val_from(value));
}


MLLogicalNotSupportLimits MLLogicalNotSupportLimits_new() {
    em_Val obj = em_Val_object();
    return MLLogicalNotSupportLimits_from_val(&obj);
}

