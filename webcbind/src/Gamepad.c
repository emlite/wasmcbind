#include <webcbind/Gamepad.h>

#include <webcbind/GamepadButton.h>
#include <webcbind/GamepadTouch.h>
#include <webcbind/GamepadHapticActuator.h>
#include <webcbind/GamepadPose.h>

DEFINE_EMLITE_TYPE(Gamepad, em_Val);


jb_String Gamepad_id(const Gamepad *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
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


jb_Array Gamepad_axes(const Gamepad *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("axes")));
}


jb_Array Gamepad_buttons(const Gamepad *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("buttons")));
}


jb_Array Gamepad_touches(const Gamepad *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("touches")));
}


GamepadHapticActuator Gamepad_vibrationActuator(const Gamepad *self) {
    return em_Val_as(GamepadHapticActuator, em_Val_get(em_Val_as_val(self->inner), em_Val_from("vibrationActuator")));
}


GamepadHand Gamepad_hand(const Gamepad *self) {
    return em_Val_as(GamepadHand, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hand")));
}


jb_Array Gamepad_hapticActuators(const Gamepad *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hapticActuators")));
}


GamepadPose Gamepad_pose(const Gamepad *self) {
    return em_Val_as(GamepadPose, em_Val_get(em_Val_as_val(self->inner), em_Val_from("pose")));
}

