#include <webbind/GamepadTouch.h>

#include <webbind/DOMPointReadOnly.h>
#include <webbind/DOMRectReadOnly.h>

DEFINE_EMLITE_TYPE(GamepadTouch, em_Val);


unsigned long GamepadTouch_touchId(const GamepadTouch *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("touchId")));
}


void GamepadTouch_set_touchId(GamepadTouch* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("touchId"), em_Val_from(value));
}


unsigned char GamepadTouch_surfaceId(const GamepadTouch *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), em_Val_from("surfaceId")));
}


void GamepadTouch_set_surfaceId(GamepadTouch* self, unsigned char value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("surfaceId"), em_Val_from(value));
}


DOMPointReadOnly GamepadTouch_position(const GamepadTouch *self) {
    return em_Val_as(DOMPointReadOnly, em_Val_get(em_Val_as_val(self->inner), em_Val_from("position")));
}


void GamepadTouch_set_position(GamepadTouch* self, DOMPointReadOnly * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("position"), em_Val_from(value));
}


DOMRectReadOnly GamepadTouch_surfaceDimensions(const GamepadTouch *self) {
    return em_Val_as(DOMRectReadOnly, em_Val_get(em_Val_as_val(self->inner), em_Val_from("surfaceDimensions")));
}


void GamepadTouch_set_surfaceDimensions(GamepadTouch* self, DOMRectReadOnly * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("surfaceDimensions"), em_Val_from(value));
}


GamepadTouch GamepadTouch_new() {
    em_Val obj = em_Val_object();
    return GamepadTouch_from_val(&obj);
}

