#include <webbind/MLLstmCellOptions.h>

#include <webbind/MLOperand.h>

DEFINE_EMLITE_TYPE(MLLstmCellOptions, MLOperatorOptions);


MLOperand MLLstmCellOptions_bias(const MLLstmCellOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("bias")));
}


void MLLstmCellOptions_set_bias(MLLstmCellOptions* self, MLOperand * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("bias"), em_Val_from(value));
}


MLOperand MLLstmCellOptions_recurrentBias(const MLLstmCellOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("recurrentBias")));
}


void MLLstmCellOptions_set_recurrentBias(MLLstmCellOptions* self, MLOperand * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("recurrentBias"), em_Val_from(value));
}


MLOperand MLLstmCellOptions_peepholeWeight(const MLLstmCellOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("peepholeWeight")));
}


void MLLstmCellOptions_set_peepholeWeight(MLLstmCellOptions* self, MLOperand * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("peepholeWeight"), em_Val_from(value));
}


MLLstmWeightLayout MLLstmCellOptions_layout(const MLLstmCellOptions *self) {
    return em_Val_as(MLLstmWeightLayout, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("layout")));
}


void MLLstmCellOptions_set_layout(MLLstmCellOptions* self, MLLstmWeightLayout * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("layout"), em_Val_from(value));
}


jb_Array MLLstmCellOptions_activations(const MLLstmCellOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("activations")));
}


void MLLstmCellOptions_set_activations(MLLstmCellOptions* self, jb_Array * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("activations"), em_Val_from(value));
}


MLLstmCellOptions MLLstmCellOptions_new() {
    em_Val obj = em_Val_object();
    return MLLstmCellOptions_from_val(&obj);
}

