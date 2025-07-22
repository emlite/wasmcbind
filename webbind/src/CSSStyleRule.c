#include <webbind/CSSStyleRule.h>
#include <webbind/CSSStyleProperties.h>
#include <webbind/StylePropertyMap.h>


DEFINE_EMLITE_TYPE(CSSStyleRule, CSSGroupingRule);


jb_CSSOMString CSSStyleRule_selectorText(const CSSStyleRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSGroupingRule_as_val(self->inner), em_Val_from("selectorText")));
}


void CSSStyleRule_set_selectorText(CSSStyleRule* self, jb_CSSOMString * value) {
    em_Val_set(CSSGroupingRule_as_val(self->inner), em_Val_from("selectorText"), em_Val_from(value));
}


CSSStyleProperties CSSStyleRule_style(const CSSStyleRule *self) {
    return em_Val_as(CSSStyleProperties, em_Val_get(CSSGroupingRule_as_val(self->inner), em_Val_from("style")));
}


StylePropertyMap CSSStyleRule_styleMap(const CSSStyleRule *self) {
    return em_Val_as(StylePropertyMap, em_Val_get(CSSGroupingRule_as_val(self->inner), em_Val_from("styleMap")));
}

