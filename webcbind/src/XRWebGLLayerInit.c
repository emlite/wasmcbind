#include <webcbind/XRWebGLLayerInit.h>

DEFINE_EMLITE_TYPE(XRWebGLLayerInit, em_Val);


bool XRWebGLLayerInit_antialias(const XRWebGLLayerInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("antialias")));
}


void XRWebGLLayerInit_set_antialias(XRWebGLLayerInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("antialias"), em_Val_from(value));
}


bool XRWebGLLayerInit_depth(const XRWebGLLayerInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("depth")));
}


void XRWebGLLayerInit_set_depth(XRWebGLLayerInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("depth"), em_Val_from(value));
}


bool XRWebGLLayerInit_stencil(const XRWebGLLayerInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("stencil")));
}


void XRWebGLLayerInit_set_stencil(XRWebGLLayerInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("stencil"), em_Val_from(value));
}


bool XRWebGLLayerInit_alpha(const XRWebGLLayerInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("alpha")));
}


void XRWebGLLayerInit_set_alpha(XRWebGLLayerInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("alpha"), em_Val_from(value));
}


bool XRWebGLLayerInit_ignoreDepthValues(const XRWebGLLayerInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ignoreDepthValues")));
}


void XRWebGLLayerInit_set_ignoreDepthValues(XRWebGLLayerInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ignoreDepthValues"), em_Val_from(value));
}


double XRWebGLLayerInit_framebufferScaleFactor(const XRWebGLLayerInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("framebufferScaleFactor")));
}


void XRWebGLLayerInit_set_framebufferScaleFactor(XRWebGLLayerInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("framebufferScaleFactor"), em_Val_from(value));
}


XRWebGLLayerInit XRWebGLLayerInit_new() {
    em_Val obj = em_Val_object();
    return XRWebGLLayerInit_from_val(&obj);
}

