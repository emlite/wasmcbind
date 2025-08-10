#include <webbind/MouseEventInit.h>

#include <webbind/EventTarget.h>

DEFINE_EMLITE_TYPE(MouseEventInit, EventModifierInit);


long MouseEventInit_screenX(const MouseEventInit *self) {
    return em_Val_as(long, em_Val_get(EventModifierInit_as_val(self->inner), em_Val_from("screenX")));
}


void MouseEventInit_set_screenX(MouseEventInit* self, long value) {
    em_Val_set(EventModifierInit_as_val(self->inner), em_Val_from("screenX"), em_Val_from(value));
}


long MouseEventInit_screenY(const MouseEventInit *self) {
    return em_Val_as(long, em_Val_get(EventModifierInit_as_val(self->inner), em_Val_from("screenY")));
}


void MouseEventInit_set_screenY(MouseEventInit* self, long value) {
    em_Val_set(EventModifierInit_as_val(self->inner), em_Val_from("screenY"), em_Val_from(value));
}


long MouseEventInit_clientX(const MouseEventInit *self) {
    return em_Val_as(long, em_Val_get(EventModifierInit_as_val(self->inner), em_Val_from("clientX")));
}


void MouseEventInit_set_clientX(MouseEventInit* self, long value) {
    em_Val_set(EventModifierInit_as_val(self->inner), em_Val_from("clientX"), em_Val_from(value));
}


long MouseEventInit_clientY(const MouseEventInit *self) {
    return em_Val_as(long, em_Val_get(EventModifierInit_as_val(self->inner), em_Val_from("clientY")));
}


void MouseEventInit_set_clientY(MouseEventInit* self, long value) {
    em_Val_set(EventModifierInit_as_val(self->inner), em_Val_from("clientY"), em_Val_from(value));
}


short MouseEventInit_button(const MouseEventInit *self) {
    return em_Val_as(short, em_Val_get(EventModifierInit_as_val(self->inner), em_Val_from("button")));
}


void MouseEventInit_set_button(MouseEventInit* self, short value) {
    em_Val_set(EventModifierInit_as_val(self->inner), em_Val_from("button"), em_Val_from(value));
}


unsigned short MouseEventInit_buttons(const MouseEventInit *self) {
    return em_Val_as(unsigned short, em_Val_get(EventModifierInit_as_val(self->inner), em_Val_from("buttons")));
}


void MouseEventInit_set_buttons(MouseEventInit* self, unsigned short value) {
    em_Val_set(EventModifierInit_as_val(self->inner), em_Val_from("buttons"), em_Val_from(value));
}


EventTarget MouseEventInit_relatedTarget(const MouseEventInit *self) {
    return em_Val_as(EventTarget, em_Val_get(EventModifierInit_as_val(self->inner), em_Val_from("relatedTarget")));
}


void MouseEventInit_set_relatedTarget(MouseEventInit* self, EventTarget * value) {
    em_Val_set(EventModifierInit_as_val(self->inner), em_Val_from("relatedTarget"), em_Val_from(value));
}


MouseEventInit MouseEventInit_new() {
    em_Val obj = em_Val_object();
    return MouseEventInit_from_val(&obj);
}

