#include <webcbind/XRRenderStateInit.h>

#include <webcbind/XRWebGLLayer.h>
#include <webcbind/XRLayer.h>

DEFINE_EMLITE_TYPE(XRRenderStateInit, em_Val);


double XRRenderStateInit_depthNear(const XRRenderStateInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("depthNear")));
}


void XRRenderStateInit_set_depthNear(XRRenderStateInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("depthNear"), em_Val_from(value));
}


double XRRenderStateInit_depthFar(const XRRenderStateInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("depthFar")));
}


void XRRenderStateInit_set_depthFar(XRRenderStateInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("depthFar"), em_Val_from(value));
}


bool XRRenderStateInit_passthroughFullyObscured(const XRRenderStateInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("passthroughFullyObscured")));
}


void XRRenderStateInit_set_passthroughFullyObscured(XRRenderStateInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("passthroughFullyObscured"), em_Val_from(value));
}


double XRRenderStateInit_inlineVerticalFieldOfView(const XRRenderStateInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("inlineVerticalFieldOfView")));
}


void XRRenderStateInit_set_inlineVerticalFieldOfView(XRRenderStateInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("inlineVerticalFieldOfView"), em_Val_from(value));
}


XRWebGLLayer XRRenderStateInit_baseLayer(const XRRenderStateInit *self) {
    return em_Val_as(XRWebGLLayer, em_Val_get(em_Val_as_val(self->inner), em_Val_from("baseLayer")));
}


void XRRenderStateInit_set_baseLayer(XRRenderStateInit* self, XRWebGLLayer * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("baseLayer"), em_Val_from(value));
}


jb_Array XRRenderStateInit_layers(const XRRenderStateInit *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("layers")));
}


void XRRenderStateInit_set_layers(XRRenderStateInit* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("layers"), em_Val_from(value));
}


XRRenderStateInit XRRenderStateInit_new() {
    em_Val obj = em_Val_object();
    return XRRenderStateInit_from_val(&obj);
}

