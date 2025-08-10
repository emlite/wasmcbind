#include <webbind/RTCPeerConnectionIceErrorEventInit.h>

DEFINE_EMLITE_TYPE(RTCPeerConnectionIceErrorEventInit, EventInit);


jb_String RTCPeerConnectionIceErrorEventInit_address(const RTCPeerConnectionIceErrorEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("address")));
}


void RTCPeerConnectionIceErrorEventInit_set_address(RTCPeerConnectionIceErrorEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("address"), em_Val_from(value));
}


unsigned short RTCPeerConnectionIceErrorEventInit_port(const RTCPeerConnectionIceErrorEventInit *self) {
    return em_Val_as(unsigned short, em_Val_get(EventInit_as_val(self->inner), em_Val_from("port")));
}


void RTCPeerConnectionIceErrorEventInit_set_port(RTCPeerConnectionIceErrorEventInit* self, unsigned short value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("port"), em_Val_from(value));
}


jb_String RTCPeerConnectionIceErrorEventInit_url(const RTCPeerConnectionIceErrorEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("url")));
}


void RTCPeerConnectionIceErrorEventInit_set_url(RTCPeerConnectionIceErrorEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("url"), em_Val_from(value));
}


unsigned short RTCPeerConnectionIceErrorEventInit_errorCode(const RTCPeerConnectionIceErrorEventInit *self) {
    return em_Val_as(unsigned short, em_Val_get(EventInit_as_val(self->inner), em_Val_from("errorCode")));
}


void RTCPeerConnectionIceErrorEventInit_set_errorCode(RTCPeerConnectionIceErrorEventInit* self, unsigned short value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("errorCode"), em_Val_from(value));
}


jb_String RTCPeerConnectionIceErrorEventInit_errorText(const RTCPeerConnectionIceErrorEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("errorText")));
}


void RTCPeerConnectionIceErrorEventInit_set_errorText(RTCPeerConnectionIceErrorEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("errorText"), em_Val_from(value));
}


RTCPeerConnectionIceErrorEventInit RTCPeerConnectionIceErrorEventInit_new() {
    em_Val obj = em_Val_object();
    return RTCPeerConnectionIceErrorEventInit_from_val(&obj);
}

