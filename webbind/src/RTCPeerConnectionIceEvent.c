#include <webbind/RTCPeerConnectionIceEvent.h>
#include <webbind/RTCIceCandidate.h>


DEFINE_EMLITE_TYPE(RTCPeerConnectionIceEvent, Event);


RTCPeerConnectionIceEvent RTCPeerConnectionIceEvent_new0(jb_DOMString * type) {
        em_Val vv = em_Val_new(em_Val_global("RTCPeerConnectionIceEvent") , em_Val_from(type));
        return RTCPeerConnectionIceEvent_from_val(&vv);
      }


RTCPeerConnectionIceEvent RTCPeerConnectionIceEvent_new1(jb_DOMString * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("RTCPeerConnectionIceEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return RTCPeerConnectionIceEvent_from_val(&vv);
      }


RTCIceCandidate RTCPeerConnectionIceEvent_candidate(const RTCPeerConnectionIceEvent *self) {
    return em_Val_as(RTCIceCandidate, em_Val_get(Event_as_val(self->inner), em_Val_from("candidate")));
}


jb_USVString RTCPeerConnectionIceEvent_url(const RTCPeerConnectionIceEvent *self) {
    return em_Val_as(jb_USVString, em_Val_get(Event_as_val(self->inner), em_Val_from("url")));
}

