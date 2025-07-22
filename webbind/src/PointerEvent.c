#include <webbind/PointerEvent.h>


DEFINE_EMLITE_TYPE(PointerEvent, MouseEvent);


PointerEvent PointerEvent_new(const jb_DOMString* type) : MouseEvent(em_Val_global("PointerEvent").new_(em_Val_from(type))) {
        return PointerEvent(em_Val_new(em_Val_global("PointerEvent", em_Val_from(type)));
      }


PointerEvent PointerEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : MouseEvent(em_Val_global("PointerEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return PointerEvent(em_Val_new(em_Val_global("PointerEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


long PointerEvent_pointerId(const PointerEvent *self) {
    return em_Val_as(long, em_Val_get(MouseEvent_as_val(self->inner), "pointerId"));
}


double PointerEvent_width(const PointerEvent *self) {
    return em_Val_as(double, em_Val_get(MouseEvent_as_val(self->inner), "width"));
}


double PointerEvent_height(const PointerEvent *self) {
    return em_Val_as(double, em_Val_get(MouseEvent_as_val(self->inner), "height"));
}


float PointerEvent_pressure(const PointerEvent *self) {
    return em_Val_as(float, em_Val_get(MouseEvent_as_val(self->inner), "pressure"));
}


float PointerEvent_tangentialPressure(const PointerEvent *self) {
    return em_Val_as(float, em_Val_get(MouseEvent_as_val(self->inner), "tangentialPressure"));
}


long PointerEvent_tiltX(const PointerEvent *self) {
    return em_Val_as(long, em_Val_get(MouseEvent_as_val(self->inner), "tiltX"));
}


long PointerEvent_tiltY(const PointerEvent *self) {
    return em_Val_as(long, em_Val_get(MouseEvent_as_val(self->inner), "tiltY"));
}


long PointerEvent_twist(const PointerEvent *self) {
    return em_Val_as(long, em_Val_get(MouseEvent_as_val(self->inner), "twist"));
}


double PointerEvent_altitudeAngle(const PointerEvent *self) {
    return em_Val_as(double, em_Val_get(MouseEvent_as_val(self->inner), "altitudeAngle"));
}


double PointerEvent_azimuthAngle(const PointerEvent *self) {
    return em_Val_as(double, em_Val_get(MouseEvent_as_val(self->inner), "azimuthAngle"));
}


jb_DOMString PointerEvent_pointerType(const PointerEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(MouseEvent_as_val(self->inner), "pointerType"));
}


bool PointerEvent_isPrimary(const PointerEvent *self) {
    return em_Val_as(bool, em_Val_get(MouseEvent_as_val(self->inner), "isPrimary"));
}


long PointerEvent_persistentDeviceId(const PointerEvent *self) {
    return em_Val_as(long, em_Val_get(MouseEvent_as_val(self->inner), "persistentDeviceId"));
}


jb_Sequence PointerEvent_getCoalescedEvents(PointerEvent* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(MouseEvent_as_val(self->inner), "getCoalescedEvents"));
}


jb_Sequence PointerEvent_getPredictedEvents(PointerEvent* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(MouseEvent_as_val(self->inner), "getPredictedEvents"));
}

