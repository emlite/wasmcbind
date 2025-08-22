#include <webcbind/RTCIceTransport.h>

#include <webcbind/RTCIceCandidate.h>
#include <webcbind/RTCIceCandidatePair.h>
#include <webcbind/RTCIceParameters.h>
#include <webcbind/RTCIceGatherOptions.h>
#include <webcbind/RTCIceCandidateInit.h>

DEFINE_EMLITE_TYPE(RTCIceTransport, EventTarget);


RTCIceRole RTCIceTransport_role(const RTCIceTransport *self) {
    return em_Val_as(RTCIceRole, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("role")));
}


RTCIceComponent RTCIceTransport_component(const RTCIceTransport *self) {
    return em_Val_as(RTCIceComponent, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("component")));
}


RTCIceTransportState RTCIceTransport_state(const RTCIceTransport *self) {
    return em_Val_as(RTCIceTransportState, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("state")));
}


RTCIceGathererState RTCIceTransport_gatheringState(const RTCIceTransport *self) {
    return em_Val_as(RTCIceGathererState, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("gatheringState")));
}


jb_Array RTCIceTransport_getLocalCandidates(RTCIceTransport* self ) {
    return em_Val_as(jb_Array, em_Val_call(EventTarget_as_val(self->inner), "getLocalCandidates"));
}


jb_Array RTCIceTransport_getRemoteCandidates(RTCIceTransport* self ) {
    return em_Val_as(jb_Array, em_Val_call(EventTarget_as_val(self->inner), "getRemoteCandidates"));
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
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onstatechange")));
}


void RTCIceTransport_set_onstatechange(RTCIceTransport* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onstatechange"), em_Val_from(value));
}


jb_Any RTCIceTransport_ongatheringstatechange(const RTCIceTransport *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ongatheringstatechange")));
}


void RTCIceTransport_set_ongatheringstatechange(RTCIceTransport* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("ongatheringstatechange"), em_Val_from(value));
}


jb_Any RTCIceTransport_onselectedcandidatepairchange(const RTCIceTransport *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onselectedcandidatepairchange")));
}


void RTCIceTransport_set_onselectedcandidatepairchange(RTCIceTransport* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onselectedcandidatepairchange"), em_Val_from(value));
}


RTCIceTransport RTCIceTransport_new() {
        em_Val vv = em_Val_new(em_Val_global("RTCIceTransport") );
        return RTCIceTransport_from_val(&vv);
      }


jb_Undefined RTCIceTransport_gather0(RTCIceTransport* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "gather"));
}


jb_Undefined RTCIceTransport_gather1(RTCIceTransport* self , RTCIceGatherOptions * options) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "gather", em_Val_from(options)));
}


jb_Undefined RTCIceTransport_start0(RTCIceTransport* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "start"));
}


jb_Undefined RTCIceTransport_start1(RTCIceTransport* self , RTCIceParameters * remoteParameters) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "start", em_Val_from(remoteParameters)));
}


jb_Undefined RTCIceTransport_start2(RTCIceTransport* self , RTCIceParameters * remoteParameters, RTCIceRole * role) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "start", em_Val_from(remoteParameters), em_Val_from(role)));
}


jb_Undefined RTCIceTransport_stop(RTCIceTransport* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "stop"));
}


jb_Undefined RTCIceTransport_addRemoteCandidate0(RTCIceTransport* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "addRemoteCandidate"));
}


jb_Undefined RTCIceTransport_addRemoteCandidate1(RTCIceTransport* self , RTCIceCandidateInit * remoteCandidate) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "addRemoteCandidate", em_Val_from(remoteCandidate)));
}


jb_Any RTCIceTransport_onerror(const RTCIceTransport *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onerror")));
}


void RTCIceTransport_set_onerror(RTCIceTransport* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onerror"), em_Val_from(value));
}


jb_Any RTCIceTransport_onicecandidate(const RTCIceTransport *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onicecandidate")));
}


void RTCIceTransport_set_onicecandidate(RTCIceTransport* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onicecandidate"), em_Val_from(value));
}

