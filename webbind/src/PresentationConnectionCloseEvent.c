#include <webbind/PresentationConnectionCloseEvent.h>


DEFINE_EMLITE_TYPE(PresentationConnectionCloseEvent, Event);


PresentationConnectionCloseEvent PresentationConnectionCloseEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("PresentationConnectionCloseEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return PresentationConnectionCloseEvent(em_Val_new(em_Val_global("PresentationConnectionCloseEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


PresentationConnectionCloseReason PresentationConnectionCloseEvent_reason(const PresentationConnectionCloseEvent *self) {
    return em_Val_as(PresentationConnectionCloseReason, em_Val_get(Event_as_val(self->inner), "reason"));
}


jb_DOMString PresentationConnectionCloseEvent_message(const PresentationConnectionCloseEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), "message"));
}

