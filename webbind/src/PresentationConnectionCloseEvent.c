#include <webbind/PresentationConnectionCloseEvent.h>


DEFINE_EMLITE_TYPE(PresentationConnectionCloseEvent, Event);


PresentationConnectionCloseEvent PresentationConnectionCloseEvent_new(jb_DOMString * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("PresentationConnectionCloseEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return PresentationConnectionCloseEvent_from_val(&vv);
      }


PresentationConnectionCloseReason PresentationConnectionCloseEvent_reason(const PresentationConnectionCloseEvent *self) {
    return em_Val_as(PresentationConnectionCloseReason, em_Val_get(Event_as_val(self->inner), em_Val_from("reason")));
}


jb_DOMString PresentationConnectionCloseEvent_message(const PresentationConnectionCloseEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), em_Val_from("message")));
}

