#include <webbind/KeyboardEventInit.h>

DEFINE_EMLITE_TYPE(KeyboardEventInit, em_Val);


unsigned long KeyboardEventInit_charCode(const KeyboardEventInit *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("charCode")));
}


void KeyboardEventInit_set_charCode(KeyboardEventInit* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("charCode"), em_Val_from(value));
}


unsigned long KeyboardEventInit_keyCode(const KeyboardEventInit *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("keyCode")));
}


void KeyboardEventInit_set_keyCode(KeyboardEventInit* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("keyCode"), em_Val_from(value));
}


KeyboardEventInit KeyboardEventInit_new() {
    em_Val obj = em_Val_object();
    return KeyboardEventInit_from_val(&obj);
}

