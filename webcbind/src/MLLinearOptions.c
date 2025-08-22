#include <webcbind/MLLinearOptions.h>

DEFINE_EMLITE_TYPE(MLLinearOptions, MLOperatorOptions);


double MLLinearOptions_alpha(const MLLinearOptions *self) {
    return em_Val_as(double, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("alpha")));
}


void MLLinearOptions_set_alpha(MLLinearOptions* self, double value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("alpha"), em_Val_from(value));
}


double MLLinearOptions_beta(const MLLinearOptions *self) {
    return em_Val_as(double, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("beta")));
}


void MLLinearOptions_set_beta(MLLinearOptions* self, double value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("beta"), em_Val_from(value));
}


MLLinearOptions MLLinearOptions_new() {
    em_Val obj = em_Val_object();
    return MLLinearOptions_from_val(&obj);
}

