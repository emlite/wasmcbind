#include <webbind/XRCylinderLayerInit.h>

#include <webbind/XRRigidTransform.h>

DEFINE_EMLITE_TYPE(XRCylinderLayerInit, XRLayerInit);


XRTextureType XRCylinderLayerInit_textureType(const XRCylinderLayerInit *self) {
    return em_Val_as(XRTextureType, em_Val_get(XRLayerInit_as_val(self->inner), em_Val_from("textureType")));
}


void XRCylinderLayerInit_set_textureType(XRCylinderLayerInit* self, XRTextureType * value) {
    em_Val_set(XRLayerInit_as_val(self->inner), em_Val_from("textureType"), em_Val_from(value));
}


XRRigidTransform XRCylinderLayerInit_transform(const XRCylinderLayerInit *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(XRLayerInit_as_val(self->inner), em_Val_from("transform")));
}


void XRCylinderLayerInit_set_transform(XRCylinderLayerInit* self, XRRigidTransform * value) {
    em_Val_set(XRLayerInit_as_val(self->inner), em_Val_from("transform"), em_Val_from(value));
}


float XRCylinderLayerInit_radius(const XRCylinderLayerInit *self) {
    return em_Val_as(float, em_Val_get(XRLayerInit_as_val(self->inner), em_Val_from("radius")));
}


void XRCylinderLayerInit_set_radius(XRCylinderLayerInit* self, float value) {
    em_Val_set(XRLayerInit_as_val(self->inner), em_Val_from("radius"), em_Val_from(value));
}


float XRCylinderLayerInit_centralAngle(const XRCylinderLayerInit *self) {
    return em_Val_as(float, em_Val_get(XRLayerInit_as_val(self->inner), em_Val_from("centralAngle")));
}


void XRCylinderLayerInit_set_centralAngle(XRCylinderLayerInit* self, float value) {
    em_Val_set(XRLayerInit_as_val(self->inner), em_Val_from("centralAngle"), em_Val_from(value));
}


float XRCylinderLayerInit_aspectRatio(const XRCylinderLayerInit *self) {
    return em_Val_as(float, em_Val_get(XRLayerInit_as_val(self->inner), em_Val_from("aspectRatio")));
}


void XRCylinderLayerInit_set_aspectRatio(XRCylinderLayerInit* self, float value) {
    em_Val_set(XRLayerInit_as_val(self->inner), em_Val_from("aspectRatio"), em_Val_from(value));
}


XRCylinderLayerInit XRCylinderLayerInit_new() {
    em_Val obj = em_Val_object();
    return XRCylinderLayerInit_from_val(&obj);
}

