#include <webbind/RTCIceServer.h>

DEFINE_EMLITE_TYPE(RTCIceServer, em_Val);


jb_Any RTCIceServer_urls(const RTCIceServer *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("urls")));
}


void RTCIceServer_set_urls(RTCIceServer* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("urls"), em_Val_from(value));
}


jb_String RTCIceServer_username(const RTCIceServer *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("username")));
}


void RTCIceServer_set_username(RTCIceServer* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("username"), em_Val_from(value));
}


jb_String RTCIceServer_credential(const RTCIceServer *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("credential")));
}


void RTCIceServer_set_credential(RTCIceServer* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("credential"), em_Val_from(value));
}


RTCIceServer RTCIceServer_new() {
    em_Val obj = em_Val_object();
    return RTCIceServer_from_val(&obj);
}

