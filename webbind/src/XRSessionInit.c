#include <webbind/XRSessionInit.h>

DEFINE_EMLITE_TYPE(XRSessionInit, em_Val);


jb_Array XRSessionInit_requiredFeatures(const XRSessionInit *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requiredFeatures")));
}


void XRSessionInit_set_requiredFeatures(XRSessionInit* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requiredFeatures"), em_Val_from(value));
}


jb_Array XRSessionInit_optionalFeatures(const XRSessionInit *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("optionalFeatures")));
}


void XRSessionInit_set_optionalFeatures(XRSessionInit* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("optionalFeatures"), em_Val_from(value));
}


XRSessionInit XRSessionInit_new() {
    em_Val obj = em_Val_object();
    return XRSessionInit_from_val(&obj);
}

