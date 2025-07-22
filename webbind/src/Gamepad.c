#include <webbind/Gamepad.h>
#include <webbind/GamepadButton.h>
#include <webbind/GamepadHapticActuator.h>
#include <webbind/GamepadPose.h>
#include <webbind/DOMRectReadOnly.h>
#include <webbind/DOMPointReadOnly.h>


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

DEFINE_EMLITE_TYPE(Gamepad, em_Val);


jb_DOMString Gamepad_id(const Gamepad *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


long Gamepad_index(const Gamepad *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("index")));
}


bool Gamepad_connected(const Gamepad *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("connected")));
}


jb_Any Gamepad_timestamp(const Gamepad *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timestamp")));
}


GamepadMappingType Gamepad_mapping(const Gamepad *self) {
    return em_Val_as(GamepadMappingType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mapping")));
}


jb_FrozenArray Gamepad_axes(const Gamepad *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), em_Val_from("axes")));
}


jb_FrozenArray Gamepad_buttons(const Gamepad *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), em_Val_from("buttons")));
}


jb_FrozenArray Gamepad_touches(const Gamepad *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), em_Val_from("touches")));
}


GamepadHapticActuator Gamepad_vibrationActuator(const Gamepad *self) {
    return em_Val_as(GamepadHapticActuator, em_Val_get(em_Val_as_val(self->inner), em_Val_from("vibrationActuator")));
}


GamepadHand Gamepad_hand(const Gamepad *self) {
    return em_Val_as(GamepadHand, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hand")));
}


jb_FrozenArray Gamepad_hapticActuators(const Gamepad *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hapticActuators")));
}


GamepadPose Gamepad_pose(const Gamepad *self) {
    return em_Val_as(GamepadPose, em_Val_get(em_Val_as_val(self->inner), em_Val_from("pose")));
}

