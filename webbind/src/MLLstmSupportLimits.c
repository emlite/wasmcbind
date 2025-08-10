#include <webbind/MLLstmSupportLimits.h>

DEFINE_EMLITE_TYPE(MLLstmSupportLimits, em_Val);


MLTensorLimits MLLstmSupportLimits_input(const MLLstmSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("input")));
}


void MLLstmSupportLimits_set_input(MLLstmSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("input"), em_Val_from(value));
}


MLTensorLimits MLLstmSupportLimits_weight(const MLLstmSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("weight")));
}


void MLLstmSupportLimits_set_weight(MLLstmSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("weight"), em_Val_from(value));
}


MLTensorLimits MLLstmSupportLimits_recurrentWeight(const MLLstmSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("recurrentWeight")));
}


void MLLstmSupportLimits_set_recurrentWeight(MLLstmSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("recurrentWeight"), em_Val_from(value));
}


MLTensorLimits MLLstmSupportLimits_bias(const MLLstmSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bias")));
}


void MLLstmSupportLimits_set_bias(MLLstmSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bias"), em_Val_from(value));
}


MLTensorLimits MLLstmSupportLimits_recurrentBias(const MLLstmSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("recurrentBias")));
}


void MLLstmSupportLimits_set_recurrentBias(MLLstmSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("recurrentBias"), em_Val_from(value));
}


MLTensorLimits MLLstmSupportLimits_peepholeWeight(const MLLstmSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("peepholeWeight")));
}


void MLLstmSupportLimits_set_peepholeWeight(MLLstmSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("peepholeWeight"), em_Val_from(value));
}


MLTensorLimits MLLstmSupportLimits_initialHiddenState(const MLLstmSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("initialHiddenState")));
}


void MLLstmSupportLimits_set_initialHiddenState(MLLstmSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("initialHiddenState"), em_Val_from(value));
}


MLTensorLimits MLLstmSupportLimits_initialCellState(const MLLstmSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("initialCellState")));
}


void MLLstmSupportLimits_set_initialCellState(MLLstmSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("initialCellState"), em_Val_from(value));
}


MLDataTypeLimits MLLstmSupportLimits_outputs(const MLLstmSupportLimits *self) {
    return em_Val_as(MLDataTypeLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("outputs")));
}


void MLLstmSupportLimits_set_outputs(MLLstmSupportLimits* self, MLDataTypeLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("outputs"), em_Val_from(value));
}


MLLstmSupportLimits MLLstmSupportLimits_new() {
    em_Val obj = em_Val_object();
    return MLLstmSupportLimits_from_val(&obj);
}

