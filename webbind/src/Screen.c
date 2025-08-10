#include <webbind/Screen.h>

#include <webbind/ScreenOrientation.h>

DEFINE_EMLITE_TYPE(Screen, em_Val);


long Screen_availWidth(const Screen *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("availWidth")));
}


long Screen_availHeight(const Screen *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("availHeight")));
}


long Screen_width(const Screen *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("width")));
}


long Screen_height(const Screen *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("height")));
}


unsigned long Screen_colorDepth(const Screen *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("colorDepth")));
}


unsigned long Screen_pixelDepth(const Screen *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("pixelDepth")));
}


ScreenOrientation Screen_orientation(const Screen *self) {
    return em_Val_as(ScreenOrientation, em_Val_get(em_Val_as_val(self->inner), em_Val_from("orientation")));
}


bool Screen_isExtended(const Screen *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("isExtended")));
}


jb_Any Screen_onchange(const Screen *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("onchange")));
}


void Screen_set_onchange(Screen* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("onchange"), em_Val_from(value));
}

