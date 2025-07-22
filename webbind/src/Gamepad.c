#include <webbind/Gamepad.h>
#include <webbind/GamepadButton.h>
#include <webbind/GamepadHapticActuator.h>
#include <webbind/GamepadPose.h>
#include <webbind/DOMRectReadOnly.h>
#include <webbind/DOMPointReadOnly.h>


DEFINE_EMLITE_TYPE(GamepadTouch, em_Val);


unsigned long GamepadTouch_touchId(const GamepadTouch *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "touchId"));
}


void GamepadTouch_set_touchId(GamepadTouch* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "touchId", value);
}


unsigned char GamepadTouch_surfaceId(const GamepadTouch *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), "surfaceId"));
}


void GamepadTouch_set_surfaceId(GamepadTouch* self, unsigned char value) {
    em_Val_set(em_Val_as_val(self->inner), "surfaceId", value);
}


DOMPointReadOnly GamepadTouch_position(const GamepadTouch *self) {
    return em_Val_as(DOMPointReadOnly, em_Val_get(em_Val_as_val(self->inner), "position"));
}


void GamepadTouch_set_position(GamepadTouch* self, const DOMPointReadOnly* value) {
    em_Val_set(em_Val_as_val(self->inner), "position", value);
}


DOMRectReadOnly GamepadTouch_surfaceDimensions(const GamepadTouch *self) {
    return em_Val_as(DOMRectReadOnly, em_Val_get(em_Val_as_val(self->inner), "surfaceDimensions"));
}


void GamepadTouch_set_surfaceDimensions(GamepadTouch* self, const DOMRectReadOnly* value) {
    em_Val_set(em_Val_as_val(self->inner), "surfaceDimensions", value);
}

DEFINE_EMLITE_TYPE(Gamepad, em_Val);


jb_DOMString Gamepad_id(const Gamepad *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "id"));
}


long Gamepad_index(const Gamepad *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), "index"));
}


bool Gamepad_connected(const Gamepad *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "connected"));
}


jb_Any Gamepad_timestamp(const Gamepad *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "timestamp"));
}


GamepadMappingType Gamepad_mapping(const Gamepad *self) {
    return em_Val_as(GamepadMappingType, em_Val_get(em_Val_as_val(self->inner), "mapping"));
}


jb_FrozenArray Gamepad_axes(const Gamepad *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "axes"));
}


jb_FrozenArray Gamepad_buttons(const Gamepad *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "buttons"));
}


jb_FrozenArray Gamepad_touches(const Gamepad *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "touches"));
}


GamepadHapticActuator Gamepad_vibrationActuator(const Gamepad *self) {
    return em_Val_as(GamepadHapticActuator, em_Val_get(em_Val_as_val(self->inner), "vibrationActuator"));
}


GamepadHand Gamepad_hand(const Gamepad *self) {
    return em_Val_as(GamepadHand, em_Val_get(em_Val_as_val(self->inner), "hand"));
}


jb_FrozenArray Gamepad_hapticActuators(const Gamepad *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "hapticActuators"));
}


GamepadPose Gamepad_pose(const Gamepad *self) {
    return em_Val_as(GamepadPose, em_Val_get(em_Val_as_val(self->inner), "pose"));
}

