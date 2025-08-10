#include <webbind/InputEventInit.h>

DEFINE_EMLITE_TYPE(InputEventInit, UIEventInit);


jb_String InputEventInit_data(const InputEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(UIEventInit_as_val(self->inner), em_Val_from("data")));
}


void InputEventInit_set_data(InputEventInit* self, jb_String * value) {
    em_Val_set(UIEventInit_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


bool InputEventInit_isComposing(const InputEventInit *self) {
    return em_Val_as(bool, em_Val_get(UIEventInit_as_val(self->inner), em_Val_from("isComposing")));
}


void InputEventInit_set_isComposing(InputEventInit* self, bool value) {
    em_Val_set(UIEventInit_as_val(self->inner), em_Val_from("isComposing"), em_Val_from(value));
}


jb_String InputEventInit_inputType(const InputEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(UIEventInit_as_val(self->inner), em_Val_from("inputType")));
}


void InputEventInit_set_inputType(InputEventInit* self, jb_String * value) {
    em_Val_set(UIEventInit_as_val(self->inner), em_Val_from("inputType"), em_Val_from(value));
}


InputEventInit InputEventInit_new() {
    em_Val obj = em_Val_object();
    return InputEventInit_from_val(&obj);
}

