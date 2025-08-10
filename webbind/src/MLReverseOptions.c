#include <webbind/MLReverseOptions.h>

DEFINE_EMLITE_TYPE(MLReverseOptions, MLOperatorOptions);


jb_Array MLReverseOptions_axes(const MLReverseOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("axes")));
}


void MLReverseOptions_set_axes(MLReverseOptions* self, jb_Array * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("axes"), em_Val_from(value));
}


MLReverseOptions MLReverseOptions_new() {
    em_Val obj = em_Val_object();
    return MLReverseOptions_from_val(&obj);
}

