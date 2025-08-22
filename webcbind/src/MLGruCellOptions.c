#include <webcbind/MLGruCellOptions.h>

#include <webcbind/MLOperand.h>

DEFINE_EMLITE_TYPE(MLGruCellOptions, MLOperatorOptions);


MLOperand MLGruCellOptions_bias(const MLGruCellOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("bias")));
}


void MLGruCellOptions_set_bias(MLGruCellOptions* self, MLOperand * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("bias"), em_Val_from(value));
}


MLOperand MLGruCellOptions_recurrentBias(const MLGruCellOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("recurrentBias")));
}


void MLGruCellOptions_set_recurrentBias(MLGruCellOptions* self, MLOperand * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("recurrentBias"), em_Val_from(value));
}


bool MLGruCellOptions_resetAfter(const MLGruCellOptions *self) {
    return em_Val_as(bool, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("resetAfter")));
}


void MLGruCellOptions_set_resetAfter(MLGruCellOptions* self, bool value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("resetAfter"), em_Val_from(value));
}


MLGruWeightLayout MLGruCellOptions_layout(const MLGruCellOptions *self) {
    return em_Val_as(MLGruWeightLayout, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("layout")));
}


void MLGruCellOptions_set_layout(MLGruCellOptions* self, MLGruWeightLayout * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("layout"), em_Val_from(value));
}


jb_Array MLGruCellOptions_activations(const MLGruCellOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("activations")));
}


void MLGruCellOptions_set_activations(MLGruCellOptions* self, jb_Array * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("activations"), em_Val_from(value));
}


MLGruCellOptions MLGruCellOptions_new() {
    em_Val obj = em_Val_object();
    return MLGruCellOptions_from_val(&obj);
}

