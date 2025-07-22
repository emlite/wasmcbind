#include <webbind/CSSStyleDeclaration.h>
#include <webbind/CSSRule.h>


DEFINE_EMLITE_TYPE(CSSStyleDeclaration, em_Val);


jb_CSSOMString CSSStyleDeclaration_cssText(const CSSStyleDeclaration *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("cssText")));
}


void CSSStyleDeclaration_set_cssText(CSSStyleDeclaration* self, jb_CSSOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("cssText"), em_Val_from(value));
}


unsigned long CSSStyleDeclaration_length(const CSSStyleDeclaration *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


jb_CSSOMString CSSStyleDeclaration_item(CSSStyleDeclaration* self , unsigned long index) {
    return em_Val_as(jb_CSSOMString, em_Val_call(em_Val_as_val(self->inner), "item", em_Val_from(index)));
}


jb_CSSOMString CSSStyleDeclaration_getPropertyValue(CSSStyleDeclaration* self , jb_CSSOMString * property) {
    return em_Val_as(jb_CSSOMString, em_Val_call(em_Val_as_val(self->inner), "getPropertyValue", em_Val_from(property)));
}


jb_CSSOMString CSSStyleDeclaration_getPropertyPriority(CSSStyleDeclaration* self , jb_CSSOMString * property) {
    return em_Val_as(jb_CSSOMString, em_Val_call(em_Val_as_val(self->inner), "getPropertyPriority", em_Val_from(property)));
}


jb_Undefined CSSStyleDeclaration_setProperty0(CSSStyleDeclaration* self , jb_CSSOMString * property, jb_CSSOMString * value) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setProperty", em_Val_from(property), em_Val_from(value)));
}


jb_Undefined CSSStyleDeclaration_setProperty1(CSSStyleDeclaration* self , jb_CSSOMString * property, jb_CSSOMString * value, jb_CSSOMString * priority) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setProperty", em_Val_from(property), em_Val_from(value), em_Val_from(priority)));
}


jb_CSSOMString CSSStyleDeclaration_removeProperty(CSSStyleDeclaration* self , jb_CSSOMString * property) {
    return em_Val_as(jb_CSSOMString, em_Val_call(em_Val_as_val(self->inner), "removeProperty", em_Val_from(property)));
}


CSSRule CSSStyleDeclaration_parentRule(const CSSStyleDeclaration *self) {
    return em_Val_as(CSSRule, em_Val_get(em_Val_as_val(self->inner), em_Val_from("parentRule")));
}

