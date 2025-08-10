#include <webbind/MLLstmOptions.h>

#include <webbind/MLOperand.h>

DEFINE_EMLITE_TYPE(MLLstmOptions, MLOperatorOptions);


MLOperand MLLstmOptions_bias(const MLLstmOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("bias")));
}


void MLLstmOptions_set_bias(MLLstmOptions* self, MLOperand * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("bias"), em_Val_from(value));
}


MLOperand MLLstmOptions_recurrentBias(const MLLstmOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("recurrentBias")));
}


void MLLstmOptions_set_recurrentBias(MLLstmOptions* self, MLOperand * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("recurrentBias"), em_Val_from(value));
}


MLOperand MLLstmOptions_peepholeWeight(const MLLstmOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("peepholeWeight")));
}


void MLLstmOptions_set_peepholeWeight(MLLstmOptions* self, MLOperand * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("peepholeWeight"), em_Val_from(value));
}


MLOperand MLLstmOptions_initialHiddenState(const MLLstmOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("initialHiddenState")));
}


void MLLstmOptions_set_initialHiddenState(MLLstmOptions* self, MLOperand * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("initialHiddenState"), em_Val_from(value));
}


MLOperand MLLstmOptions_initialCellState(const MLLstmOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("initialCellState")));
}


void MLLstmOptions_set_initialCellState(MLLstmOptions* self, MLOperand * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("initialCellState"), em_Val_from(value));
}


bool MLLstmOptions_returnSequence(const MLLstmOptions *self) {
    return em_Val_as(bool, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("returnSequence")));
}


void MLLstmOptions_set_returnSequence(MLLstmOptions* self, bool value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("returnSequence"), em_Val_from(value));
}


MLRecurrentNetworkDirection MLLstmOptions_direction(const MLLstmOptions *self) {
    return em_Val_as(MLRecurrentNetworkDirection, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("direction")));
}


void MLLstmOptions_set_direction(MLLstmOptions* self, MLRecurrentNetworkDirection * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("direction"), em_Val_from(value));
}


MLLstmWeightLayout MLLstmOptions_layout(const MLLstmOptions *self) {
    return em_Val_as(MLLstmWeightLayout, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("layout")));
}


void MLLstmOptions_set_layout(MLLstmOptions* self, MLLstmWeightLayout * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("layout"), em_Val_from(value));
}


jb_Array MLLstmOptions_activations(const MLLstmOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("activations")));
}


void MLLstmOptions_set_activations(MLLstmOptions* self, jb_Array * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("activations"), em_Val_from(value));
}


MLLstmOptions MLLstmOptions_new() {
    em_Val obj = em_Val_object();
    return MLLstmOptions_from_val(&obj);
}

