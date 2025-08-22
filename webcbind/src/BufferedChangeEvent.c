#include <webcbind/BufferedChangeEvent.h>

#include <webcbind/BufferedChangeEventInit.h>
#include <webcbind/TimeRanges.h>

DEFINE_EMLITE_TYPE(BufferedChangeEvent, Event);


BufferedChangeEvent BufferedChangeEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("BufferedChangeEvent") , em_Val_from(type));
        return BufferedChangeEvent_from_val(&vv);
      }


BufferedChangeEvent BufferedChangeEvent_new1(jb_String * type, BufferedChangeEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("BufferedChangeEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return BufferedChangeEvent_from_val(&vv);
      }


TimeRanges BufferedChangeEvent_addedRanges(const BufferedChangeEvent *self) {
    return em_Val_as(TimeRanges, em_Val_get(Event_as_val(self->inner), em_Val_from("addedRanges")));
}


TimeRanges BufferedChangeEvent_removedRanges(const BufferedChangeEvent *self) {
    return em_Val_as(TimeRanges, em_Val_get(Event_as_val(self->inner), em_Val_from("removedRanges")));
}

