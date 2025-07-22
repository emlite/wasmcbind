#include <webbind/RTCIceTransport.h>
#include <webbind/RTCIceCandidate.h>
#include <webbind/RTCIceCandidatePair.h>


DEFINE_EMLITE_TYPE(RTCIceParameters, em_Val);


jb_DOMString RTCIceParameters_usernameFragment(const RTCIceParameters *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "usernameFragment"));
}


void RTCIceParameters_set_usernameFragment(RTCIceParameters* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "usernameFragment", value);
}


jb_DOMString RTCIceParameters_password(const RTCIceParameters *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "password"));
}


void RTCIceParameters_set_password(RTCIceParameters* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "password", value);
}

DEFINE_EMLITE_TYPE(RTCIceGatherOptions, em_Val);


RTCIceTransportPolicy RTCIceGatherOptions_gatherPolicy(const RTCIceGatherOptions *self) {
    return em_Val_as(RTCIceTransportPolicy, em_Val_get(em_Val_as_val(self->inner), "gatherPolicy"));
}


void RTCIceGatherOptions_set_gatherPolicy(RTCIceGatherOptions* self, const RTCIceTransportPolicy* value) {
    em_Val_set(em_Val_as_val(self->inner), "gatherPolicy", value);
}


jb_Sequence RTCIceGatherOptions_iceServers(const RTCIceGatherOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "iceServers"));
}


void RTCIceGatherOptions_set_iceServers(RTCIceGatherOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "iceServers", value);
}

DEFINE_EMLITE_TYPE(RTCIceCandidateInit, em_Val);


jb_DOMString RTCIceCandidateInit_candidate(const RTCIceCandidateInit *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "candidate"));
}


void RTCIceCandidateInit_set_candidate(RTCIceCandidateInit* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "candidate", value);
}


jb_DOMString RTCIceCandidateInit_sdpMid(const RTCIceCandidateInit *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "sdpMid"));
}


void RTCIceCandidateInit_set_sdpMid(RTCIceCandidateInit* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "sdpMid", value);
}


unsigned short RTCIceCandidateInit_sdpMLineIndex(const RTCIceCandidateInit *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "sdpMLineIndex"));
}


void RTCIceCandidateInit_set_sdpMLineIndex(RTCIceCandidateInit* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), "sdpMLineIndex", value);
}


jb_DOMString RTCIceCandidateInit_usernameFragment(const RTCIceCandidateInit *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "usernameFragment"));
}


void RTCIceCandidateInit_set_usernameFragment(RTCIceCandidateInit* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "usernameFragment", value);
}

DEFINE_EMLITE_TYPE(RTCIceTransport, EventTarget);


RTCIceRole RTCIceTransport_role(const RTCIceTransport *self) {
    return em_Val_as(RTCIceRole, em_Val_get(EventTarget_as_val(self->inner), "role"));
}


RTCIceComponent RTCIceTransport_component(const RTCIceTransport *self) {
    return em_Val_as(RTCIceComponent, em_Val_get(EventTarget_as_val(self->inner), "component"));
}


RTCIceTransportState RTCIceTransport_state(const RTCIceTransport *self) {
    return em_Val_as(RTCIceTransportState, em_Val_get(EventTarget_as_val(self->inner), "state"));
}


RTCIceGathererState RTCIceTransport_gatheringState(const RTCIceTransport *self) {
    return em_Val_as(RTCIceGathererState, em_Val_get(EventTarget_as_val(self->inner), "gatheringState"));
}


jb_Sequence RTCIceTransport_getLocalCandidates(RTCIceTransport* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(EventTarget_as_val(self->inner), "getLocalCandidates"));
}


jb_Sequence RTCIceTransport_getRemoteCandidates(RTCIceTransport* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(EventTarget_as_val(self->inner), "getRemoteCandidates"));
}


RTCIceCandidatePair RTCIceTransport_getSelectedCandidatePair(RTCIceTransport* self ) {
    return em_Val_as(RTCIceCandidatePair, em_Val_call(EventTarget_as_val(self->inner), "getSelectedCandidatePair"));
}


RTCIceParameters RTCIceTransport_getLocalParameters(RTCIceTransport* self ) {
    return em_Val_as(RTCIceParameters, em_Val_call(EventTarget_as_val(self->inner), "getLocalParameters"));
}


RTCIceParameters RTCIceTransport_getRemoteParameters(RTCIceTransport* self ) {
    return em_Val_as(RTCIceParameters, em_Val_call(EventTarget_as_val(self->inner), "getRemoteParameters"));
}


jb_Any RTCIceTransport_onstatechange(const RTCIceTransport *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onstatechange"));
}


void RTCIceTransport_set_onstatechange(RTCIceTransport* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onstatechange", value);
}


jb_Any RTCIceTransport_ongatheringstatechange(const RTCIceTransport *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "ongatheringstatechange"));
}


void RTCIceTransport_set_ongatheringstatechange(RTCIceTransport* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "ongatheringstatechange", value);
}


jb_Any RTCIceTransport_onselectedcandidatepairchange(const RTCIceTransport *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onselectedcandidatepairchange"));
}


void RTCIceTransport_set_onselectedcandidatepairchange(RTCIceTransport* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onselectedcandidatepairchange", value);
}


RTCIceTransport RTCIceTransport_new() : EventTarget(em_Val_global("RTCIceTransport").new_()) {
        return RTCIceTransport(em_Val_new(em_Val_global("RTCIceTransport", ));
      }


jb_Undefined RTCIceTransport_gather(RTCIceTransport* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "gather"));
}


jb_Undefined RTCIceTransport_gather(RTCIceTransport* self , const RTCIceGatherOptions* options) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "gather", em_Val_from(options)));
}


jb_Undefined RTCIceTransport_start(RTCIceTransport* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "start"));
}


jb_Undefined RTCIceTransport_start(RTCIceTransport* self , const RTCIceParameters* remoteParameters) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "start", em_Val_from(remoteParameters)));
}


jb_Undefined RTCIceTransport_start(RTCIceTransport* self , const RTCIceParameters* remoteParameters, const RTCIceRole* role) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "start", em_Val_from(remoteParameters), em_Val_from(role)));
}


jb_Undefined RTCIceTransport_stop(RTCIceTransport* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "stop"));
}


jb_Undefined RTCIceTransport_addRemoteCandidate(RTCIceTransport* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "addRemoteCandidate"));
}


jb_Undefined RTCIceTransport_addRemoteCandidate(RTCIceTransport* self , const RTCIceCandidateInit* remoteCandidate) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "addRemoteCandidate", em_Val_from(remoteCandidate)));
}


jb_Any RTCIceTransport_onerror(const RTCIceTransport *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onerror"));
}


void RTCIceTransport_set_onerror(RTCIceTransport* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onerror", value);
}


jb_Any RTCIceTransport_onicecandidate(const RTCIceTransport *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onicecandidate"));
}


void RTCIceTransport_set_onicecandidate(RTCIceTransport* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onicecandidate", value);
}

