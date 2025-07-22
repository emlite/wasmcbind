#include <webbind/ScreenOrientation.h>


DEFINE_EMLITE_TYPE(ScreenOrientation, EventTarget);


jb_Promise ScreenOrientation_lock(ScreenOrientation* self , OrientationLockType * orientation) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "lock", em_Val_from(orientation)));
}


jb_Undefined ScreenOrientation_unlock(ScreenOrientation* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "unlock"));
}


OrientationType ScreenOrientation_type(const ScreenOrientation *self) {
    return em_Val_as(OrientationType, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("type")));
}


unsigned short ScreenOrientation_angle(const ScreenOrientation *self) {
    return em_Val_as(unsigned short, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("angle")));
}


jb_Any ScreenOrientation_onchange(const ScreenOrientation *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onchange")));
}


void ScreenOrientation_set_onchange(ScreenOrientation* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onchange"), em_Val_from(value));
}

