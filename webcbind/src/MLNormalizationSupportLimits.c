#include <webcbind/MLNormalizationSupportLimits.h>

DEFINE_EMLITE_TYPE(MLNormalizationSupportLimits, em_Val);


MLTensorLimits MLNormalizationSupportLimits_input(const MLNormalizationSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("input")));
}


void MLNormalizationSupportLimits_set_input(MLNormalizationSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("input"), em_Val_from(value));
}


MLTensorLimits MLNormalizationSupportLimits_scale(const MLNormalizationSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("scale")));
}


void MLNormalizationSupportLimits_set_scale(MLNormalizationSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("scale"), em_Val_from(value));
}


MLTensorLimits MLNormalizationSupportLimits_bias(const MLNormalizationSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bias")));
}


void MLNormalizationSupportLimits_set_bias(MLNormalizationSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bias"), em_Val_from(value));
}


MLDataTypeLimits MLNormalizationSupportLimits_output(const MLNormalizationSupportLimits *self) {
    return em_Val_as(MLDataTypeLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("output")));
}


void MLNormalizationSupportLimits_set_output(MLNormalizationSupportLimits* self, MLDataTypeLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("output"), em_Val_from(value));
}


MLNormalizationSupportLimits MLNormalizationSupportLimits_new() {
    em_Val obj = em_Val_object();
    return MLNormalizationSupportLimits_from_val(&obj);
}

