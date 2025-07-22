#include <webbind/RTCPeerConnectionIceEvent.h>
#include <webbind/RTCIceCandidate.h>


DEFINE_EMLITE_TYPE(RTCPeerConnectionIceEvent, Event);


RTCPeerConnectionIceEvent RTCPeerConnectionIceEvent_new(const jb_DOMString* type) : Event(em_Val_global("RTCPeerConnectionIceEvent").new_(em_Val_from(type))) {
        return RTCPeerConnectionIceEvent(em_Val_new(em_Val_global("RTCPeerConnectionIceEvent", em_Val_from(type)));
      }


RTCPeerConnectionIceEvent RTCPeerConnectionIceEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("RTCPeerConnectionIceEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return RTCPeerConnectionIceEvent(em_Val_new(em_Val_global("RTCPeerConnectionIceEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


RTCIceCandidate RTCPeerConnectionIceEvent_candidate(const RTCPeerConnectionIceEvent *self) {
    return em_Val_as(RTCIceCandidate, em_Val_get(Event_as_val(self->inner), "candidate"));
}


jb_USVString RTCPeerConnectionIceEvent_url(const RTCPeerConnectionIceEvent *self) {
    return em_Val_as(jb_USVString, em_Val_get(Event_as_val(self->inner), "url"));
}

