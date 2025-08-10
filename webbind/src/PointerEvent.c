#include <webbind/PointerEvent.h>

#include <webbind/PointerEventInit.h>

DEFINE_EMLITE_TYPE(PointerEvent, MouseEvent);


PointerEvent PointerEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("PointerEvent") , em_Val_from(type));
        return PointerEvent_from_val(&vv);
      }


PointerEvent PointerEvent_new1(jb_String * type, PointerEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("PointerEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return PointerEvent_from_val(&vv);
      }


long PointerEvent_pointerId(const PointerEvent *self) {
    return em_Val_as(long, em_Val_get(MouseEvent_as_val(self->inner), em_Val_from("pointerId")));
}


double PointerEvent_width(const PointerEvent *self) {
    return em_Val_as(double, em_Val_get(MouseEvent_as_val(self->inner), em_Val_from("width")));
}


double PointerEvent_height(const PointerEvent *self) {
    return em_Val_as(double, em_Val_get(MouseEvent_as_val(self->inner), em_Val_from("height")));
}


float PointerEvent_pressure(const PointerEvent *self) {
    return em_Val_as(float, em_Val_get(MouseEvent_as_val(self->inner), em_Val_from("pressure")));
}


float PointerEvent_tangentialPressure(const PointerEvent *self) {
    return em_Val_as(float, em_Val_get(MouseEvent_as_val(self->inner), em_Val_from("tangentialPressure")));
}


long PointerEvent_tiltX(const PointerEvent *self) {
    return em_Val_as(long, em_Val_get(MouseEvent_as_val(self->inner), em_Val_from("tiltX")));
}


long PointerEvent_tiltY(const PointerEvent *self) {
    return em_Val_as(long, em_Val_get(MouseEvent_as_val(self->inner), em_Val_from("tiltY")));
}


long PointerEvent_twist(const PointerEvent *self) {
    return em_Val_as(long, em_Val_get(MouseEvent_as_val(self->inner), em_Val_from("twist")));
}


double PointerEvent_altitudeAngle(const PointerEvent *self) {
    return em_Val_as(double, em_Val_get(MouseEvent_as_val(self->inner), em_Val_from("altitudeAngle")));
}


double PointerEvent_azimuthAngle(const PointerEvent *self) {
    return em_Val_as(double, em_Val_get(MouseEvent_as_val(self->inner), em_Val_from("azimuthAngle")));
}


jb_String PointerEvent_pointerType(const PointerEvent *self) {
    return em_Val_as(jb_String, em_Val_get(MouseEvent_as_val(self->inner), em_Val_from("pointerType")));
}


bool PointerEvent_isPrimary(const PointerEvent *self) {
    return em_Val_as(bool, em_Val_get(MouseEvent_as_val(self->inner), em_Val_from("isPrimary")));
}


long PointerEvent_persistentDeviceId(const PointerEvent *self) {
    return em_Val_as(long, em_Val_get(MouseEvent_as_val(self->inner), em_Val_from("persistentDeviceId")));
}


jb_Array PointerEvent_getCoalescedEvents(PointerEvent* self ) {
    return em_Val_as(jb_Array, em_Val_call(MouseEvent_as_val(self->inner), "getCoalescedEvents"));
}


jb_Array PointerEvent_getPredictedEvents(PointerEvent* self ) {
    return em_Val_as(jb_Array, em_Val_call(MouseEvent_as_val(self->inner), "getPredictedEvents"));
}

