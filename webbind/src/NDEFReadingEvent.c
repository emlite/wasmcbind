#include <webbind/NDEFReadingEvent.h>

#include <webbind/NDEFReadingEventInit.h>
#include <webbind/NDEFMessage.h>

DEFINE_EMLITE_TYPE(NDEFReadingEvent, Event);


NDEFReadingEvent NDEFReadingEvent_new(jb_String * type, NDEFReadingEventInit * readingEventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("NDEFReadingEvent") , em_Val_from(type), em_Val_from(readingEventInitDict));
        return NDEFReadingEvent_from_val(&vv);
      }


jb_String NDEFReadingEvent_serialNumber(const NDEFReadingEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("serialNumber")));
}


NDEFMessage NDEFReadingEvent_message(const NDEFReadingEvent *self) {
    return em_Val_as(NDEFMessage, em_Val_get(Event_as_val(self->inner), em_Val_from("message")));
}

