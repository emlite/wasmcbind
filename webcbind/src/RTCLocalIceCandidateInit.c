#include <webcbind/RTCLocalIceCandidateInit.h>

DEFINE_EMLITE_TYPE(RTCLocalIceCandidateInit, RTCIceCandidateInit);


RTCIceServerTransportProtocol RTCLocalIceCandidateInit_relayProtocol(const RTCLocalIceCandidateInit *self) {
    return em_Val_as(RTCIceServerTransportProtocol, em_Val_get(RTCIceCandidateInit_as_val(self->inner), em_Val_from("relayProtocol")));
}


void RTCLocalIceCandidateInit_set_relayProtocol(RTCLocalIceCandidateInit* self, RTCIceServerTransportProtocol * value) {
    em_Val_set(RTCIceCandidateInit_as_val(self->inner), em_Val_from("relayProtocol"), em_Val_from(value));
}


jb_String RTCLocalIceCandidateInit_url(const RTCLocalIceCandidateInit *self) {
    return em_Val_as(jb_String, em_Val_get(RTCIceCandidateInit_as_val(self->inner), em_Val_from("url")));
}


void RTCLocalIceCandidateInit_set_url(RTCLocalIceCandidateInit* self, jb_String * value) {
    em_Val_set(RTCIceCandidateInit_as_val(self->inner), em_Val_from("url"), em_Val_from(value));
}


RTCLocalIceCandidateInit RTCLocalIceCandidateInit_new() {
    em_Val obj = em_Val_object();
    return RTCLocalIceCandidateInit_from_val(&obj);
}

