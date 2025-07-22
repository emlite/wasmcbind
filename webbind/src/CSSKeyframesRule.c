#include <webbind/CSSKeyframesRule.h>
#include <webbind/CSSRuleList.h>
#include <webbind/CSSKeyframeRule.h>


DEFINE_EMLITE_TYPE(CSSKeyframesRule, CSSRule);


jb_CSSOMString CSSKeyframesRule_name(const CSSKeyframesRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), "name"));
}


void CSSKeyframesRule_set_name(CSSKeyframesRule* self, const jb_CSSOMString* value) {
    em_Val_set(CSSRule_as_val(self->inner), "name", value);
}


CSSRuleList CSSKeyframesRule_cssRules(const CSSKeyframesRule *self) {
    return em_Val_as(CSSRuleList, em_Val_get(CSSRule_as_val(self->inner), "cssRules"));
}


unsigned long CSSKeyframesRule_length(const CSSKeyframesRule *self) {
    return em_Val_as(unsigned long, em_Val_get(CSSRule_as_val(self->inner), "length"));
}


jb_Undefined CSSKeyframesRule_appendRule(CSSKeyframesRule* self , const jb_CSSOMString* rule) {
    return em_Val_as(jb_Undefined, em_Val_call(CSSRule_as_val(self->inner), "appendRule", em_Val_from(rule)));
}


jb_Undefined CSSKeyframesRule_deleteRule(CSSKeyframesRule* self , const jb_CSSOMString* select) {
    return em_Val_as(jb_Undefined, em_Val_call(CSSRule_as_val(self->inner), "deleteRule", em_Val_from(select)));
}


CSSKeyframeRule CSSKeyframesRule_findRule(CSSKeyframesRule* self , const jb_CSSOMString* select) {
    return em_Val_as(CSSKeyframeRule, em_Val_call(CSSRule_as_val(self->inner), "findRule", em_Val_from(select)));
}

