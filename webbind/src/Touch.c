#include <webbind/Touch.h>
#include <webbind/EventTarget.h>


DEFINE_EMLITE_TYPE(Touch, em_Val);


Touch Touch_new(jb_Any * touchInitDict) {
        em_Val vv = em_Val_new(em_Val_global("Touch") , em_Val_from(touchInitDict));
        return Touch_from_val(&vv);
      }


long Touch_identifier(const Touch *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("identifier")));
}


EventTarget Touch_target(const Touch *self) {
    return em_Val_as(EventTarget, em_Val_get(em_Val_as_val(self->inner), em_Val_from("target")));
}


double Touch_screenX(const Touch *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("screenX")));
}


double Touch_screenY(const Touch *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("screenY")));
}


double Touch_clientX(const Touch *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("clientX")));
}


double Touch_clientY(const Touch *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("clientY")));
}


double Touch_pageX(const Touch *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("pageX")));
}


double Touch_pageY(const Touch *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("pageY")));
}


float Touch_radiusX(const Touch *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("radiusX")));
}


float Touch_radiusY(const Touch *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("radiusY")));
}


float Touch_rotationAngle(const Touch *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rotationAngle")));
}


float Touch_force(const Touch *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("force")));
}


float Touch_altitudeAngle(const Touch *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("altitudeAngle")));
}


float Touch_azimuthAngle(const Touch *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("azimuthAngle")));
}


TouchType Touch_touchType(const Touch *self) {
    return em_Val_as(TouchType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("touchType")));
}

