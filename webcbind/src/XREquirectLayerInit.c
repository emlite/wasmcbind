#include <webcbind/XREquirectLayerInit.h>

#include <webcbind/XRRigidTransform.h>

DEFINE_EMLITE_TYPE(XREquirectLayerInit, XRLayerInit);


XRTextureType XREquirectLayerInit_textureType(const XREquirectLayerInit *self) {
    return em_Val_as(XRTextureType, em_Val_get(XRLayerInit_as_val(self->inner), em_Val_from("textureType")));
}


void XREquirectLayerInit_set_textureType(XREquirectLayerInit* self, XRTextureType * value) {
    em_Val_set(XRLayerInit_as_val(self->inner), em_Val_from("textureType"), em_Val_from(value));
}


XRRigidTransform XREquirectLayerInit_transform(const XREquirectLayerInit *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(XRLayerInit_as_val(self->inner), em_Val_from("transform")));
}


void XREquirectLayerInit_set_transform(XREquirectLayerInit* self, XRRigidTransform * value) {
    em_Val_set(XRLayerInit_as_val(self->inner), em_Val_from("transform"), em_Val_from(value));
}


float XREquirectLayerInit_radius(const XREquirectLayerInit *self) {
    return em_Val_as(float, em_Val_get(XRLayerInit_as_val(self->inner), em_Val_from("radius")));
}


void XREquirectLayerInit_set_radius(XREquirectLayerInit* self, float value) {
    em_Val_set(XRLayerInit_as_val(self->inner), em_Val_from("radius"), em_Val_from(value));
}


float XREquirectLayerInit_centralHorizontalAngle(const XREquirectLayerInit *self) {
    return em_Val_as(float, em_Val_get(XRLayerInit_as_val(self->inner), em_Val_from("centralHorizontalAngle")));
}


void XREquirectLayerInit_set_centralHorizontalAngle(XREquirectLayerInit* self, float value) {
    em_Val_set(XRLayerInit_as_val(self->inner), em_Val_from("centralHorizontalAngle"), em_Val_from(value));
}


float XREquirectLayerInit_upperVerticalAngle(const XREquirectLayerInit *self) {
    return em_Val_as(float, em_Val_get(XRLayerInit_as_val(self->inner), em_Val_from("upperVerticalAngle")));
}


void XREquirectLayerInit_set_upperVerticalAngle(XREquirectLayerInit* self, float value) {
    em_Val_set(XRLayerInit_as_val(self->inner), em_Val_from("upperVerticalAngle"), em_Val_from(value));
}


float XREquirectLayerInit_lowerVerticalAngle(const XREquirectLayerInit *self) {
    return em_Val_as(float, em_Val_get(XRLayerInit_as_val(self->inner), em_Val_from("lowerVerticalAngle")));
}


void XREquirectLayerInit_set_lowerVerticalAngle(XREquirectLayerInit* self, float value) {
    em_Val_set(XRLayerInit_as_val(self->inner), em_Val_from("lowerVerticalAngle"), em_Val_from(value));
}


XREquirectLayerInit XREquirectLayerInit_new() {
    em_Val obj = em_Val_object();
    return XREquirectLayerInit_from_val(&obj);
}

