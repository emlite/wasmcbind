#include <webcbind/XRRenderState.h>

#include <webcbind/XRWebGLLayer.h>
#include <webcbind/XRLayer.h>

DEFINE_EMLITE_TYPE(XRRenderState, em_Val);


double XRRenderState_depthNear(const XRRenderState *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("depthNear")));
}


double XRRenderState_depthFar(const XRRenderState *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("depthFar")));
}


bool XRRenderState_passthroughFullyObscured(const XRRenderState *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("passthroughFullyObscured")));
}


double XRRenderState_inlineVerticalFieldOfView(const XRRenderState *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("inlineVerticalFieldOfView")));
}


XRWebGLLayer XRRenderState_baseLayer(const XRRenderState *self) {
    return em_Val_as(XRWebGLLayer, em_Val_get(em_Val_as_val(self->inner), em_Val_from("baseLayer")));
}


jb_Array XRRenderState_layers(const XRRenderState *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("layers")));
}

