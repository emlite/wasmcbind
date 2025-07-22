#include <webbind/XRPose.h>
#include <webbind/XRRigidTransform.h>
#include <webbind/DOMPointReadOnly.h>


DEFINE_EMLITE_TYPE(XRPose, em_Val);


XRRigidTransform XRPose_transform(const XRPose *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(em_Val_as_val(self->inner), "transform"));
}


DOMPointReadOnly XRPose_linearVelocity(const XRPose *self) {
    return em_Val_as(DOMPointReadOnly, em_Val_get(em_Val_as_val(self->inner), "linearVelocity"));
}


DOMPointReadOnly XRPose_angularVelocity(const XRPose *self) {
    return em_Val_as(DOMPointReadOnly, em_Val_get(em_Val_as_val(self->inner), "angularVelocity"));
}


bool XRPose_emulatedPosition(const XRPose *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "emulatedPosition"));
}

