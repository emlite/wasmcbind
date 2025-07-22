#include <webbind/CSSPositionTryRule.h>
#include <webbind/CSSPositionTryDescriptors.h>


DEFINE_EMLITE_TYPE(CSSPositionTryRule, CSSRule);


jb_CSSOMString CSSPositionTryRule_name(const CSSPositionTryRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("name")));
}


CSSPositionTryDescriptors CSSPositionTryRule_style(const CSSPositionTryRule *self) {
    return em_Val_as(CSSPositionTryDescriptors, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("style")));
}

