#include <webbind/Touch.h>
#include <webbind/EventTarget.h>


DEFINE_EMLITE_TYPE(Touch, em_Val);


Touch Touch_new(const jb_Any* touchInitDict) : em_Val(em_Val_global("Touch").new_(em_Val_from(touchInitDict))) {
        return Touch(em_Val_new(em_Val_global("Touch", em_Val_from(touchInitDict)));
      }


long Touch_identifier(const Touch *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), "identifier"));
}


EventTarget Touch_target(const Touch *self) {
    return em_Val_as(EventTarget, em_Val_get(em_Val_as_val(self->inner), "target"));
}


double Touch_screenX(const Touch *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "screenX"));
}


double Touch_screenY(const Touch *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "screenY"));
}


double Touch_clientX(const Touch *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "clientX"));
}


double Touch_clientY(const Touch *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "clientY"));
}


double Touch_pageX(const Touch *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "pageX"));
}


double Touch_pageY(const Touch *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "pageY"));
}


float Touch_radiusX(const Touch *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "radiusX"));
}


float Touch_radiusY(const Touch *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "radiusY"));
}


float Touch_rotationAngle(const Touch *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "rotationAngle"));
}


float Touch_force(const Touch *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "force"));
}


float Touch_altitudeAngle(const Touch *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "altitudeAngle"));
}


float Touch_azimuthAngle(const Touch *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "azimuthAngle"));
}


TouchType Touch_touchType(const Touch *self) {
    return em_Val_as(TouchType, em_Val_get(em_Val_as_val(self->inner), "touchType"));
}

