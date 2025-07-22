#include <webbind/CSSPropertyRule.h>


DEFINE_EMLITE_TYPE(CSSPropertyRule, CSSRule);


jb_CSSOMString CSSPropertyRule_name(const CSSPropertyRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), "name"));
}


jb_CSSOMString CSSPropertyRule_syntax(const CSSPropertyRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), "syntax"));
}


bool CSSPropertyRule_inherits(const CSSPropertyRule *self) {
    return em_Val_as(bool, em_Val_get(CSSRule_as_val(self->inner), "inherits"));
}


jb_CSSOMString CSSPropertyRule_initialValue(const CSSPropertyRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), "initialValue"));
}

