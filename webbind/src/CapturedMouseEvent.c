#include <webbind/CapturedMouseEvent.h>


DEFINE_EMLITE_TYPE(CapturedMouseEvent, Event);


CapturedMouseEvent CapturedMouseEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("CapturedMouseEvent") , em_Val_from(type));
        return CapturedMouseEvent_from_val(&vv);
      }


CapturedMouseEvent CapturedMouseEvent_new1(jb_String * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("CapturedMouseEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return CapturedMouseEvent_from_val(&vv);
      }


long CapturedMouseEvent_surfaceX(const CapturedMouseEvent *self) {
    return em_Val_as(long, em_Val_get(Event_as_val(self->inner), em_Val_from("surfaceX")));
}


long CapturedMouseEvent_surfaceY(const CapturedMouseEvent *self) {
    return em_Val_as(long, em_Val_get(Event_as_val(self->inner), em_Val_from("surfaceY")));
}

