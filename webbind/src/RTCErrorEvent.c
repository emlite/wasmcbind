#include <webbind/RTCErrorEvent.h>

#include <webbind/RTCErrorEventInit.h>
#include <webbind/RTCError.h>

DEFINE_EMLITE_TYPE(RTCErrorEvent, Event);


RTCErrorEvent RTCErrorEvent_new(jb_String * type, RTCErrorEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("RTCErrorEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return RTCErrorEvent_from_val(&vv);
      }


RTCError RTCErrorEvent_error(const RTCErrorEvent *self) {
    return em_Val_as(RTCError, em_Val_get(Event_as_val(self->inner), em_Val_from("error")));
}

