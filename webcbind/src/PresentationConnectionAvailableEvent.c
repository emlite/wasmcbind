#include <webcbind/PresentationConnectionAvailableEvent.h>

#include <webcbind/PresentationConnectionAvailableEventInit.h>
#include <webcbind/PresentationConnection.h>

DEFINE_EMLITE_TYPE(PresentationConnectionAvailableEvent, Event);


PresentationConnectionAvailableEvent PresentationConnectionAvailableEvent_new(jb_String * type, PresentationConnectionAvailableEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("PresentationConnectionAvailableEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return PresentationConnectionAvailableEvent_from_val(&vv);
      }


PresentationConnection PresentationConnectionAvailableEvent_connection(const PresentationConnectionAvailableEvent *self) {
    return em_Val_as(PresentationConnection, em_Val_get(Event_as_val(self->inner), em_Val_from("connection")));
}

