#include <webbind/CSSPageRule.h>
#include <webbind/CSSPageDescriptors.h>


DEFINE_EMLITE_TYPE(CSSPageRule, CSSGroupingRule);


jb_CSSOMString CSSPageRule_selectorText(const CSSPageRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSGroupingRule_as_val(self->inner), em_Val_from("selectorText")));
}


void CSSPageRule_set_selectorText(CSSPageRule* self, jb_CSSOMString * value) {
    em_Val_set(CSSGroupingRule_as_val(self->inner), em_Val_from("selectorText"), em_Val_from(value));
}


CSSPageDescriptors CSSPageRule_style(const CSSPageRule *self) {
    return em_Val_as(CSSPageDescriptors, em_Val_get(CSSGroupingRule_as_val(self->inner), em_Val_from("style")));
}

