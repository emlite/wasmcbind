#include <webbind/CSSStyleProperties.h>


DEFINE_EMLITE_TYPE(CSSStyleProperties, CSSStyleDeclaration);


jb_CSSOMString CSSStyleProperties_cssFloat(const CSSStyleProperties *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "cssFloat"));
}


void CSSStyleProperties_set_cssFloat(CSSStyleProperties* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "cssFloat", value);
}

