#include <webcbind/MLWhereSupportLimits.h>

DEFINE_EMLITE_TYPE(MLWhereSupportLimits, em_Val);


MLTensorLimits MLWhereSupportLimits_condition(const MLWhereSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("condition")));
}


void MLWhereSupportLimits_set_condition(MLWhereSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("condition"), em_Val_from(value));
}


MLTensorLimits MLWhereSupportLimits_trueValue(const MLWhereSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("trueValue")));
}


void MLWhereSupportLimits_set_trueValue(MLWhereSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("trueValue"), em_Val_from(value));
}


MLTensorLimits MLWhereSupportLimits_falseValue(const MLWhereSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("falseValue")));
}


void MLWhereSupportLimits_set_falseValue(MLWhereSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("falseValue"), em_Val_from(value));
}


MLDataTypeLimits MLWhereSupportLimits_output(const MLWhereSupportLimits *self) {
    return em_Val_as(MLDataTypeLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("output")));
}


void MLWhereSupportLimits_set_output(MLWhereSupportLimits* self, MLDataTypeLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("output"), em_Val_from(value));
}


MLWhereSupportLimits MLWhereSupportLimits_new() {
    em_Val obj = em_Val_object();
    return MLWhereSupportLimits_from_val(&obj);
}

