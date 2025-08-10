#include <webbind/MLBatchNormalizationOptions.h>

#include <webbind/MLOperand.h>

DEFINE_EMLITE_TYPE(MLBatchNormalizationOptions, MLOperatorOptions);


MLOperand MLBatchNormalizationOptions_scale(const MLBatchNormalizationOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("scale")));
}


void MLBatchNormalizationOptions_set_scale(MLBatchNormalizationOptions* self, MLOperand * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("scale"), em_Val_from(value));
}


MLOperand MLBatchNormalizationOptions_bias(const MLBatchNormalizationOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("bias")));
}


void MLBatchNormalizationOptions_set_bias(MLBatchNormalizationOptions* self, MLOperand * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("bias"), em_Val_from(value));
}


unsigned long MLBatchNormalizationOptions_axis(const MLBatchNormalizationOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("axis")));
}


void MLBatchNormalizationOptions_set_axis(MLBatchNormalizationOptions* self, unsigned long value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("axis"), em_Val_from(value));
}


double MLBatchNormalizationOptions_epsilon(const MLBatchNormalizationOptions *self) {
    return em_Val_as(double, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("epsilon")));
}


void MLBatchNormalizationOptions_set_epsilon(MLBatchNormalizationOptions* self, double value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("epsilon"), em_Val_from(value));
}


MLBatchNormalizationOptions MLBatchNormalizationOptions_new() {
    em_Val obj = em_Val_object();
    return MLBatchNormalizationOptions_from_val(&obj);
}

