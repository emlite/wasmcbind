#include <webbind/CSSViewTransitionRule.h>


DEFINE_EMLITE_TYPE(CSSViewTransitionRule, CSSRule);


jb_CSSOMString CSSViewTransitionRule_navigation(const CSSViewTransitionRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), "navigation"));
}


jb_FrozenArray CSSViewTransitionRule_types(const CSSViewTransitionRule *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(CSSRule_as_val(self->inner), "types"));
}

