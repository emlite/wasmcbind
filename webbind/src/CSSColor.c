#include <webbind/CSSColor.h>


DEFINE_EMLITE_TYPE(CSSColor, CSSColorValue);


CSSColor CSSColor_new(const jb_Any* colorSpace, const jb_Sequence* channels) : CSSColorValue(em_Val_global("CSSColor").new_(em_Val_from(colorSpace), em_Val_from(channels))) {
        return CSSColor(em_Val_new(em_Val_global("CSSColor", em_Val_from(colorSpace), em_Val_from(channels)));
      }


CSSColor CSSColor_new(const jb_Any* colorSpace, const jb_Sequence* channels, const jb_Any* alpha) : CSSColorValue(em_Val_global("CSSColor").new_(em_Val_from(colorSpace), em_Val_from(channels), em_Val_from(alpha))) {
        return CSSColor(em_Val_new(em_Val_global("CSSColor", em_Val_from(colorSpace), em_Val_from(channels), em_Val_from(alpha)));
      }


jb_Any CSSColor_colorSpace(const CSSColor *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), "colorSpace"));
}


void CSSColor_set_colorSpace(CSSColor* self, const jb_Any* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "colorSpace", value);
}


jb_ObservableArray CSSColor_channels(const CSSColor *self) {
    return em_Val_as(jb_ObservableArray, em_Val_get(CSSColorValue_as_val(self->inner), "channels"));
}


void CSSColor_set_channels(CSSColor* self, const jb_ObservableArray* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "channels", value);
}


jb_Any CSSColor_alpha(const CSSColor *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSColorValue_as_val(self->inner), "alpha"));
}


void CSSColor_set_alpha(CSSColor* self, const jb_Any* value) {
    em_Val_set(CSSColorValue_as_val(self->inner), "alpha", value);
}

