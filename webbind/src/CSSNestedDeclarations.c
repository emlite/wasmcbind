#include <webbind/CSSNestedDeclarations.h>
#include <webbind/CSSStyleProperties.h>


DEFINE_EMLITE_TYPE(CSSNestedDeclarations, CSSRule);


CSSStyleProperties CSSNestedDeclarations_style(const CSSNestedDeclarations *self) {
    return em_Val_as(CSSStyleProperties, em_Val_get(CSSRule_as_val(self->inner), "style"));
}

