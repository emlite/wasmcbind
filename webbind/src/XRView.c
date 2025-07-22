#include <webbind/XRView.h>
#include <webbind/XRCamera.h>
#include <webbind/XRRigidTransform.h>


DEFINE_EMLITE_TYPE(XRView, em_Val);


XREye XRView_eye(const XRView *self) {
    return em_Val_as(XREye, em_Val_get(em_Val_as_val(self->inner), "eye"));
}


double XRView_recommendedViewportScale(const XRView *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "recommendedViewportScale"));
}


jb_Undefined XRView_requestViewportScale(XRView* self , double scale) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "requestViewportScale", em_Val_from(scale)));
}


XRCamera XRView_camera(const XRView *self) {
    return em_Val_as(XRCamera, em_Val_get(em_Val_as_val(self->inner), "camera"));
}


bool XRView_isFirstPersonObserver(const XRView *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "isFirstPersonObserver"));
}


jb_Float32Array XRView_projectionMatrix(const XRView *self) {
    return em_Val_as(jb_Float32Array, em_Val_get(em_Val_as_val(self->inner), "projectionMatrix"));
}


XRRigidTransform XRView_transform(const XRView *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(em_Val_as_val(self->inner), "transform"));
}

