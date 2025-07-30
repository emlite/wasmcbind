#include <webbind/RTCIceCandidate.h>
#include <webbind/RTCIceTransport.h>


DEFINE_EMLITE_TYPE(RTCIceCandidate, em_Val);


RTCIceCandidate RTCIceCandidate_new0() {
        em_Val vv = em_Val_new(em_Val_global("RTCIceCandidate") );
        return RTCIceCandidate_from_val(&vv);
      }


RTCIceCandidate RTCIceCandidate_new1(jb_Any * candidateInitDict) {
        em_Val vv = em_Val_new(em_Val_global("RTCIceCandidate") , em_Val_from(candidateInitDict));
        return RTCIceCandidate_from_val(&vv);
      }


jb_String RTCIceCandidate_candidate(const RTCIceCandidate *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("candidate")));
}


jb_String RTCIceCandidate_sdpMid(const RTCIceCandidate *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sdpMid")));
}


unsigned short RTCIceCandidate_sdpMLineIndex(const RTCIceCandidate *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sdpMLineIndex")));
}


jb_String RTCIceCandidate_foundation(const RTCIceCandidate *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("foundation")));
}


RTCIceComponent RTCIceCandidate_component(const RTCIceCandidate *self) {
    return em_Val_as(RTCIceComponent, em_Val_get(em_Val_as_val(self->inner), em_Val_from("component")));
}


unsigned long RTCIceCandidate_priority(const RTCIceCandidate *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("priority")));
}


jb_String RTCIceCandidate_address(const RTCIceCandidate *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("address")));
}


RTCIceProtocol RTCIceCandidate_protocol(const RTCIceCandidate *self) {
    return em_Val_as(RTCIceProtocol, em_Val_get(em_Val_as_val(self->inner), em_Val_from("protocol")));
}


unsigned short RTCIceCandidate_port(const RTCIceCandidate *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("port")));
}


RTCIceCandidateType RTCIceCandidate_type(const RTCIceCandidate *self) {
    return em_Val_as(RTCIceCandidateType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


RTCIceTcpCandidateType RTCIceCandidate_tcpType(const RTCIceCandidate *self) {
    return em_Val_as(RTCIceTcpCandidateType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("tcpType")));
}


jb_String RTCIceCandidate_relatedAddress(const RTCIceCandidate *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("relatedAddress")));
}


unsigned short RTCIceCandidate_relatedPort(const RTCIceCandidate *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("relatedPort")));
}


jb_String RTCIceCandidate_usernameFragment(const RTCIceCandidate *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usernameFragment")));
}


RTCIceServerTransportProtocol RTCIceCandidate_relayProtocol(const RTCIceCandidate *self) {
    return em_Val_as(RTCIceServerTransportProtocol, em_Val_get(em_Val_as_val(self->inner), em_Val_from("relayProtocol")));
}


jb_String RTCIceCandidate_url(const RTCIceCandidate *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("url")));
}


RTCIceCandidateInit RTCIceCandidate_toJSON(RTCIceCandidate* self ) {
    return em_Val_as(RTCIceCandidateInit, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

