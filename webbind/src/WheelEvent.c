#include <webbind/WheelEvent.h>

#include <webbind/WheelEventInit.h>

DEFINE_EMLITE_TYPE(WheelEvent, MouseEvent);


WheelEvent WheelEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("WheelEvent") , em_Val_from(type));
        return WheelEvent_from_val(&vv);
      }


WheelEvent WheelEvent_new1(jb_String * type, WheelEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("WheelEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return WheelEvent_from_val(&vv);
      }


double WheelEvent_deltaX(const WheelEvent *self) {
    return em_Val_as(double, em_Val_get(MouseEvent_as_val(self->inner), em_Val_from("deltaX")));
}


double WheelEvent_deltaY(const WheelEvent *self) {
    return em_Val_as(double, em_Val_get(MouseEvent_as_val(self->inner), em_Val_from("deltaY")));
}


double WheelEvent_deltaZ(const WheelEvent *self) {
    return em_Val_as(double, em_Val_get(MouseEvent_as_val(self->inner), em_Val_from("deltaZ")));
}


unsigned long WheelEvent_deltaMode(const WheelEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(MouseEvent_as_val(self->inner), em_Val_from("deltaMode")));
}

