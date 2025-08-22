#include <webcbind/CSSGroupingRule.h>

#include <webcbind/CSSRuleList.h>

DEFINE_EMLITE_TYPE(CSSGroupingRule, CSSRule);


CSSRuleList CSSGroupingRule_cssRules(const CSSGroupingRule *self) {
    return em_Val_as(CSSRuleList, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("cssRules")));
}


unsigned long CSSGroupingRule_insertRule0(CSSGroupingRule* self , jb_String * rule) {
    return em_Val_as(unsigned long, em_Val_call(CSSRule_as_val(self->inner), "insertRule", em_Val_from(rule)));
}


unsigned long CSSGroupingRule_insertRule1(CSSGroupingRule* self , jb_String * rule, unsigned long index) {
    return em_Val_as(unsigned long, em_Val_call(CSSRule_as_val(self->inner), "insertRule", em_Val_from(rule), em_Val_from(index)));
}


jb_Undefined CSSGroupingRule_deleteRule(CSSGroupingRule* self , unsigned long index) {
    return em_Val_as(jb_Undefined, em_Val_call(CSSRule_as_val(self->inner), "deleteRule", em_Val_from(index)));
}

