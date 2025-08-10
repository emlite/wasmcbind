#include <webbind/XRMediaLayerInit.h>

#include <webbind/XRSpace.h>

DEFINE_EMLITE_TYPE(XRMediaLayerInit, em_Val);


XRSpace XRMediaLayerInit_space(const XRMediaLayerInit *self) {
    return em_Val_as(XRSpace, em_Val_get(em_Val_as_val(self->inner), em_Val_from("space")));
}


void XRMediaLayerInit_set_space(XRMediaLayerInit* self, XRSpace * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("space"), em_Val_from(value));
}


XRLayerLayout XRMediaLayerInit_layout(const XRMediaLayerInit *self) {
    return em_Val_as(XRLayerLayout, em_Val_get(em_Val_as_val(self->inner), em_Val_from("layout")));
}


void XRMediaLayerInit_set_layout(XRMediaLayerInit* self, XRLayerLayout * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("layout"), em_Val_from(value));
}


bool XRMediaLayerInit_invertStereo(const XRMediaLayerInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("invertStereo")));
}


void XRMediaLayerInit_set_invertStereo(XRMediaLayerInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("invertStereo"), em_Val_from(value));
}


XRMediaLayerInit XRMediaLayerInit_new() {
    em_Val obj = em_Val_object();
    return XRMediaLayerInit_from_val(&obj);
}

