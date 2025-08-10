#include <webbind/ConstantSourceOptions.h>

DEFINE_EMLITE_TYPE(ConstantSourceOptions, em_Val);


float ConstantSourceOptions_offset(const ConstantSourceOptions *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("offset")));
}


void ConstantSourceOptions_set_offset(ConstantSourceOptions* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("offset"), em_Val_from(value));
}


ConstantSourceOptions ConstantSourceOptions_new() {
    em_Val obj = em_Val_object();
    return ConstantSourceOptions_from_val(&obj);
}

