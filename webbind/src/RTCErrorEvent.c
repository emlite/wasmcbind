#include <webbind/RTCErrorEvent.h>
#include <webbind/RTCError.h>


DEFINE_EMLITE_TYPE(RTCErrorEvent, Event);


RTCErrorEvent RTCErrorEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("RTCErrorEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return RTCErrorEvent(em_Val_new(em_Val_global("RTCErrorEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


RTCError RTCErrorEvent_error(const RTCErrorEvent *self) {
    return em_Val_as(RTCError, em_Val_get(Event_as_val(self->inner), "error"));
}

