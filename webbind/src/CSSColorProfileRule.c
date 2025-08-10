#include <webbind/CSSColorProfileRule.h>

DEFINE_EMLITE_TYPE(CSSColorProfileRule, CSSRule);


jb_String CSSColorProfileRule_name(const CSSColorProfileRule *self) {
    return em_Val_as(jb_String, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("name")));
}


jb_String CSSColorProfileRule_src(const CSSColorProfileRule *self) {
    return em_Val_as(jb_String, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("src")));
}


jb_String CSSColorProfileRule_renderingIntent(const CSSColorProfileRule *self) {
    return em_Val_as(jb_String, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("renderingIntent")));
}


jb_String CSSColorProfileRule_components(const CSSColorProfileRule *self) {
    return em_Val_as(jb_String, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("components")));
}

