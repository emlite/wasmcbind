#include <webbind/MLLayerNormalizationOptions.h>

#include <webbind/MLOperand.h>

DEFINE_EMLITE_TYPE(MLLayerNormalizationOptions, MLOperatorOptions);


MLOperand MLLayerNormalizationOptions_scale(const MLLayerNormalizationOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("scale")));
}


void MLLayerNormalizationOptions_set_scale(MLLayerNormalizationOptions* self, MLOperand * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("scale"), em_Val_from(value));
}


MLOperand MLLayerNormalizationOptions_bias(const MLLayerNormalizationOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("bias")));
}


void MLLayerNormalizationOptions_set_bias(MLLayerNormalizationOptions* self, MLOperand * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("bias"), em_Val_from(value));
}


jb_Array MLLayerNormalizationOptions_axes(const MLLayerNormalizationOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("axes")));
}


void MLLayerNormalizationOptions_set_axes(MLLayerNormalizationOptions* self, jb_Array * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("axes"), em_Val_from(value));
}


double MLLayerNormalizationOptions_epsilon(const MLLayerNormalizationOptions *self) {
    return em_Val_as(double, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("epsilon")));
}


void MLLayerNormalizationOptions_set_epsilon(MLLayerNormalizationOptions* self, double value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("epsilon"), em_Val_from(value));
}


MLLayerNormalizationOptions MLLayerNormalizationOptions_new() {
    em_Val obj = em_Val_object();
    return MLLayerNormalizationOptions_from_val(&obj);
}

