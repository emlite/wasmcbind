#include <webbind/CSSLayerStatementRule.h>


DEFINE_EMLITE_TYPE(CSSLayerStatementRule, CSSRule);


jb_FrozenArray CSSLayerStatementRule_nameList(const CSSLayerStatementRule *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("nameList")));
}

