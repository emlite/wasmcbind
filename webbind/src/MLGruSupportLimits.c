#include <webbind/MLGruSupportLimits.h>

DEFINE_EMLITE_TYPE(MLGruSupportLimits, em_Val);


MLTensorLimits MLGruSupportLimits_input(const MLGruSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("input")));
}


void MLGruSupportLimits_set_input(MLGruSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("input"), em_Val_from(value));
}


MLTensorLimits MLGruSupportLimits_weight(const MLGruSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("weight")));
}


void MLGruSupportLimits_set_weight(MLGruSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("weight"), em_Val_from(value));
}


MLTensorLimits MLGruSupportLimits_recurrentWeight(const MLGruSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("recurrentWeight")));
}


void MLGruSupportLimits_set_recurrentWeight(MLGruSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("recurrentWeight"), em_Val_from(value));
}


MLTensorLimits MLGruSupportLimits_bias(const MLGruSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bias")));
}


void MLGruSupportLimits_set_bias(MLGruSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bias"), em_Val_from(value));
}


MLTensorLimits MLGruSupportLimits_recurrentBias(const MLGruSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("recurrentBias")));
}


void MLGruSupportLimits_set_recurrentBias(MLGruSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("recurrentBias"), em_Val_from(value));
}


MLTensorLimits MLGruSupportLimits_initialHiddenState(const MLGruSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("initialHiddenState")));
}


void MLGruSupportLimits_set_initialHiddenState(MLGruSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("initialHiddenState"), em_Val_from(value));
}


MLDataTypeLimits MLGruSupportLimits_outputs(const MLGruSupportLimits *self) {
    return em_Val_as(MLDataTypeLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("outputs")));
}


void MLGruSupportLimits_set_outputs(MLGruSupportLimits* self, MLDataTypeLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("outputs"), em_Val_from(value));
}


MLGruSupportLimits MLGruSupportLimits_new() {
    em_Val obj = em_Val_object();
    return MLGruSupportLimits_from_val(&obj);
}

