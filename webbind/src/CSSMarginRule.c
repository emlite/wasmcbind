#include <webbind/CSSMarginRule.h>
#include <webbind/CSSStyleDeclaration.h>


DEFINE_EMLITE_TYPE(CSSMarginRule, CSSRule);


jb_String CSSMarginRule_name(const CSSMarginRule *self) {
    return em_Val_as(jb_String, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("name")));
}


CSSStyleDeclaration CSSMarginRule_style(const CSSMarginRule *self) {
    return em_Val_as(CSSStyleDeclaration, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("style")));
}

