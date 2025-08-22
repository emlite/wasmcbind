#include <webcbind/XRMediaCylinderLayerInit.h>

#include <webcbind/XRRigidTransform.h>

DEFINE_EMLITE_TYPE(XRMediaCylinderLayerInit, XRMediaLayerInit);


XRRigidTransform XRMediaCylinderLayerInit_transform(const XRMediaCylinderLayerInit *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(XRMediaLayerInit_as_val(self->inner), em_Val_from("transform")));
}


void XRMediaCylinderLayerInit_set_transform(XRMediaCylinderLayerInit* self, XRRigidTransform * value) {
    em_Val_set(XRMediaLayerInit_as_val(self->inner), em_Val_from("transform"), em_Val_from(value));
}


float XRMediaCylinderLayerInit_radius(const XRMediaCylinderLayerInit *self) {
    return em_Val_as(float, em_Val_get(XRMediaLayerInit_as_val(self->inner), em_Val_from("radius")));
}


void XRMediaCylinderLayerInit_set_radius(XRMediaCylinderLayerInit* self, float value) {
    em_Val_set(XRMediaLayerInit_as_val(self->inner), em_Val_from("radius"), em_Val_from(value));
}


float XRMediaCylinderLayerInit_centralAngle(const XRMediaCylinderLayerInit *self) {
    return em_Val_as(float, em_Val_get(XRMediaLayerInit_as_val(self->inner), em_Val_from("centralAngle")));
}


void XRMediaCylinderLayerInit_set_centralAngle(XRMediaCylinderLayerInit* self, float value) {
    em_Val_set(XRMediaLayerInit_as_val(self->inner), em_Val_from("centralAngle"), em_Val_from(value));
}


float XRMediaCylinderLayerInit_aspectRatio(const XRMediaCylinderLayerInit *self) {
    return em_Val_as(float, em_Val_get(XRMediaLayerInit_as_val(self->inner), em_Val_from("aspectRatio")));
}


void XRMediaCylinderLayerInit_set_aspectRatio(XRMediaCylinderLayerInit* self, float value) {
    em_Val_set(XRMediaLayerInit_as_val(self->inner), em_Val_from("aspectRatio"), em_Val_from(value));
}


XRMediaCylinderLayerInit XRMediaCylinderLayerInit_new() {
    em_Val obj = em_Val_object();
    return XRMediaCylinderLayerInit_from_val(&obj);
}

