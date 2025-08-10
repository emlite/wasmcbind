#include <webbind/MLGruOptions.h>

#include <webbind/MLOperand.h>

DEFINE_EMLITE_TYPE(MLGruOptions, MLOperatorOptions);


MLOperand MLGruOptions_bias(const MLGruOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("bias")));
}


void MLGruOptions_set_bias(MLGruOptions* self, MLOperand * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("bias"), em_Val_from(value));
}


MLOperand MLGruOptions_recurrentBias(const MLGruOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("recurrentBias")));
}


void MLGruOptions_set_recurrentBias(MLGruOptions* self, MLOperand * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("recurrentBias"), em_Val_from(value));
}


MLOperand MLGruOptions_initialHiddenState(const MLGruOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("initialHiddenState")));
}


void MLGruOptions_set_initialHiddenState(MLGruOptions* self, MLOperand * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("initialHiddenState"), em_Val_from(value));
}


bool MLGruOptions_resetAfter(const MLGruOptions *self) {
    return em_Val_as(bool, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("resetAfter")));
}


void MLGruOptions_set_resetAfter(MLGruOptions* self, bool value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("resetAfter"), em_Val_from(value));
}


bool MLGruOptions_returnSequence(const MLGruOptions *self) {
    return em_Val_as(bool, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("returnSequence")));
}


void MLGruOptions_set_returnSequence(MLGruOptions* self, bool value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("returnSequence"), em_Val_from(value));
}


MLRecurrentNetworkDirection MLGruOptions_direction(const MLGruOptions *self) {
    return em_Val_as(MLRecurrentNetworkDirection, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("direction")));
}


void MLGruOptions_set_direction(MLGruOptions* self, MLRecurrentNetworkDirection * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("direction"), em_Val_from(value));
}


MLGruWeightLayout MLGruOptions_layout(const MLGruOptions *self) {
    return em_Val_as(MLGruWeightLayout, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("layout")));
}


void MLGruOptions_set_layout(MLGruOptions* self, MLGruWeightLayout * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("layout"), em_Val_from(value));
}


jb_Array MLGruOptions_activations(const MLGruOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("activations")));
}


void MLGruOptions_set_activations(MLGruOptions* self, jb_Array * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("activations"), em_Val_from(value));
}


MLGruOptions MLGruOptions_new() {
    em_Val obj = em_Val_object();
    return MLGruOptions_from_val(&obj);
}

