#include <webbind/CSSStyleRule.h>
#include <webbind/CSSStyleProperties.h>
#include <webbind/StylePropertyMap.h>


DEFINE_EMLITE_TYPE(CSSStyleRule, CSSGroupingRule);


jb_CSSOMString CSSStyleRule_selectorText(const CSSStyleRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSGroupingRule_as_val(self->inner), "selectorText"));
}


void CSSStyleRule_set_selectorText(CSSStyleRule* self, const jb_CSSOMString* value) {
    em_Val_set(CSSGroupingRule_as_val(self->inner), "selectorText", value);
}


CSSStyleProperties CSSStyleRule_style(const CSSStyleRule *self) {
    return em_Val_as(CSSStyleProperties, em_Val_get(CSSGroupingRule_as_val(self->inner), "style"));
}


StylePropertyMap CSSStyleRule_styleMap(const CSSStyleRule *self) {
    return em_Val_as(StylePropertyMap, em_Val_get(CSSGroupingRule_as_val(self->inner), "styleMap"));
}

