#include <webcbind/MLSliceOptions.h>

DEFINE_EMLITE_TYPE(MLSliceOptions, MLOperatorOptions);


jb_Array MLSliceOptions_strides(const MLSliceOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("strides")));
}


void MLSliceOptions_set_strides(MLSliceOptions* self, jb_Array * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("strides"), em_Val_from(value));
}


MLSliceOptions MLSliceOptions_new() {
    em_Val obj = em_Val_object();
    return MLSliceOptions_from_val(&obj);
}

