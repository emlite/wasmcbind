#include <webcbind/CSSConditionRule.h>

DEFINE_EMLITE_TYPE(CSSConditionRule, CSSGroupingRule);


jb_String CSSConditionRule_conditionText(const CSSConditionRule *self) {
    return em_Val_as(jb_String, em_Val_get(CSSGroupingRule_as_val(self->inner), em_Val_from("conditionText")));
}

