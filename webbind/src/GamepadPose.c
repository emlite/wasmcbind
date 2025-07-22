#include <webbind/GamepadPose.h>


DEFINE_EMLITE_TYPE(GamepadPose, em_Val);


bool GamepadPose_hasOrientation(const GamepadPose *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "hasOrientation"));
}


bool GamepadPose_hasPosition(const GamepadPose *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "hasPosition"));
}


jb_Float32Array GamepadPose_position(const GamepadPose *self) {
    return em_Val_as(jb_Float32Array, em_Val_get(em_Val_as_val(self->inner), "position"));
}


jb_Float32Array GamepadPose_linearVelocity(const GamepadPose *self) {
    return em_Val_as(jb_Float32Array, em_Val_get(em_Val_as_val(self->inner), "linearVelocity"));
}


jb_Float32Array GamepadPose_linearAcceleration(const GamepadPose *self) {
    return em_Val_as(jb_Float32Array, em_Val_get(em_Val_as_val(self->inner), "linearAcceleration"));
}


jb_Float32Array GamepadPose_orientation(const GamepadPose *self) {
    return em_Val_as(jb_Float32Array, em_Val_get(em_Val_as_val(self->inner), "orientation"));
}


jb_Float32Array GamepadPose_angularVelocity(const GamepadPose *self) {
    return em_Val_as(jb_Float32Array, em_Val_get(em_Val_as_val(self->inner), "angularVelocity"));
}


jb_Float32Array GamepadPose_angularAcceleration(const GamepadPose *self) {
    return em_Val_as(jb_Float32Array, em_Val_get(em_Val_as_val(self->inner), "angularAcceleration"));
}

