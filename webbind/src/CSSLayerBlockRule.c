#include <webbind/CSSLayerBlockRule.h>


DEFINE_EMLITE_TYPE(CSSLayerBlockRule, CSSGroupingRule);


jb_CSSOMString CSSLayerBlockRule_name(const CSSLayerBlockRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSGroupingRule_as_val(self->inner), "name"));
}

