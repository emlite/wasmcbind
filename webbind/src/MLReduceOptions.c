#include <webbind/MLReduceOptions.h>

DEFINE_EMLITE_TYPE(MLReduceOptions, MLOperatorOptions);


jb_Array MLReduceOptions_axes(const MLReduceOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("axes")));
}


void MLReduceOptions_set_axes(MLReduceOptions* self, jb_Array * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("axes"), em_Val_from(value));
}


bool MLReduceOptions_keepDimensions(const MLReduceOptions *self) {
    return em_Val_as(bool, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("keepDimensions")));
}


void MLReduceOptions_set_keepDimensions(MLReduceOptions* self, bool value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("keepDimensions"), em_Val_from(value));
}


MLReduceOptions MLReduceOptions_new() {
    em_Val obj = em_Val_object();
    return MLReduceOptions_from_val(&obj);
}

