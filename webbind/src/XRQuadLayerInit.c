#include <webbind/XRQuadLayerInit.h>

#include <webbind/XRRigidTransform.h>

DEFINE_EMLITE_TYPE(XRQuadLayerInit, XRLayerInit);


XRTextureType XRQuadLayerInit_textureType(const XRQuadLayerInit *self) {
    return em_Val_as(XRTextureType, em_Val_get(XRLayerInit_as_val(self->inner), em_Val_from("textureType")));
}


void XRQuadLayerInit_set_textureType(XRQuadLayerInit* self, XRTextureType * value) {
    em_Val_set(XRLayerInit_as_val(self->inner), em_Val_from("textureType"), em_Val_from(value));
}


XRRigidTransform XRQuadLayerInit_transform(const XRQuadLayerInit *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(XRLayerInit_as_val(self->inner), em_Val_from("transform")));
}


void XRQuadLayerInit_set_transform(XRQuadLayerInit* self, XRRigidTransform * value) {
    em_Val_set(XRLayerInit_as_val(self->inner), em_Val_from("transform"), em_Val_from(value));
}


float XRQuadLayerInit_width(const XRQuadLayerInit *self) {
    return em_Val_as(float, em_Val_get(XRLayerInit_as_val(self->inner), em_Val_from("width")));
}


void XRQuadLayerInit_set_width(XRQuadLayerInit* self, float value) {
    em_Val_set(XRLayerInit_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


float XRQuadLayerInit_height(const XRQuadLayerInit *self) {
    return em_Val_as(float, em_Val_get(XRLayerInit_as_val(self->inner), em_Val_from("height")));
}


void XRQuadLayerInit_set_height(XRQuadLayerInit* self, float value) {
    em_Val_set(XRLayerInit_as_val(self->inner), em_Val_from("height"), em_Val_from(value));
}


XRQuadLayerInit XRQuadLayerInit_new() {
    em_Val obj = em_Val_object();
    return XRQuadLayerInit_from_val(&obj);
}

