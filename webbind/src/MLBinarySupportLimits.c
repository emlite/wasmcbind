#include <webbind/MLBinarySupportLimits.h>

DEFINE_EMLITE_TYPE(MLBinarySupportLimits, em_Val);


MLTensorLimits MLBinarySupportLimits_a(const MLBinarySupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("a")));
}


void MLBinarySupportLimits_set_a(MLBinarySupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("a"), em_Val_from(value));
}


MLTensorLimits MLBinarySupportLimits_b(const MLBinarySupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("b")));
}


void MLBinarySupportLimits_set_b(MLBinarySupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("b"), em_Val_from(value));
}


MLDataTypeLimits MLBinarySupportLimits_output(const MLBinarySupportLimits *self) {
    return em_Val_as(MLDataTypeLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("output")));
}


void MLBinarySupportLimits_set_output(MLBinarySupportLimits* self, MLDataTypeLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("output"), em_Val_from(value));
}


MLBinarySupportLimits MLBinarySupportLimits_new() {
    em_Val obj = em_Val_object();
    return MLBinarySupportLimits_from_val(&obj);
}

