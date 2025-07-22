#include <webbind/CaptureActionEvent.h>


DEFINE_EMLITE_TYPE(CaptureActionEvent, Event);


CaptureActionEvent CaptureActionEvent_new() : Event(em_Val_global("CaptureActionEvent").new_()) {
        return CaptureActionEvent(em_Val_new(em_Val_global("CaptureActionEvent", ));
      }


CaptureActionEvent CaptureActionEvent_new(const jb_Any* init) : Event(em_Val_global("CaptureActionEvent").new_(em_Val_from(init))) {
        return CaptureActionEvent(em_Val_new(em_Val_global("CaptureActionEvent", em_Val_from(init)));
      }


CaptureAction CaptureActionEvent_action(const CaptureActionEvent *self) {
    return em_Val_as(CaptureAction, em_Val_get(Event_as_val(self->inner), "action"));
}

