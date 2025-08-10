#include <webbind/CSSScopeRule.h>

DEFINE_EMLITE_TYPE(CSSScopeRule, CSSGroupingRule);


jb_String CSSScopeRule_start(const CSSScopeRule *self) {
    return em_Val_as(jb_String, em_Val_get(CSSGroupingRule_as_val(self->inner), em_Val_from("start")));
}


jb_String CSSScopeRule_end(const CSSScopeRule *self) {
    return em_Val_as(jb_String, em_Val_get(CSSGroupingRule_as_val(self->inner), em_Val_from("end")));
}

