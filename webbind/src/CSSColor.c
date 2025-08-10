#include <webbind/CSSColor.h>

DEFINE_EMLITE_TYPE(CSSColor, CSSColorValue);


CSSColor CSSColor_new0(jb_Any * colorSpace, jb_Array * channels) {
        em_Val vv = em_Val_new(em_Val_global("CSSColor") , em_Val_from(colorSpace), em_Val_from(channels));
        return CSSColor_from_val(&vv);
      }


CSSColor CSSColor_new1(jb_Any * colorSpace, jb_Array * channels, jb_Any * alpha) {
        em_Val vv = em_Val_new(em_Val_global("CSSColor") , em_Val_from(colorSpace), em_Val_from(channels), em_Val_from(alpha));
        return CSSColor_from_val(&vv);
      }


jb_Any CSSColor_colorSpace(const CSSColor *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("colorSpace")));
}


void CSSColor_set_colorSpace(CSSColor* self, jb_Any * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("colorSpace"), em_Val_from(value));
}


jb_Array CSSColor_channels(const CSSColor *self) {
    return em_Val_as(jb_Array, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("channels")));
}


void CSSColor_set_channels(CSSColor* self, jb_Array * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("channels"), em_Val_from(value));
}


jb_Any CSSColor_alpha(const CSSColor *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), em_Val_from("alpha")));
}


void CSSColor_set_alpha(CSSColor* self, jb_Any * value) {
    em_Val_set(CSSColorValue_as_val(self->inner), em_Val_from("alpha"), em_Val_from(value));
}

