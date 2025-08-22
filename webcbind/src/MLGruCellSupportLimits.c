#include <webcbind/MLGruCellSupportLimits.h>

DEFINE_EMLITE_TYPE(MLGruCellSupportLimits, em_Val);


MLTensorLimits MLGruCellSupportLimits_input(const MLGruCellSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("input")));
}


void MLGruCellSupportLimits_set_input(MLGruCellSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("input"), em_Val_from(value));
}


MLTensorLimits MLGruCellSupportLimits_weight(const MLGruCellSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("weight")));
}


void MLGruCellSupportLimits_set_weight(MLGruCellSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("weight"), em_Val_from(value));
}


MLTensorLimits MLGruCellSupportLimits_recurrentWeight(const MLGruCellSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("recurrentWeight")));
}


void MLGruCellSupportLimits_set_recurrentWeight(MLGruCellSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("recurrentWeight"), em_Val_from(value));
}


MLTensorLimits MLGruCellSupportLimits_hiddenState(const MLGruCellSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hiddenState")));
}


void MLGruCellSupportLimits_set_hiddenState(MLGruCellSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("hiddenState"), em_Val_from(value));
}


MLTensorLimits MLGruCellSupportLimits_bias(const MLGruCellSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bias")));
}


void MLGruCellSupportLimits_set_bias(MLGruCellSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bias"), em_Val_from(value));
}


MLTensorLimits MLGruCellSupportLimits_recurrentBias(const MLGruCellSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("recurrentBias")));
}


void MLGruCellSupportLimits_set_recurrentBias(MLGruCellSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("recurrentBias"), em_Val_from(value));
}


MLDataTypeLimits MLGruCellSupportLimits_output(const MLGruCellSupportLimits *self) {
    return em_Val_as(MLDataTypeLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("output")));
}


void MLGruCellSupportLimits_set_output(MLGruCellSupportLimits* self, MLDataTypeLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("output"), em_Val_from(value));
}


MLGruCellSupportLimits MLGruCellSupportLimits_new() {
    em_Val obj = em_Val_object();
    return MLGruCellSupportLimits_from_val(&obj);
}

