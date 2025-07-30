#include <webbind/CSSViewTransitionRule.h>


DEFINE_EMLITE_TYPE(CSSViewTransitionRule, CSSRule);


jb_String CSSViewTransitionRule_navigation(const CSSViewTransitionRule *self) {
    return em_Val_as(jb_String, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("navigation")));
}


jb_Array CSSViewTransitionRule_types(const CSSViewTransitionRule *self) {
    return em_Val_as(jb_Array, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("types")));
}

