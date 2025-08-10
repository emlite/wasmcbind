#include <webbind/CSSStyleDeclaration.h>

#include <webbind/CSSRule.h>

DEFINE_EMLITE_TYPE(CSSStyleDeclaration, em_Val);


jb_String CSSStyleDeclaration_cssText(const CSSStyleDeclaration *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("cssText")));
}


void CSSStyleDeclaration_set_cssText(CSSStyleDeclaration* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("cssText"), em_Val_from(value));
}


unsigned long CSSStyleDeclaration_length(const CSSStyleDeclaration *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


jb_String CSSStyleDeclaration_item(CSSStyleDeclaration* self , unsigned long index) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "item", em_Val_from(index)));
}


jb_String CSSStyleDeclaration_getPropertyValue(CSSStyleDeclaration* self , jb_String * property) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "getPropertyValue", em_Val_from(property)));
}


jb_String CSSStyleDeclaration_getPropertyPriority(CSSStyleDeclaration* self , jb_String * property) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "getPropertyPriority", em_Val_from(property)));
}


jb_Undefined CSSStyleDeclaration_setProperty0(CSSStyleDeclaration* self , jb_String * property, jb_String * value) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setProperty", em_Val_from(property), em_Val_from(value)));
}


jb_Undefined CSSStyleDeclaration_setProperty1(CSSStyleDeclaration* self , jb_String * property, jb_String * value, jb_String * priority) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setProperty", em_Val_from(property), em_Val_from(value), em_Val_from(priority)));
}


jb_String CSSStyleDeclaration_removeProperty(CSSStyleDeclaration* self , jb_String * property) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "removeProperty", em_Val_from(property)));
}


CSSRule CSSStyleDeclaration_parentRule(const CSSStyleDeclaration *self) {
    return em_Val_as(CSSRule, em_Val_get(em_Val_as_val(self->inner), em_Val_from("parentRule")));
}

