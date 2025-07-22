#include <webbind/BufferedChangeEvent.h>
#include <webbind/TimeRanges.h>


DEFINE_EMLITE_TYPE(BufferedChangeEvent, Event);


BufferedChangeEvent BufferedChangeEvent_new(const jb_DOMString* type) : Event(em_Val_global("BufferedChangeEvent").new_(em_Val_from(type))) {
        return BufferedChangeEvent(em_Val_new(em_Val_global("BufferedChangeEvent", em_Val_from(type)));
      }


BufferedChangeEvent BufferedChangeEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("BufferedChangeEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return BufferedChangeEvent(em_Val_new(em_Val_global("BufferedChangeEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


TimeRanges BufferedChangeEvent_addedRanges(const BufferedChangeEvent *self) {
    return em_Val_as(TimeRanges, em_Val_get(Event_as_val(self->inner), "addedRanges"));
}


TimeRanges BufferedChangeEvent_removedRanges(const BufferedChangeEvent *self) {
    return em_Val_as(TimeRanges, em_Val_get(Event_as_val(self->inner), "removedRanges"));
}

