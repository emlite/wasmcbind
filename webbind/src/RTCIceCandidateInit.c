#include <webbind/RTCIceCandidateInit.h>

DEFINE_EMLITE_TYPE(RTCIceCandidateInit, em_Val);


jb_String RTCIceCandidateInit_candidate(const RTCIceCandidateInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("candidate")));
}


void RTCIceCandidateInit_set_candidate(RTCIceCandidateInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("candidate"), em_Val_from(value));
}


jb_String RTCIceCandidateInit_sdpMid(const RTCIceCandidateInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sdpMid")));
}


void RTCIceCandidateInit_set_sdpMid(RTCIceCandidateInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sdpMid"), em_Val_from(value));
}


unsigned short RTCIceCandidateInit_sdpMLineIndex(const RTCIceCandidateInit *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sdpMLineIndex")));
}


void RTCIceCandidateInit_set_sdpMLineIndex(RTCIceCandidateInit* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sdpMLineIndex"), em_Val_from(value));
}


jb_String RTCIceCandidateInit_usernameFragment(const RTCIceCandidateInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usernameFragment")));
}


void RTCIceCandidateInit_set_usernameFragment(RTCIceCandidateInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("usernameFragment"), em_Val_from(value));
}


RTCIceCandidateInit RTCIceCandidateInit_new() {
    em_Val obj = em_Val_object();
    return RTCIceCandidateInit_from_val(&obj);
}

