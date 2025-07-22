#include <webbind/WheelEvent.h>


DEFINE_EMLITE_TYPE(WheelEvent, MouseEvent);


WheelEvent WheelEvent_new(const jb_DOMString* type) : MouseEvent(em_Val_global("WheelEvent").new_(em_Val_from(type))) {
        return WheelEvent(em_Val_new(em_Val_global("WheelEvent", em_Val_from(type)));
      }


WheelEvent WheelEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : MouseEvent(em_Val_global("WheelEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return WheelEvent(em_Val_new(em_Val_global("WheelEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


double WheelEvent_deltaX(const WheelEvent *self) {
    return em_Val_as(double, em_Val_get(MouseEvent_as_val(self->inner), "deltaX"));
}


double WheelEvent_deltaY(const WheelEvent *self) {
    return em_Val_as(double, em_Val_get(MouseEvent_as_val(self->inner), "deltaY"));
}


double WheelEvent_deltaZ(const WheelEvent *self) {
    return em_Val_as(double, em_Val_get(MouseEvent_as_val(self->inner), "deltaZ"));
}


unsigned long WheelEvent_deltaMode(const WheelEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(MouseEvent_as_val(self->inner), "deltaMode"));
}

