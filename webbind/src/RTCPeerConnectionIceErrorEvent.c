#include <webbind/RTCPeerConnectionIceErrorEvent.h>

#include <webbind/RTCPeerConnectionIceErrorEventInit.h>

DEFINE_EMLITE_TYPE(RTCPeerConnectionIceErrorEvent, Event);


RTCPeerConnectionIceErrorEvent RTCPeerConnectionIceErrorEvent_new(jb_String * type, RTCPeerConnectionIceErrorEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("RTCPeerConnectionIceErrorEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return RTCPeerConnectionIceErrorEvent_from_val(&vv);
      }


jb_String RTCPeerConnectionIceErrorEvent_address(const RTCPeerConnectionIceErrorEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("address")));
}


unsigned short RTCPeerConnectionIceErrorEvent_port(const RTCPeerConnectionIceErrorEvent *self) {
    return em_Val_as(unsigned short, em_Val_get(Event_as_val(self->inner), em_Val_from("port")));
}


jb_String RTCPeerConnectionIceErrorEvent_url(const RTCPeerConnectionIceErrorEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("url")));
}


unsigned short RTCPeerConnectionIceErrorEvent_errorCode(const RTCPeerConnectionIceErrorEvent *self) {
    return em_Val_as(unsigned short, em_Val_get(Event_as_val(self->inner), em_Val_from("errorCode")));
}


jb_String RTCPeerConnectionIceErrorEvent_errorText(const RTCPeerConnectionIceErrorEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("errorText")));
}

