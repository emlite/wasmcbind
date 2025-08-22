#include <webcbind/MLGemmOptions.h>

#include <webcbind/MLOperand.h>

DEFINE_EMLITE_TYPE(MLGemmOptions, MLOperatorOptions);


MLOperand MLGemmOptions_c(const MLGemmOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("c")));
}


void MLGemmOptions_set_c(MLGemmOptions* self, MLOperand * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("c"), em_Val_from(value));
}


double MLGemmOptions_alpha(const MLGemmOptions *self) {
    return em_Val_as(double, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("alpha")));
}


void MLGemmOptions_set_alpha(MLGemmOptions* self, double value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("alpha"), em_Val_from(value));
}


double MLGemmOptions_beta(const MLGemmOptions *self) {
    return em_Val_as(double, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("beta")));
}


void MLGemmOptions_set_beta(MLGemmOptions* self, double value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("beta"), em_Val_from(value));
}


bool MLGemmOptions_aTranspose(const MLGemmOptions *self) {
    return em_Val_as(bool, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("aTranspose")));
}


void MLGemmOptions_set_aTranspose(MLGemmOptions* self, bool value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("aTranspose"), em_Val_from(value));
}


bool MLGemmOptions_bTranspose(const MLGemmOptions *self) {
    return em_Val_as(bool, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("bTranspose")));
}


void MLGemmOptions_set_bTranspose(MLGemmOptions* self, bool value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("bTranspose"), em_Val_from(value));
}


MLGemmOptions MLGemmOptions_new() {
    em_Val obj = em_Val_object();
    return MLGemmOptions_from_val(&obj);
}

