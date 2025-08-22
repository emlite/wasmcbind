#include <webcbind/CSSRule.h>

#include <webcbind/CSSStyleSheet.h>

DEFINE_EMLITE_TYPE(CSSRule, em_Val);


jb_String CSSRule_cssText(const CSSRule *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("cssText")));
}


void CSSRule_set_cssText(CSSRule* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("cssText"), em_Val_from(value));
}


CSSRule CSSRule_parentRule(const CSSRule *self) {
    return em_Val_as(CSSRule, em_Val_get(em_Val_as_val(self->inner), em_Val_from("parentRule")));
}


CSSStyleSheet CSSRule_parentStyleSheet(const CSSRule *self) {
    return em_Val_as(CSSStyleSheet, em_Val_get(em_Val_as_val(self->inner), em_Val_from("parentStyleSheet")));
}


unsigned short CSSRule_type(const CSSRule *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}

