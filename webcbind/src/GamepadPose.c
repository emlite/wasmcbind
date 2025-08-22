#include <webcbind/GamepadPose.h>

DEFINE_EMLITE_TYPE(GamepadPose, em_Val);


bool GamepadPose_hasOrientation(const GamepadPose *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hasOrientation")));
}


bool GamepadPose_hasPosition(const GamepadPose *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hasPosition")));
}


jb_Float32Array GamepadPose_position(const GamepadPose *self) {
    return em_Val_as(jb_Float32Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("position")));
}


jb_Float32Array GamepadPose_linearVelocity(const GamepadPose *self) {
    return em_Val_as(jb_Float32Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("linearVelocity")));
}


jb_Float32Array GamepadPose_linearAcceleration(const GamepadPose *self) {
    return em_Val_as(jb_Float32Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("linearAcceleration")));
}


jb_Float32Array GamepadPose_orientation(const GamepadPose *self) {
    return em_Val_as(jb_Float32Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("orientation")));
}


jb_Float32Array GamepadPose_angularVelocity(const GamepadPose *self) {
    return em_Val_as(jb_Float32Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("angularVelocity")));
}


jb_Float32Array GamepadPose_angularAcceleration(const GamepadPose *self) {
    return em_Val_as(jb_Float32Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("angularAcceleration")));
}

