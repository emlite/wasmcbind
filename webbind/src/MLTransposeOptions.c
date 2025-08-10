#include <webbind/MLTransposeOptions.h>

DEFINE_EMLITE_TYPE(MLTransposeOptions, MLOperatorOptions);


jb_Array MLTransposeOptions_permutation(const MLTransposeOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("permutation")));
}


void MLTransposeOptions_set_permutation(MLTransposeOptions* self, jb_Array * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("permutation"), em_Val_from(value));
}


MLTransposeOptions MLTransposeOptions_new() {
    em_Val obj = em_Val_object();
    return MLTransposeOptions_from_val(&obj);
}

