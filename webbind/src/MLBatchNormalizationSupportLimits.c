#include <webbind/MLBatchNormalizationSupportLimits.h>

DEFINE_EMLITE_TYPE(MLBatchNormalizationSupportLimits, em_Val);


MLTensorLimits MLBatchNormalizationSupportLimits_input(const MLBatchNormalizationSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("input")));
}


void MLBatchNormalizationSupportLimits_set_input(MLBatchNormalizationSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("input"), em_Val_from(value));
}


MLTensorLimits MLBatchNormalizationSupportLimits_mean(const MLBatchNormalizationSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mean")));
}


void MLBatchNormalizationSupportLimits_set_mean(MLBatchNormalizationSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mean"), em_Val_from(value));
}


MLTensorLimits MLBatchNormalizationSupportLimits_variance(const MLBatchNormalizationSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("variance")));
}


void MLBatchNormalizationSupportLimits_set_variance(MLBatchNormalizationSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("variance"), em_Val_from(value));
}


MLTensorLimits MLBatchNormalizationSupportLimits_scale(const MLBatchNormalizationSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("scale")));
}


void MLBatchNormalizationSupportLimits_set_scale(MLBatchNormalizationSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("scale"), em_Val_from(value));
}


MLTensorLimits MLBatchNormalizationSupportLimits_bias(const MLBatchNormalizationSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bias")));
}


void MLBatchNormalizationSupportLimits_set_bias(MLBatchNormalizationSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bias"), em_Val_from(value));
}


MLDataTypeLimits MLBatchNormalizationSupportLimits_output(const MLBatchNormalizationSupportLimits *self) {
    return em_Val_as(MLDataTypeLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("output")));
}


void MLBatchNormalizationSupportLimits_set_output(MLBatchNormalizationSupportLimits* self, MLDataTypeLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("output"), em_Val_from(value));
}


MLBatchNormalizationSupportLimits MLBatchNormalizationSupportLimits_new() {
    em_Val obj = em_Val_object();
    return MLBatchNormalizationSupportLimits_from_val(&obj);
}

