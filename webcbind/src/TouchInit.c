#include <webcbind/TouchInit.h>

#include <webcbind/EventTarget.h>

DEFINE_EMLITE_TYPE(TouchInit, em_Val);


long TouchInit_identifier(const TouchInit *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("identifier")));
}


void TouchInit_set_identifier(TouchInit* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("identifier"), em_Val_from(value));
}


EventTarget TouchInit_target(const TouchInit *self) {
    return em_Val_as(EventTarget, em_Val_get(em_Val_as_val(self->inner), em_Val_from("target")));
}


void TouchInit_set_target(TouchInit* self, EventTarget * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("target"), em_Val_from(value));
}


double TouchInit_clientX(const TouchInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("clientX")));
}


void TouchInit_set_clientX(TouchInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("clientX"), em_Val_from(value));
}


double TouchInit_clientY(const TouchInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("clientY")));
}


void TouchInit_set_clientY(TouchInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("clientY"), em_Val_from(value));
}


double TouchInit_screenX(const TouchInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("screenX")));
}


void TouchInit_set_screenX(TouchInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("screenX"), em_Val_from(value));
}


double TouchInit_screenY(const TouchInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("screenY")));
}


void TouchInit_set_screenY(TouchInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("screenY"), em_Val_from(value));
}


double TouchInit_pageX(const TouchInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("pageX")));
}


void TouchInit_set_pageX(TouchInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("pageX"), em_Val_from(value));
}


double TouchInit_pageY(const TouchInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("pageY")));
}


void TouchInit_set_pageY(TouchInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("pageY"), em_Val_from(value));
}


float TouchInit_radiusX(const TouchInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("radiusX")));
}


void TouchInit_set_radiusX(TouchInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("radiusX"), em_Val_from(value));
}


float TouchInit_radiusY(const TouchInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("radiusY")));
}


void TouchInit_set_radiusY(TouchInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("radiusY"), em_Val_from(value));
}


float TouchInit_rotationAngle(const TouchInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rotationAngle")));
}


void TouchInit_set_rotationAngle(TouchInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rotationAngle"), em_Val_from(value));
}


float TouchInit_force(const TouchInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("force")));
}


void TouchInit_set_force(TouchInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("force"), em_Val_from(value));
}


double TouchInit_altitudeAngle(const TouchInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("altitudeAngle")));
}


void TouchInit_set_altitudeAngle(TouchInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("altitudeAngle"), em_Val_from(value));
}


double TouchInit_azimuthAngle(const TouchInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("azimuthAngle")));
}


void TouchInit_set_azimuthAngle(TouchInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("azimuthAngle"), em_Val_from(value));
}


TouchType TouchInit_touchType(const TouchInit *self) {
    return em_Val_as(TouchType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("touchType")));
}


void TouchInit_set_touchType(TouchInit* self, TouchType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("touchType"), em_Val_from(value));
}


TouchInit TouchInit_new() {
    em_Val obj = em_Val_object();
    return TouchInit_from_val(&obj);
}

