#include <webbind/CSSStyleDeclaration.h>
#include <webbind/CSSRule.h>


DEFINE_EMLITE_TYPE(CSSStyleDeclaration, em_Val);


jb_CSSOMString CSSStyleDeclaration_cssText(const CSSStyleDeclaration *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(em_Val_as_val(self->inner), "cssText"));
}


void CSSStyleDeclaration_set_cssText(CSSStyleDeclaration* self, const jb_CSSOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "cssText", value);
}


unsigned long CSSStyleDeclaration_length(const CSSStyleDeclaration *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "length"));
}


jb_CSSOMString CSSStyleDeclaration_item(CSSStyleDeclaration* self , unsigned long index) {
    return em_Val_as(jb_CSSOMString, em_Val_call(em_Val_as_val(self->inner), "item", em_Val_from(index)));
}


jb_CSSOMString CSSStyleDeclaration_getPropertyValue(CSSStyleDeclaration* self , const jb_CSSOMString* property) {
    return em_Val_as(jb_CSSOMString, em_Val_call(em_Val_as_val(self->inner), "getPropertyValue", em_Val_from(property)));
}


jb_CSSOMString CSSStyleDeclaration_getPropertyPriority(CSSStyleDeclaration* self , const jb_CSSOMString* property) {
    return em_Val_as(jb_CSSOMString, em_Val_call(em_Val_as_val(self->inner), "getPropertyPriority", em_Val_from(property)));
}


jb_Undefined CSSStyleDeclaration_setProperty(CSSStyleDeclaration* self , const jb_CSSOMString* property, const jb_CSSOMString* value) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setProperty", em_Val_from(property), em_Val_from(value)));
}


jb_Undefined CSSStyleDeclaration_setProperty(CSSStyleDeclaration* self , const jb_CSSOMString* property, const jb_CSSOMString* value, const jb_CSSOMString* priority) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setProperty", em_Val_from(property), em_Val_from(value), em_Val_from(priority)));
}


jb_CSSOMString CSSStyleDeclaration_removeProperty(CSSStyleDeclaration* self , const jb_CSSOMString* property) {
    return em_Val_as(jb_CSSOMString, em_Val_call(em_Val_as_val(self->inner), "removeProperty", em_Val_from(property)));
}


CSSRule CSSStyleDeclaration_parentRule(const CSSStyleDeclaration *self) {
    return em_Val_as(CSSRule, em_Val_get(em_Val_as_val(self->inner), "parentRule"));
}

