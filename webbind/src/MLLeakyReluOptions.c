#include <webbind/MLLeakyReluOptions.h>

DEFINE_EMLITE_TYPE(MLLeakyReluOptions, MLOperatorOptions);


double MLLeakyReluOptions_alpha(const MLLeakyReluOptions *self) {
    return em_Val_as(double, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("alpha")));
}


void MLLeakyReluOptions_set_alpha(MLLeakyReluOptions* self, double value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("alpha"), em_Val_from(value));
}


MLLeakyReluOptions MLLeakyReluOptions_new() {
    em_Val obj = em_Val_object();
    return MLLeakyReluOptions_from_val(&obj);
}

