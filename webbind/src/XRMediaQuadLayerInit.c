#include <webbind/XRMediaQuadLayerInit.h>

#include <webbind/XRRigidTransform.h>

DEFINE_EMLITE_TYPE(XRMediaQuadLayerInit, XRMediaLayerInit);


XRRigidTransform XRMediaQuadLayerInit_transform(const XRMediaQuadLayerInit *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(XRMediaLayerInit_as_val(self->inner), em_Val_from("transform")));
}


void XRMediaQuadLayerInit_set_transform(XRMediaQuadLayerInit* self, XRRigidTransform * value) {
    em_Val_set(XRMediaLayerInit_as_val(self->inner), em_Val_from("transform"), em_Val_from(value));
}


float XRMediaQuadLayerInit_width(const XRMediaQuadLayerInit *self) {
    return em_Val_as(float, em_Val_get(XRMediaLayerInit_as_val(self->inner), em_Val_from("width")));
}


void XRMediaQuadLayerInit_set_width(XRMediaQuadLayerInit* self, float value) {
    em_Val_set(XRMediaLayerInit_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


float XRMediaQuadLayerInit_height(const XRMediaQuadLayerInit *self) {
    return em_Val_as(float, em_Val_get(XRMediaLayerInit_as_val(self->inner), em_Val_from("height")));
}


void XRMediaQuadLayerInit_set_height(XRMediaQuadLayerInit* self, float value) {
    em_Val_set(XRMediaLayerInit_as_val(self->inner), em_Val_from("height"), em_Val_from(value));
}


XRMediaQuadLayerInit XRMediaQuadLayerInit_new() {
    em_Val obj = em_Val_object();
    return XRMediaQuadLayerInit_from_val(&obj);
}

