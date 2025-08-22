#include <webcbind/XRTransientInputHitTestOptionsInit.h>

#include <webcbind/XRRay.h>

DEFINE_EMLITE_TYPE(XRTransientInputHitTestOptionsInit, em_Val);


jb_String XRTransientInputHitTestOptionsInit_profile(const XRTransientInputHitTestOptionsInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("profile")));
}


void XRTransientInputHitTestOptionsInit_set_profile(XRTransientInputHitTestOptionsInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("profile"), em_Val_from(value));
}


jb_Array XRTransientInputHitTestOptionsInit_entityTypes(const XRTransientInputHitTestOptionsInit *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("entityTypes")));
}


void XRTransientInputHitTestOptionsInit_set_entityTypes(XRTransientInputHitTestOptionsInit* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("entityTypes"), em_Val_from(value));
}


XRRay XRTransientInputHitTestOptionsInit_offsetRay(const XRTransientInputHitTestOptionsInit *self) {
    return em_Val_as(XRRay, em_Val_get(em_Val_as_val(self->inner), em_Val_from("offsetRay")));
}


void XRTransientInputHitTestOptionsInit_set_offsetRay(XRTransientInputHitTestOptionsInit* self, XRRay * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("offsetRay"), em_Val_from(value));
}


XRTransientInputHitTestOptionsInit XRTransientInputHitTestOptionsInit_new() {
    em_Val obj = em_Val_object();
    return XRTransientInputHitTestOptionsInit_from_val(&obj);
}

