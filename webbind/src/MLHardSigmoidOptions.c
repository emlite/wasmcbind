#include <webbind/MLHardSigmoidOptions.h>

DEFINE_EMLITE_TYPE(MLHardSigmoidOptions, MLOperatorOptions);


double MLHardSigmoidOptions_alpha(const MLHardSigmoidOptions *self) {
    return em_Val_as(double, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("alpha")));
}


void MLHardSigmoidOptions_set_alpha(MLHardSigmoidOptions* self, double value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("alpha"), em_Val_from(value));
}


double MLHardSigmoidOptions_beta(const MLHardSigmoidOptions *self) {
    return em_Val_as(double, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("beta")));
}


void MLHardSigmoidOptions_set_beta(MLHardSigmoidOptions* self, double value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("beta"), em_Val_from(value));
}


MLHardSigmoidOptions MLHardSigmoidOptions_new() {
    em_Val obj = em_Val_object();
    return MLHardSigmoidOptions_from_val(&obj);
}

