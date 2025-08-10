#include <webbind/FunctionParameter.h>

DEFINE_EMLITE_TYPE(FunctionParameter, em_Val);


jb_String FunctionParameter_name(const FunctionParameter *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void FunctionParameter_set_name(FunctionParameter* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_String FunctionParameter_type(const FunctionParameter *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void FunctionParameter_set_type(FunctionParameter* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_String FunctionParameter_defaultValue(const FunctionParameter *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("defaultValue")));
}


void FunctionParameter_set_defaultValue(FunctionParameter* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("defaultValue"), em_Val_from(value));
}


FunctionParameter FunctionParameter_new() {
    em_Val obj = em_Val_object();
    return FunctionParameter_from_val(&obj);
}

