#include <webbind/NDEFReadingEvent.h>
#include <webbind/NDEFMessage.h>


DEFINE_EMLITE_TYPE(NDEFReadingEvent, Event);


NDEFReadingEvent NDEFReadingEvent_new(const jb_DOMString* type, const jb_Any* readingEventInitDict) : Event(em_Val_global("NDEFReadingEvent").new_(em_Val_from(type), em_Val_from(readingEventInitDict))) {
        return NDEFReadingEvent(em_Val_new(em_Val_global("NDEFReadingEvent", em_Val_from(type), em_Val_from(readingEventInitDict)));
      }


jb_DOMString NDEFReadingEvent_serialNumber(const NDEFReadingEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), "serialNumber"));
}


NDEFMessage NDEFReadingEvent_message(const NDEFReadingEvent *self) {
    return em_Val_as(NDEFMessage, em_Val_get(Event_as_val(self->inner), "message"));
}

