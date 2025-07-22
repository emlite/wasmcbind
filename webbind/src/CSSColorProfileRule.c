#include <webbind/CSSColorProfileRule.h>


DEFINE_EMLITE_TYPE(CSSColorProfileRule, CSSRule);


jb_CSSOMString CSSColorProfileRule_name(const CSSColorProfileRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), "name"));
}


jb_CSSOMString CSSColorProfileRule_src(const CSSColorProfileRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), "src"));
}


jb_CSSOMString CSSColorProfileRule_renderingIntent(const CSSColorProfileRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), "renderingIntent"));
}


jb_CSSOMString CSSColorProfileRule_components(const CSSColorProfileRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), "components"));
}

