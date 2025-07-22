#include <webbind/XRInputSource.h>
#include <webbind/XRSpace.h>
#include <webbind/Gamepad.h>
#include <webbind/XRHand.h>


DEFINE_EMLITE_TYPE(XRInputSource, em_Val);


XRHandedness XRInputSource_handedness(const XRInputSource *self) {
    return em_Val_as(XRHandedness, em_Val_get(em_Val_as_val(self->inner), "handedness"));
}


XRTargetRayMode XRInputSource_targetRayMode(const XRInputSource *self) {
    return em_Val_as(XRTargetRayMode, em_Val_get(em_Val_as_val(self->inner), "targetRayMode"));
}


XRSpace XRInputSource_targetRaySpace(const XRInputSource *self) {
    return em_Val_as(XRSpace, em_Val_get(em_Val_as_val(self->inner), "targetRaySpace"));
}


XRSpace XRInputSource_gripSpace(const XRInputSource *self) {
    return em_Val_as(XRSpace, em_Val_get(em_Val_as_val(self->inner), "gripSpace"));
}


jb_FrozenArray XRInputSource_profiles(const XRInputSource *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "profiles"));
}


bool XRInputSource_skipRendering(const XRInputSource *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "skipRendering"));
}


Gamepad XRInputSource_gamepad(const XRInputSource *self) {
    return em_Val_as(Gamepad, em_Val_get(em_Val_as_val(self->inner), "gamepad"));
}


XRHand XRInputSource_hand(const XRInputSource *self) {
    return em_Val_as(XRHand, em_Val_get(em_Val_as_val(self->inner), "hand"));
}

