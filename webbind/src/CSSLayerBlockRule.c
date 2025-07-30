#include <webbind/CSSLayerBlockRule.h>


DEFINE_EMLITE_TYPE(CSSLayerBlockRule, CSSGroupingRule);


jb_String CSSLayerBlockRule_name(const CSSLayerBlockRule *self) {
    return em_Val_as(jb_String, em_Val_get(CSSGroupingRule_as_val(self->inner), em_Val_from("name")));
}

