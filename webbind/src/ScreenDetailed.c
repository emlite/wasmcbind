#include <webbind/ScreenDetailed.h>


DEFINE_EMLITE_TYPE(ScreenDetailed, Screen);


long ScreenDetailed_availLeft(const ScreenDetailed *self) {
    return em_Val_as(long, em_Val_get(Screen_as_val(self->inner), em_Val_from("availLeft")));
}


long ScreenDetailed_availTop(const ScreenDetailed *self) {
    return em_Val_as(long, em_Val_get(Screen_as_val(self->inner), em_Val_from("availTop")));
}


long ScreenDetailed_left(const ScreenDetailed *self) {
    return em_Val_as(long, em_Val_get(Screen_as_val(self->inner), em_Val_from("left")));
}


long ScreenDetailed_top(const ScreenDetailed *self) {
    return em_Val_as(long, em_Val_get(Screen_as_val(self->inner), em_Val_from("top")));
}


bool ScreenDetailed_isPrimary(const ScreenDetailed *self) {
    return em_Val_as(bool, em_Val_get(Screen_as_val(self->inner), em_Val_from("isPrimary")));
}


bool ScreenDetailed_isInternal(const ScreenDetailed *self) {
    return em_Val_as(bool, em_Val_get(Screen_as_val(self->inner), em_Val_from("isInternal")));
}


float ScreenDetailed_devicePixelRatio(const ScreenDetailed *self) {
    return em_Val_as(float, em_Val_get(Screen_as_val(self->inner), em_Val_from("devicePixelRatio")));
}


jb_String ScreenDetailed_label(const ScreenDetailed *self) {
    return em_Val_as(jb_String, em_Val_get(Screen_as_val(self->inner), em_Val_from("label")));
}

