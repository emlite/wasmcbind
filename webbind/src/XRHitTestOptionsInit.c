#include <webbind/XRHitTestOptionsInit.h>

#include <webbind/XRSpace.h>
#include <webbind/XRRay.h>

DEFINE_EMLITE_TYPE(XRHitTestOptionsInit, em_Val);


XRSpace XRHitTestOptionsInit_space(const XRHitTestOptionsInit *self) {
    return em_Val_as(XRSpace, em_Val_get(em_Val_as_val(self->inner), em_Val_from("space")));
}


void XRHitTestOptionsInit_set_space(XRHitTestOptionsInit* self, XRSpace * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("space"), em_Val_from(value));
}


jb_Array XRHitTestOptionsInit_entityTypes(const XRHitTestOptionsInit *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("entityTypes")));
}


void XRHitTestOptionsInit_set_entityTypes(XRHitTestOptionsInit* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("entityTypes"), em_Val_from(value));
}


XRRay XRHitTestOptionsInit_offsetRay(const XRHitTestOptionsInit *self) {
    return em_Val_as(XRRay, em_Val_get(em_Val_as_val(self->inner), em_Val_from("offsetRay")));
}


void XRHitTestOptionsInit_set_offsetRay(XRHitTestOptionsInit* self, XRRay * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("offsetRay"), em_Val_from(value));
}


XRHitTestOptionsInit XRHitTestOptionsInit_new() {
    em_Val obj = em_Val_object();
    return XRHitTestOptionsInit_from_val(&obj);
}

