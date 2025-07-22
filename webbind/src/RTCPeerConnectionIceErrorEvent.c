#include <webbind/RTCPeerConnectionIceErrorEvent.h>


DEFINE_EMLITE_TYPE(RTCPeerConnectionIceErrorEvent, Event);


RTCPeerConnectionIceErrorEvent RTCPeerConnectionIceErrorEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("RTCPeerConnectionIceErrorEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return RTCPeerConnectionIceErrorEvent(em_Val_new(em_Val_global("RTCPeerConnectionIceErrorEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_DOMString RTCPeerConnectionIceErrorEvent_address(const RTCPeerConnectionIceErrorEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), "address"));
}


unsigned short RTCPeerConnectionIceErrorEvent_port(const RTCPeerConnectionIceErrorEvent *self) {
    return em_Val_as(unsigned short, em_Val_get(Event_as_val(self->inner), "port"));
}


jb_USVString RTCPeerConnectionIceErrorEvent_url(const RTCPeerConnectionIceErrorEvent *self) {
    return em_Val_as(jb_USVString, em_Val_get(Event_as_val(self->inner), "url"));
}


unsigned short RTCPeerConnectionIceErrorEvent_errorCode(const RTCPeerConnectionIceErrorEvent *self) {
    return em_Val_as(unsigned short, em_Val_get(Event_as_val(self->inner), "errorCode"));
}


jb_USVString RTCPeerConnectionIceErrorEvent_errorText(const RTCPeerConnectionIceErrorEvent *self) {
    return em_Val_as(jb_USVString, em_Val_get(Event_as_val(self->inner), "errorText"));
}

