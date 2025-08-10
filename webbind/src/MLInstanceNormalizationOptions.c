#include <webbind/MLInstanceNormalizationOptions.h>

#include <webbind/MLOperand.h>

DEFINE_EMLITE_TYPE(MLInstanceNormalizationOptions, MLOperatorOptions);


MLOperand MLInstanceNormalizationOptions_scale(const MLInstanceNormalizationOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("scale")));
}


void MLInstanceNormalizationOptions_set_scale(MLInstanceNormalizationOptions* self, MLOperand * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("scale"), em_Val_from(value));
}


MLOperand MLInstanceNormalizationOptions_bias(const MLInstanceNormalizationOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("bias")));
}


void MLInstanceNormalizationOptions_set_bias(MLInstanceNormalizationOptions* self, MLOperand * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("bias"), em_Val_from(value));
}


double MLInstanceNormalizationOptions_epsilon(const MLInstanceNormalizationOptions *self) {
    return em_Val_as(double, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("epsilon")));
}


void MLInstanceNormalizationOptions_set_epsilon(MLInstanceNormalizationOptions* self, double value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("epsilon"), em_Val_from(value));
}


MLInputOperandLayout MLInstanceNormalizationOptions_layout(const MLInstanceNormalizationOptions *self) {
    return em_Val_as(MLInputOperandLayout, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("layout")));
}


void MLInstanceNormalizationOptions_set_layout(MLInstanceNormalizationOptions* self, MLInputOperandLayout * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("layout"), em_Val_from(value));
}


MLInstanceNormalizationOptions MLInstanceNormalizationOptions_new() {
    em_Val obj = em_Val_object();
    return MLInstanceNormalizationOptions_from_val(&obj);
}

