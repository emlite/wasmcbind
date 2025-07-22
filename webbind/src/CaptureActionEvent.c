#include <webbind/CaptureActionEvent.h>


DEFINE_EMLITE_TYPE(CaptureActionEvent, Event);


CaptureActionEvent CaptureActionEvent_new0() {
        em_Val vv = em_Val_new(em_Val_global("CaptureActionEvent") );
        return CaptureActionEvent_from_val(&vv);
      }


CaptureActionEvent CaptureActionEvent_new1(jb_Any * init) {
        em_Val vv = em_Val_new(em_Val_global("CaptureActionEvent") , em_Val_from(init));
        return CaptureActionEvent_from_val(&vv);
      }


CaptureAction CaptureActionEvent_action(const CaptureActionEvent *self) {
    return em_Val_as(CaptureAction, em_Val_get(Event_as_val(self->inner), em_Val_from("action")));
}

