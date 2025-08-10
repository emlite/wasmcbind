#include <webbind/MLCumulativeSumOptions.h>

DEFINE_EMLITE_TYPE(MLCumulativeSumOptions, MLOperatorOptions);


bool MLCumulativeSumOptions_exclusive(const MLCumulativeSumOptions *self) {
    return em_Val_as(bool, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("exclusive")));
}


void MLCumulativeSumOptions_set_exclusive(MLCumulativeSumOptions* self, bool value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("exclusive"), em_Val_from(value));
}


bool MLCumulativeSumOptions_reversed(const MLCumulativeSumOptions *self) {
    return em_Val_as(bool, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("reversed")));
}


void MLCumulativeSumOptions_set_reversed(MLCumulativeSumOptions* self, bool value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("reversed"), em_Val_from(value));
}


MLCumulativeSumOptions MLCumulativeSumOptions_new() {
    em_Val obj = em_Val_object();
    return MLCumulativeSumOptions_from_val(&obj);
}

