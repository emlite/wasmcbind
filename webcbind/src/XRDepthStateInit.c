#include <webcbind/XRDepthStateInit.h>

DEFINE_EMLITE_TYPE(XRDepthStateInit, em_Val);


jb_Array XRDepthStateInit_usagePreference(const XRDepthStateInit *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usagePreference")));
}


void XRDepthStateInit_set_usagePreference(XRDepthStateInit* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("usagePreference"), em_Val_from(value));
}


jb_Array XRDepthStateInit_dataFormatPreference(const XRDepthStateInit *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dataFormatPreference")));
}


void XRDepthStateInit_set_dataFormatPreference(XRDepthStateInit* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dataFormatPreference"), em_Val_from(value));
}


jb_Array XRDepthStateInit_depthTypeRequest(const XRDepthStateInit *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("depthTypeRequest")));
}


void XRDepthStateInit_set_depthTypeRequest(XRDepthStateInit* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("depthTypeRequest"), em_Val_from(value));
}


bool XRDepthStateInit_matchDepthView(const XRDepthStateInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("matchDepthView")));
}


void XRDepthStateInit_set_matchDepthView(XRDepthStateInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("matchDepthView"), em_Val_from(value));
}


XRDepthStateInit XRDepthStateInit_new() {
    em_Val obj = em_Val_object();
    return XRDepthStateInit_from_val(&obj);
}

