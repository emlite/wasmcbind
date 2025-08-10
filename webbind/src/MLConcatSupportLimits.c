#include <webbind/MLConcatSupportLimits.h>

DEFINE_EMLITE_TYPE(MLConcatSupportLimits, em_Val);


MLTensorLimits MLConcatSupportLimits_inputs(const MLConcatSupportLimits *self) {
    return em_Val_as(MLTensorLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("inputs")));
}


void MLConcatSupportLimits_set_inputs(MLConcatSupportLimits* self, MLTensorLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("inputs"), em_Val_from(value));
}


MLDataTypeLimits MLConcatSupportLimits_output(const MLConcatSupportLimits *self) {
    return em_Val_as(MLDataTypeLimits, em_Val_get(em_Val_as_val(self->inner), em_Val_from("output")));
}


void MLConcatSupportLimits_set_output(MLConcatSupportLimits* self, MLDataTypeLimits * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("output"), em_Val_from(value));
}


MLConcatSupportLimits MLConcatSupportLimits_new() {
    em_Val obj = em_Val_object();
    return MLConcatSupportLimits_from_val(&obj);
}

