#include <webbind/CSSScopeRule.h>


DEFINE_EMLITE_TYPE(CSSScopeRule, CSSGroupingRule);


jb_CSSOMString CSSScopeRule_start(const CSSScopeRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSGroupingRule_as_val(self->inner), "start"));
}


jb_CSSOMString CSSScopeRule_end(const CSSScopeRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSGroupingRule_as_val(self->inner), "end"));
}

