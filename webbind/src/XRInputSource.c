#include <webbind/XRInputSource.h>
#include <webbind/XRSpace.h>
#include <webbind/Gamepad.h>
#include <webbind/XRHand.h>


DEFINE_EMLITE_TYPE(XRInputSource, em_Val);


XRHandedness XRInputSource_handedness(const XRInputSource *self) {
    return em_Val_as(XRHandedness, em_Val_get(em_Val_as_val(self->inner), em_Val_from("handedness")));
}


XRTargetRayMode XRInputSource_targetRayMode(const XRInputSource *self) {
    return em_Val_as(XRTargetRayMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("targetRayMode")));
}


XRSpace XRInputSource_targetRaySpace(const XRInputSource *self) {
    return em_Val_as(XRSpace, em_Val_get(em_Val_as_val(self->inner), em_Val_from("targetRaySpace")));
}


XRSpace XRInputSource_gripSpace(const XRInputSource *self) {
    return em_Val_as(XRSpace, em_Val_get(em_Val_as_val(self->inner), em_Val_from("gripSpace")));
}


jb_Array XRInputSource_profiles(const XRInputSource *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("profiles")));
}


bool XRInputSource_skipRendering(const XRInputSource *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("skipRendering")));
}


Gamepad XRInputSource_gamepad(const XRInputSource *self) {
    return em_Val_as(Gamepad, em_Val_get(em_Val_as_val(self->inner), em_Val_from("gamepad")));
}


XRHand XRInputSource_hand(const XRInputSource *self) {
    return em_Val_as(XRHand, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hand")));
}

