#include <webcbind/XRProjectionLayerInit.h>

DEFINE_EMLITE_TYPE(XRProjectionLayerInit, em_Val);


XRTextureType XRProjectionLayerInit_textureType(const XRProjectionLayerInit *self) {
    return em_Val_as(XRTextureType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("textureType")));
}


void XRProjectionLayerInit_set_textureType(XRProjectionLayerInit* self, XRTextureType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("textureType"), em_Val_from(value));
}


jb_Any XRProjectionLayerInit_colorFormat(const XRProjectionLayerInit *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("colorFormat")));
}


void XRProjectionLayerInit_set_colorFormat(XRProjectionLayerInit* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("colorFormat"), em_Val_from(value));
}


jb_Any XRProjectionLayerInit_depthFormat(const XRProjectionLayerInit *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("depthFormat")));
}


void XRProjectionLayerInit_set_depthFormat(XRProjectionLayerInit* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("depthFormat"), em_Val_from(value));
}


double XRProjectionLayerInit_scaleFactor(const XRProjectionLayerInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("scaleFactor")));
}


void XRProjectionLayerInit_set_scaleFactor(XRProjectionLayerInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("scaleFactor"), em_Val_from(value));
}


bool XRProjectionLayerInit_clearOnAccess(const XRProjectionLayerInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("clearOnAccess")));
}


void XRProjectionLayerInit_set_clearOnAccess(XRProjectionLayerInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("clearOnAccess"), em_Val_from(value));
}


XRProjectionLayerInit XRProjectionLayerInit_new() {
    em_Val obj = em_Val_object();
    return XRProjectionLayerInit_from_val(&obj);
}

