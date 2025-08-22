#include <webcbind/PointerEventInit.h>

#include <webcbind/PointerEvent.h>

DEFINE_EMLITE_TYPE(PointerEventInit, MouseEventInit);


long PointerEventInit_pointerId(const PointerEventInit *self) {
    return em_Val_as(long, em_Val_get(MouseEventInit_as_val(self->inner), em_Val_from("pointerId")));
}


void PointerEventInit_set_pointerId(PointerEventInit* self, long value) {
    em_Val_set(MouseEventInit_as_val(self->inner), em_Val_from("pointerId"), em_Val_from(value));
}


double PointerEventInit_width(const PointerEventInit *self) {
    return em_Val_as(double, em_Val_get(MouseEventInit_as_val(self->inner), em_Val_from("width")));
}


void PointerEventInit_set_width(PointerEventInit* self, double value) {
    em_Val_set(MouseEventInit_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


double PointerEventInit_height(const PointerEventInit *self) {
    return em_Val_as(double, em_Val_get(MouseEventInit_as_val(self->inner), em_Val_from("height")));
}


void PointerEventInit_set_height(PointerEventInit* self, double value) {
    em_Val_set(MouseEventInit_as_val(self->inner), em_Val_from("height"), em_Val_from(value));
}


float PointerEventInit_pressure(const PointerEventInit *self) {
    return em_Val_as(float, em_Val_get(MouseEventInit_as_val(self->inner), em_Val_from("pressure")));
}


void PointerEventInit_set_pressure(PointerEventInit* self, float value) {
    em_Val_set(MouseEventInit_as_val(self->inner), em_Val_from("pressure"), em_Val_from(value));
}


float PointerEventInit_tangentialPressure(const PointerEventInit *self) {
    return em_Val_as(float, em_Val_get(MouseEventInit_as_val(self->inner), em_Val_from("tangentialPressure")));
}


void PointerEventInit_set_tangentialPressure(PointerEventInit* self, float value) {
    em_Val_set(MouseEventInit_as_val(self->inner), em_Val_from("tangentialPressure"), em_Val_from(value));
}


long PointerEventInit_tiltX(const PointerEventInit *self) {
    return em_Val_as(long, em_Val_get(MouseEventInit_as_val(self->inner), em_Val_from("tiltX")));
}


void PointerEventInit_set_tiltX(PointerEventInit* self, long value) {
    em_Val_set(MouseEventInit_as_val(self->inner), em_Val_from("tiltX"), em_Val_from(value));
}


long PointerEventInit_tiltY(const PointerEventInit *self) {
    return em_Val_as(long, em_Val_get(MouseEventInit_as_val(self->inner), em_Val_from("tiltY")));
}


void PointerEventInit_set_tiltY(PointerEventInit* self, long value) {
    em_Val_set(MouseEventInit_as_val(self->inner), em_Val_from("tiltY"), em_Val_from(value));
}


long PointerEventInit_twist(const PointerEventInit *self) {
    return em_Val_as(long, em_Val_get(MouseEventInit_as_val(self->inner), em_Val_from("twist")));
}


void PointerEventInit_set_twist(PointerEventInit* self, long value) {
    em_Val_set(MouseEventInit_as_val(self->inner), em_Val_from("twist"), em_Val_from(value));
}


double PointerEventInit_altitudeAngle(const PointerEventInit *self) {
    return em_Val_as(double, em_Val_get(MouseEventInit_as_val(self->inner), em_Val_from("altitudeAngle")));
}


void PointerEventInit_set_altitudeAngle(PointerEventInit* self, double value) {
    em_Val_set(MouseEventInit_as_val(self->inner), em_Val_from("altitudeAngle"), em_Val_from(value));
}


double PointerEventInit_azimuthAngle(const PointerEventInit *self) {
    return em_Val_as(double, em_Val_get(MouseEventInit_as_val(self->inner), em_Val_from("azimuthAngle")));
}


void PointerEventInit_set_azimuthAngle(PointerEventInit* self, double value) {
    em_Val_set(MouseEventInit_as_val(self->inner), em_Val_from("azimuthAngle"), em_Val_from(value));
}


jb_String PointerEventInit_pointerType(const PointerEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(MouseEventInit_as_val(self->inner), em_Val_from("pointerType")));
}


void PointerEventInit_set_pointerType(PointerEventInit* self, jb_String * value) {
    em_Val_set(MouseEventInit_as_val(self->inner), em_Val_from("pointerType"), em_Val_from(value));
}


bool PointerEventInit_isPrimary(const PointerEventInit *self) {
    return em_Val_as(bool, em_Val_get(MouseEventInit_as_val(self->inner), em_Val_from("isPrimary")));
}


void PointerEventInit_set_isPrimary(PointerEventInit* self, bool value) {
    em_Val_set(MouseEventInit_as_val(self->inner), em_Val_from("isPrimary"), em_Val_from(value));
}


long PointerEventInit_persistentDeviceId(const PointerEventInit *self) {
    return em_Val_as(long, em_Val_get(MouseEventInit_as_val(self->inner), em_Val_from("persistentDeviceId")));
}


void PointerEventInit_set_persistentDeviceId(PointerEventInit* self, long value) {
    em_Val_set(MouseEventInit_as_val(self->inner), em_Val_from("persistentDeviceId"), em_Val_from(value));
}


jb_Array PointerEventInit_coalescedEvents(const PointerEventInit *self) {
    return em_Val_as(jb_Array, em_Val_get(MouseEventInit_as_val(self->inner), em_Val_from("coalescedEvents")));
}


void PointerEventInit_set_coalescedEvents(PointerEventInit* self, jb_Array * value) {
    em_Val_set(MouseEventInit_as_val(self->inner), em_Val_from("coalescedEvents"), em_Val_from(value));
}


jb_Array PointerEventInit_predictedEvents(const PointerEventInit *self) {
    return em_Val_as(jb_Array, em_Val_get(MouseEventInit_as_val(self->inner), em_Val_from("predictedEvents")));
}


void PointerEventInit_set_predictedEvents(PointerEventInit* self, jb_Array * value) {
    em_Val_set(MouseEventInit_as_val(self->inner), em_Val_from("predictedEvents"), em_Val_from(value));
}


PointerEventInit PointerEventInit_new() {
    em_Val obj = em_Val_object();
    return PointerEventInit_from_val(&obj);
}

