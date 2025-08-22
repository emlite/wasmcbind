#include <webcbind/RTCPeerConnectionIceEventInit.h>

#include <webcbind/RTCIceCandidate.h>

DEFINE_EMLITE_TYPE(RTCPeerConnectionIceEventInit, EventInit);


RTCIceCandidate RTCPeerConnectionIceEventInit_candidate(const RTCPeerConnectionIceEventInit *self) {
    return em_Val_as(RTCIceCandidate, em_Val_get(EventInit_as_val(self->inner), em_Val_from("candidate")));
}


void RTCPeerConnectionIceEventInit_set_candidate(RTCPeerConnectionIceEventInit* self, RTCIceCandidate * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("candidate"), em_Val_from(value));
}


jb_String RTCPeerConnectionIceEventInit_url(const RTCPeerConnectionIceEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("url")));
}


void RTCPeerConnectionIceEventInit_set_url(RTCPeerConnectionIceEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("url"), em_Val_from(value));
}


RTCPeerConnectionIceEventInit RTCPeerConnectionIceEventInit_new() {
    em_Val obj = em_Val_object();
    return RTCPeerConnectionIceEventInit_from_val(&obj);
}

