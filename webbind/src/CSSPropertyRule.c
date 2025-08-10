#include <webbind/CSSPropertyRule.h>

DEFINE_EMLITE_TYPE(CSSPropertyRule, CSSRule);


jb_String CSSPropertyRule_name(const CSSPropertyRule *self) {
    return em_Val_as(jb_String, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("name")));
}


jb_String CSSPropertyRule_syntax(const CSSPropertyRule *self) {
    return em_Val_as(jb_String, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("syntax")));
}


bool CSSPropertyRule_inherits(const CSSPropertyRule *self) {
    return em_Val_as(bool, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("inherits")));
}


jb_String CSSPropertyRule_initialValue(const CSSPropertyRule *self) {
    return em_Val_as(jb_String, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("initialValue")));
}

