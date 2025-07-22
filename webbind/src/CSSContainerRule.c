#include <webbind/CSSContainerRule.h>


DEFINE_EMLITE_TYPE(CSSContainerRule, CSSConditionRule);


jb_CSSOMString CSSContainerRule_containerName(const CSSContainerRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSConditionRule_as_val(self->inner), "containerName"));
}


jb_CSSOMString CSSContainerRule_containerQuery(const CSSContainerRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSConditionRule_as_val(self->inner), "containerQuery"));
}

