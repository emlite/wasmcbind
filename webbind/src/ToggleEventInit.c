#include <webbind/ToggleEventInit.h>

DEFINE_EMLITE_TYPE(ToggleEventInit, EventInit);


jb_String ToggleEventInit_oldState(const ToggleEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("oldState")));
}


void ToggleEventInit_set_oldState(ToggleEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("oldState"), em_Val_from(value));
}


jb_String ToggleEventInit_newState(const ToggleEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("newState")));
}


void ToggleEventInit_set_newState(ToggleEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("newState"), em_Val_from(value));
}


ToggleEventInit ToggleEventInit_new() {
    em_Val obj = em_Val_object();
    return ToggleEventInit_from_val(&obj);
}

