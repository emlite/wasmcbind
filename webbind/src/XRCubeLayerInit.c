#include <webbind/XRCubeLayerInit.h>

#include <webbind/DOMPointReadOnly.h>

DEFINE_EMLITE_TYPE(XRCubeLayerInit, XRLayerInit);


DOMPointReadOnly XRCubeLayerInit_orientation(const XRCubeLayerInit *self) {
    return em_Val_as(DOMPointReadOnly, em_Val_get(XRLayerInit_as_val(self->inner), em_Val_from("orientation")));
}


void XRCubeLayerInit_set_orientation(XRCubeLayerInit* self, DOMPointReadOnly * value) {
    em_Val_set(XRLayerInit_as_val(self->inner), em_Val_from("orientation"), em_Val_from(value));
}


XRCubeLayerInit XRCubeLayerInit_new() {
    em_Val obj = em_Val_object();
    return XRCubeLayerInit_from_val(&obj);
}

