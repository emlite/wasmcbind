#include <webbind/CSSStyleProperties.h>


DEFINE_EMLITE_TYPE(CSSStyleProperties, CSSStyleDeclaration);


jb_String CSSStyleProperties_cssFloat(const CSSStyleProperties *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("cssFloat")));
}


void CSSStyleProperties_set_cssFloat(CSSStyleProperties* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("cssFloat"), em_Val_from(value));
}

