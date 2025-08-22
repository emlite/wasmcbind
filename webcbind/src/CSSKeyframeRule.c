#include <webcbind/CSSKeyframeRule.h>

#include <webcbind/CSSStyleProperties.h>

DEFINE_EMLITE_TYPE(CSSKeyframeRule, CSSRule);


jb_String CSSKeyframeRule_keyText(const CSSKeyframeRule *self) {
    return em_Val_as(jb_String, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("keyText")));
}


void CSSKeyframeRule_set_keyText(CSSKeyframeRule* self, jb_String * value) {
    em_Val_set(CSSRule_as_val(self->inner), em_Val_from("keyText"), em_Val_from(value));
}


CSSStyleProperties CSSKeyframeRule_style(const CSSKeyframeRule *self) {
    return em_Val_as(CSSStyleProperties, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("style")));
}

