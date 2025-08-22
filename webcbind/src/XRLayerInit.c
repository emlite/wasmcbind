#include <webcbind/XRLayerInit.h>

#include <webcbind/XRSpace.h>

DEFINE_EMLITE_TYPE(XRLayerInit, em_Val);


XRSpace XRLayerInit_space(const XRLayerInit *self) {
    return em_Val_as(XRSpace, em_Val_get(em_Val_as_val(self->inner), em_Val_from("space")));
}


void XRLayerInit_set_space(XRLayerInit* self, XRSpace * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("space"), em_Val_from(value));
}


jb_Any XRLayerInit_colorFormat(const XRLayerInit *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("colorFormat")));
}


void XRLayerInit_set_colorFormat(XRLayerInit* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("colorFormat"), em_Val_from(value));
}


jb_Any XRLayerInit_depthFormat(const XRLayerInit *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("depthFormat")));
}


void XRLayerInit_set_depthFormat(XRLayerInit* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("depthFormat"), em_Val_from(value));
}


unsigned long XRLayerInit_mipLevels(const XRLayerInit *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mipLevels")));
}


void XRLayerInit_set_mipLevels(XRLayerInit* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mipLevels"), em_Val_from(value));
}


unsigned long XRLayerInit_viewPixelWidth(const XRLayerInit *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("viewPixelWidth")));
}


void XRLayerInit_set_viewPixelWidth(XRLayerInit* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("viewPixelWidth"), em_Val_from(value));
}


unsigned long XRLayerInit_viewPixelHeight(const XRLayerInit *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("viewPixelHeight")));
}


void XRLayerInit_set_viewPixelHeight(XRLayerInit* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("viewPixelHeight"), em_Val_from(value));
}


XRLayerLayout XRLayerInit_layout(const XRLayerInit *self) {
    return em_Val_as(XRLayerLayout, em_Val_get(em_Val_as_val(self->inner), em_Val_from("layout")));
}


void XRLayerInit_set_layout(XRLayerInit* self, XRLayerLayout * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("layout"), em_Val_from(value));
}


bool XRLayerInit_isStatic(const XRLayerInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("isStatic")));
}


void XRLayerInit_set_isStatic(XRLayerInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("isStatic"), em_Val_from(value));
}


bool XRLayerInit_clearOnAccess(const XRLayerInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("clearOnAccess")));
}


void XRLayerInit_set_clearOnAccess(XRLayerInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("clearOnAccess"), em_Val_from(value));
}


XRLayerInit XRLayerInit_new() {
    em_Val obj = em_Val_object();
    return XRLayerInit_from_val(&obj);
}

