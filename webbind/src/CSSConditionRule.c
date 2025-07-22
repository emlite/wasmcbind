#include <webbind/CSSConditionRule.h>


DEFINE_EMLITE_TYPE(CSSConditionRule, CSSGroupingRule);


jb_CSSOMString CSSConditionRule_conditionText(const CSSConditionRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSGroupingRule_as_val(self->inner), em_Val_from("conditionText")));
}

