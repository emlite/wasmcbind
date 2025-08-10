#include <webbind/RTCIceCandidateStats.h>

DEFINE_EMLITE_TYPE(RTCIceCandidateStats, RTCStats);


jb_String RTCIceCandidateStats_transportId(const RTCIceCandidateStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("transportId")));
}


void RTCIceCandidateStats_set_transportId(RTCIceCandidateStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("transportId"), em_Val_from(value));
}


jb_String RTCIceCandidateStats_address(const RTCIceCandidateStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("address")));
}


void RTCIceCandidateStats_set_address(RTCIceCandidateStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("address"), em_Val_from(value));
}


long RTCIceCandidateStats_port(const RTCIceCandidateStats *self) {
    return em_Val_as(long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("port")));
}


void RTCIceCandidateStats_set_port(RTCIceCandidateStats* self, long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("port"), em_Val_from(value));
}


jb_String RTCIceCandidateStats_protocol(const RTCIceCandidateStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("protocol")));
}


void RTCIceCandidateStats_set_protocol(RTCIceCandidateStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("protocol"), em_Val_from(value));
}


RTCIceCandidateType RTCIceCandidateStats_candidateType(const RTCIceCandidateStats *self) {
    return em_Val_as(RTCIceCandidateType, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("candidateType")));
}


void RTCIceCandidateStats_set_candidateType(RTCIceCandidateStats* self, RTCIceCandidateType * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("candidateType"), em_Val_from(value));
}


long RTCIceCandidateStats_priority(const RTCIceCandidateStats *self) {
    return em_Val_as(long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("priority")));
}


void RTCIceCandidateStats_set_priority(RTCIceCandidateStats* self, long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("priority"), em_Val_from(value));
}


jb_String RTCIceCandidateStats_url(const RTCIceCandidateStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("url")));
}


void RTCIceCandidateStats_set_url(RTCIceCandidateStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("url"), em_Val_from(value));
}


RTCIceServerTransportProtocol RTCIceCandidateStats_relayProtocol(const RTCIceCandidateStats *self) {
    return em_Val_as(RTCIceServerTransportProtocol, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("relayProtocol")));
}


void RTCIceCandidateStats_set_relayProtocol(RTCIceCandidateStats* self, RTCIceServerTransportProtocol * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("relayProtocol"), em_Val_from(value));
}


jb_String RTCIceCandidateStats_foundation(const RTCIceCandidateStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("foundation")));
}


void RTCIceCandidateStats_set_foundation(RTCIceCandidateStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("foundation"), em_Val_from(value));
}


jb_String RTCIceCandidateStats_relatedAddress(const RTCIceCandidateStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("relatedAddress")));
}


void RTCIceCandidateStats_set_relatedAddress(RTCIceCandidateStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("relatedAddress"), em_Val_from(value));
}


long RTCIceCandidateStats_relatedPort(const RTCIceCandidateStats *self) {
    return em_Val_as(long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("relatedPort")));
}


void RTCIceCandidateStats_set_relatedPort(RTCIceCandidateStats* self, long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("relatedPort"), em_Val_from(value));
}


jb_String RTCIceCandidateStats_usernameFragment(const RTCIceCandidateStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("usernameFragment")));
}


void RTCIceCandidateStats_set_usernameFragment(RTCIceCandidateStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("usernameFragment"), em_Val_from(value));
}


RTCIceTcpCandidateType RTCIceCandidateStats_tcpType(const RTCIceCandidateStats *self) {
    return em_Val_as(RTCIceTcpCandidateType, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("tcpType")));
}


void RTCIceCandidateStats_set_tcpType(RTCIceCandidateStats* self, RTCIceTcpCandidateType * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("tcpType"), em_Val_from(value));
}


RTCIceCandidateStats RTCIceCandidateStats_new() {
    em_Val obj = em_Val_object();
    return RTCIceCandidateStats_from_val(&obj);
}

