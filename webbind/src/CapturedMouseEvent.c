#include <webbind/CapturedMouseEvent.h>


DEFINE_EMLITE_TYPE(CapturedMouseEvent, Event);


CapturedMouseEvent CapturedMouseEvent_new(const jb_DOMString* type) : Event(em_Val_global("CapturedMouseEvent").new_(em_Val_from(type))) {
        return CapturedMouseEvent(em_Val_new(em_Val_global("CapturedMouseEvent", em_Val_from(type)));
      }


CapturedMouseEvent CapturedMouseEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("CapturedMouseEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return CapturedMouseEvent(em_Val_new(em_Val_global("CapturedMouseEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


long CapturedMouseEvent_surfaceX(const CapturedMouseEvent *self) {
    return em_Val_as(long, em_Val_get(Event_as_val(self->inner), "surfaceX"));
}


long CapturedMouseEvent_surfaceY(const CapturedMouseEvent *self) {
    return em_Val_as(long, em_Val_get(Event_as_val(self->inner), "surfaceY"));
}

