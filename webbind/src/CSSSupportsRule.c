#include <webbind/CSSSupportsRule.h>

DEFINE_EMLITE_TYPE(CSSSupportsRule, CSSConditionRule);


bool CSSSupportsRule_matches(const CSSSupportsRule *self) {
    return em_Val_as(bool, em_Val_get(CSSConditionRule_as_val(self->inner), em_Val_from("matches")));
}

