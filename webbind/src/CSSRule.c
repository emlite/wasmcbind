#include <webbind/CSSRule.h>
#include <webbind/CSSStyleSheet.h>


DEFINE_EMLITE_TYPE(CSSRule, em_Val);


jb_CSSOMString CSSRule_cssText(const CSSRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(em_Val_as_val(self->inner), "cssText"));
}


void CSSRule_set_cssText(CSSRule* self, const jb_CSSOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "cssText", value);
}


CSSRule CSSRule_parentRule(const CSSRule *self) {
    return em_Val_as(CSSRule, em_Val_get(em_Val_as_val(self->inner), "parentRule"));
}


CSSStyleSheet CSSRule_parentStyleSheet(const CSSRule *self) {
    return em_Val_as(CSSStyleSheet, em_Val_get(em_Val_as_val(self->inner), "parentStyleSheet"));
}


unsigned short CSSRule_type(const CSSRule *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "type"));
}

