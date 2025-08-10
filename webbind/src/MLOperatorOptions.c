#include <webbind/MLOperatorOptions.h>

DEFINE_EMLITE_TYPE(MLOperatorOptions, em_Val);


jb_String MLOperatorOptions_label(const MLOperatorOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void MLOperatorOptions_set_label(MLOperatorOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}


MLOperatorOptions MLOperatorOptions_new() {
    em_Val obj = em_Val_object();
    return MLOperatorOptions_from_val(&obj);
}

