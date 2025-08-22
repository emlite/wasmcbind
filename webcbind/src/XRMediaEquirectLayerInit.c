#include <webcbind/XRMediaEquirectLayerInit.h>

#include <webcbind/XRRigidTransform.h>

DEFINE_EMLITE_TYPE(XRMediaEquirectLayerInit, XRMediaLayerInit);


XRRigidTransform XRMediaEquirectLayerInit_transform(const XRMediaEquirectLayerInit *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(XRMediaLayerInit_as_val(self->inner), em_Val_from("transform")));
}


void XRMediaEquirectLayerInit_set_transform(XRMediaEquirectLayerInit* self, XRRigidTransform * value) {
    em_Val_set(XRMediaLayerInit_as_val(self->inner), em_Val_from("transform"), em_Val_from(value));
}


float XRMediaEquirectLayerInit_radius(const XRMediaEquirectLayerInit *self) {
    return em_Val_as(float, em_Val_get(XRMediaLayerInit_as_val(self->inner), em_Val_from("radius")));
}


void XRMediaEquirectLayerInit_set_radius(XRMediaEquirectLayerInit* self, float value) {
    em_Val_set(XRMediaLayerInit_as_val(self->inner), em_Val_from("radius"), em_Val_from(value));
}


float XRMediaEquirectLayerInit_centralHorizontalAngle(const XRMediaEquirectLayerInit *self) {
    return em_Val_as(float, em_Val_get(XRMediaLayerInit_as_val(self->inner), em_Val_from("centralHorizontalAngle")));
}


void XRMediaEquirectLayerInit_set_centralHorizontalAngle(XRMediaEquirectLayerInit* self, float value) {
    em_Val_set(XRMediaLayerInit_as_val(self->inner), em_Val_from("centralHorizontalAngle"), em_Val_from(value));
}


float XRMediaEquirectLayerInit_upperVerticalAngle(const XRMediaEquirectLayerInit *self) {
    return em_Val_as(float, em_Val_get(XRMediaLayerInit_as_val(self->inner), em_Val_from("upperVerticalAngle")));
}


void XRMediaEquirectLayerInit_set_upperVerticalAngle(XRMediaEquirectLayerInit* self, float value) {
    em_Val_set(XRMediaLayerInit_as_val(self->inner), em_Val_from("upperVerticalAngle"), em_Val_from(value));
}


float XRMediaEquirectLayerInit_lowerVerticalAngle(const XRMediaEquirectLayerInit *self) {
    return em_Val_as(float, em_Val_get(XRMediaLayerInit_as_val(self->inner), em_Val_from("lowerVerticalAngle")));
}


void XRMediaEquirectLayerInit_set_lowerVerticalAngle(XRMediaEquirectLayerInit* self, float value) {
    em_Val_set(XRMediaLayerInit_as_val(self->inner), em_Val_from("lowerVerticalAngle"), em_Val_from(value));
}


XRMediaEquirectLayerInit XRMediaEquirectLayerInit_new() {
    em_Val obj = em_Val_object();
    return XRMediaEquirectLayerInit_from_val(&obj);
}

