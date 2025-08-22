#include <webcbind/CSSContainerRule.h>

DEFINE_EMLITE_TYPE(CSSContainerRule, CSSConditionRule);


jb_String CSSContainerRule_containerName(const CSSContainerRule *self) {
    return em_Val_as(jb_String, em_Val_get(CSSConditionRule_as_val(self->inner), em_Val_from("containerName")));
}


jb_String CSSContainerRule_containerQuery(const CSSContainerRule *self) {
    return em_Val_as(jb_String, em_Val_get(CSSConditionRule_as_val(self->inner), em_Val_from("containerQuery")));
}

