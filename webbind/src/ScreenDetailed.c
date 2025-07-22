#include <webbind/ScreenDetailed.h>


DEFINE_EMLITE_TYPE(ScreenDetailed, Screen);


long ScreenDetailed_availLeft(const ScreenDetailed *self) {
    return em_Val_as(long, em_Val_get(Screen_as_val(self->inner), "availLeft"));
}


long ScreenDetailed_availTop(const ScreenDetailed *self) {
    return em_Val_as(long, em_Val_get(Screen_as_val(self->inner), "availTop"));
}


long ScreenDetailed_left(const ScreenDetailed *self) {
    return em_Val_as(long, em_Val_get(Screen_as_val(self->inner), "left"));
}


long ScreenDetailed_top(const ScreenDetailed *self) {
    return em_Val_as(long, em_Val_get(Screen_as_val(self->inner), "top"));
}


bool ScreenDetailed_isPrimary(const ScreenDetailed *self) {
    return em_Val_as(bool, em_Val_get(Screen_as_val(self->inner), "isPrimary"));
}


bool ScreenDetailed_isInternal(const ScreenDetailed *self) {
    return em_Val_as(bool, em_Val_get(Screen_as_val(self->inner), "isInternal"));
}


float ScreenDetailed_devicePixelRatio(const ScreenDetailed *self) {
    return em_Val_as(float, em_Val_get(Screen_as_val(self->inner), "devicePixelRatio"));
}


jb_DOMString ScreenDetailed_label(const ScreenDetailed *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Screen_as_val(self->inner), "label"));
}

