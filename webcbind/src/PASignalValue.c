#include <webcbind/PASignalValue.h>

DEFINE_EMLITE_TYPE(PASignalValue, em_Val);


jb_String PASignalValue_baseValue(const PASignalValue *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("baseValue")));
}


void PASignalValue_set_baseValue(PASignalValue* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("baseValue"), em_Val_from(value));
}


double PASignalValue_scale(const PASignalValue *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("scale")));
}


void PASignalValue_set_scale(PASignalValue* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("scale"), em_Val_from(value));
}


jb_Any PASignalValue_offset(const PASignalValue *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("offset")));
}


void PASignalValue_set_offset(PASignalValue* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("offset"), em_Val_from(value));
}


PASignalValue PASignalValue_new() {
    em_Val obj = em_Val_object();
    return PASignalValue_from_val(&obj);
}

