#include <webcbind/MLEluOptions.h>

DEFINE_EMLITE_TYPE(MLEluOptions, MLOperatorOptions);


double MLEluOptions_alpha(const MLEluOptions *self) {
    return em_Val_as(double, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("alpha")));
}


void MLEluOptions_set_alpha(MLEluOptions* self, double value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("alpha"), em_Val_from(value));
}


MLEluOptions MLEluOptions_new() {
    em_Val obj = em_Val_object();
    return MLEluOptions_from_val(&obj);
}

