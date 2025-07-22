#include <webbind/RTCIceCandidate.h>
#include <webbind/RTCIceTransport.h>


DEFINE_EMLITE_TYPE(RTCIceCandidate, em_Val);


RTCIceCandidate RTCIceCandidate_new() : em_Val(em_Val_global("RTCIceCandidate").new_()) {
        return RTCIceCandidate(em_Val_new(em_Val_global("RTCIceCandidate", ));
      }


RTCIceCandidate RTCIceCandidate_new(const jb_Any* candidateInitDict) : em_Val(em_Val_global("RTCIceCandidate").new_(em_Val_from(candidateInitDict))) {
        return RTCIceCandidate(em_Val_new(em_Val_global("RTCIceCandidate", em_Val_from(candidateInitDict)));
      }


jb_DOMString RTCIceCandidate_candidate(const RTCIceCandidate *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "candidate"));
}


jb_DOMString RTCIceCandidate_sdpMid(const RTCIceCandidate *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "sdpMid"));
}


unsigned short RTCIceCandidate_sdpMLineIndex(const RTCIceCandidate *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "sdpMLineIndex"));
}


jb_DOMString RTCIceCandidate_foundation(const RTCIceCandidate *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "foundation"));
}


RTCIceComponent RTCIceCandidate_component(const RTCIceCandidate *self) {
    return em_Val_as(RTCIceComponent, em_Val_get(em_Val_as_val(self->inner), "component"));
}


unsigned long RTCIceCandidate_priority(const RTCIceCandidate *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "priority"));
}


jb_DOMString RTCIceCandidate_address(const RTCIceCandidate *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "address"));
}


RTCIceProtocol RTCIceCandidate_protocol(const RTCIceCandidate *self) {
    return em_Val_as(RTCIceProtocol, em_Val_get(em_Val_as_val(self->inner), "protocol"));
}


unsigned short RTCIceCandidate_port(const RTCIceCandidate *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "port"));
}


RTCIceCandidateType RTCIceCandidate_type(const RTCIceCandidate *self) {
    return em_Val_as(RTCIceCandidateType, em_Val_get(em_Val_as_val(self->inner), "type"));
}


RTCIceTcpCandidateType RTCIceCandidate_tcpType(const RTCIceCandidate *self) {
    return em_Val_as(RTCIceTcpCandidateType, em_Val_get(em_Val_as_val(self->inner), "tcpType"));
}


jb_DOMString RTCIceCandidate_relatedAddress(const RTCIceCandidate *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "relatedAddress"));
}


unsigned short RTCIceCandidate_relatedPort(const RTCIceCandidate *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "relatedPort"));
}


jb_DOMString RTCIceCandidate_usernameFragment(const RTCIceCandidate *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "usernameFragment"));
}


RTCIceServerTransportProtocol RTCIceCandidate_relayProtocol(const RTCIceCandidate *self) {
    return em_Val_as(RTCIceServerTransportProtocol, em_Val_get(em_Val_as_val(self->inner), "relayProtocol"));
}


jb_USVString RTCIceCandidate_url(const RTCIceCandidate *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "url"));
}


RTCIceCandidateInit RTCIceCandidate_toJSON(RTCIceCandidate* self ) {
    return em_Val_as(RTCIceCandidateInit, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

