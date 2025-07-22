#include <webbind/PresentationConnectionAvailableEvent.h>
#include <webbind/PresentationConnection.h>


DEFINE_EMLITE_TYPE(PresentationConnectionAvailableEvent, Event);


PresentationConnectionAvailableEvent PresentationConnectionAvailableEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("PresentationConnectionAvailableEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return PresentationConnectionAvailableEvent(em_Val_new(em_Val_global("PresentationConnectionAvailableEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


PresentationConnection PresentationConnectionAvailableEvent_connection(const PresentationConnectionAvailableEvent *self) {
    return em_Val_as(PresentationConnection, em_Val_get(Event_as_val(self->inner), "connection"));
}

