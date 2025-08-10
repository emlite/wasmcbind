#include <webbind/MLGemmSupportLimits.h>

DEFINE_EMLITE_TYPE(MLGemmSupportLimits, em_Val);


MLTensorLimits MLGemmSupportLimits_a(const MLGemmSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("a")));
}


void MLGemmSupportLimits_set_a(MLGemmSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("a"), em_Val_from(value));
}


MLTensorLimits MLGemmSupportLimits_b(const MLGemmSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("b")));
}


void MLGemmSupportLimits_set_b(MLGemmSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("b"), em_Val_from(value));
}


MLTensorLimits MLGemmSupportLimits_c(const MLGemmSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("c")));
}


void MLGemmSupportLimits_set_c(MLGemmSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("c"), em_Val_from(value));
}


MLDataTypeLimits MLGemmSupportLimits_output(const MLGemmSupportLimits *self) {
    return em_Val_as(MLDataTypeLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("output")));
}


void MLGemmSupportLimits_set_output(MLGemmSupportLimits* self, MLDataTypeLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("output"), em_Val_from(value));
}


MLGemmSupportLimits MLGemmSupportLimits_new() {
    em_Val obj = em_Val_object();
    return MLGemmSupportLimits_from_val(&obj);
}

