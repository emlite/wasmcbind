#include <webbind/MLLstmCellSupportLimits.h>

DEFINE_EMLITE_TYPE(MLLstmCellSupportLimits, em_Val);


MLTensorLimits MLLstmCellSupportLimits_input(const MLLstmCellSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("input")));
}


void MLLstmCellSupportLimits_set_input(MLLstmCellSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("input"), em_Val_from(value));
}


MLTensorLimits MLLstmCellSupportLimits_weight(const MLLstmCellSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("weight")));
}


void MLLstmCellSupportLimits_set_weight(MLLstmCellSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("weight"), em_Val_from(value));
}


MLTensorLimits MLLstmCellSupportLimits_recurrentWeight(const MLLstmCellSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("recurrentWeight")));
}


void MLLstmCellSupportLimits_set_recurrentWeight(MLLstmCellSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("recurrentWeight"), em_Val_from(value));
}


MLTensorLimits MLLstmCellSupportLimits_hiddenState(const MLLstmCellSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hiddenState")));
}


void MLLstmCellSupportLimits_set_hiddenState(MLLstmCellSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("hiddenState"), em_Val_from(value));
}


MLTensorLimits MLLstmCellSupportLimits_cellState(const MLLstmCellSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("cellState")));
}


void MLLstmCellSupportLimits_set_cellState(MLLstmCellSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("cellState"), em_Val_from(value));
}


MLTensorLimits MLLstmCellSupportLimits_bias(const MLLstmCellSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bias")));
}


void MLLstmCellSupportLimits_set_bias(MLLstmCellSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bias"), em_Val_from(value));
}


MLTensorLimits MLLstmCellSupportLimits_recurrentBias(const MLLstmCellSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("recurrentBias")));
}


void MLLstmCellSupportLimits_set_recurrentBias(MLLstmCellSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("recurrentBias"), em_Val_from(value));
}


MLTensorLimits MLLstmCellSupportLimits_peepholeWeight(const MLLstmCellSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("peepholeWeight")));
}


void MLLstmCellSupportLimits_set_peepholeWeight(MLLstmCellSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("peepholeWeight"), em_Val_from(value));
}


MLDataTypeLimits MLLstmCellSupportLimits_outputs(const MLLstmCellSupportLimits *self) {
    return em_Val_as(MLDataTypeLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("outputs")));
}


void MLLstmCellSupportLimits_set_outputs(MLLstmCellSupportLimits* self, MLDataTypeLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("outputs"), em_Val_from(value));
}


MLLstmCellSupportLimits MLLstmCellSupportLimits_new() {
    em_Val obj = em_Val_object();
    return MLLstmCellSupportLimits_from_val(&obj);
}

