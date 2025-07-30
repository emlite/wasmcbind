#include <webbind/CSSStyleSheet.h>
#include <webbind/CSSRule.h>
#include <webbind/CSSRuleList.h>


DEFINE_EMLITE_TYPE(CSSStyleSheet, StyleSheet);


CSSStyleSheet CSSStyleSheet_new0() {
        em_Val vv = em_Val_new(em_Val_global("CSSStyleSheet") );
        return CSSStyleSheet_from_val(&vv);
      }


CSSStyleSheet CSSStyleSheet_new1(jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("CSSStyleSheet") , em_Val_from(options));
        return CSSStyleSheet_from_val(&vv);
      }


CSSRule CSSStyleSheet_ownerRule(const CSSStyleSheet *self) {
    return em_Val_as(CSSRule, em_Val_get(StyleSheet_as_val(self->inner), em_Val_from("ownerRule")));
}


CSSRuleList CSSStyleSheet_cssRules(const CSSStyleSheet *self) {
    return em_Val_as(CSSRuleList, em_Val_get(StyleSheet_as_val(self->inner), em_Val_from("cssRules")));
}


unsigned long CSSStyleSheet_insertRule0(CSSStyleSheet* self , jb_String * rule) {
    return em_Val_as(unsigned long, em_Val_call(StyleSheet_as_val(self->inner), "insertRule", em_Val_from(rule)));
}


unsigned long CSSStyleSheet_insertRule1(CSSStyleSheet* self , jb_String * rule, unsigned long index) {
    return em_Val_as(unsigned long, em_Val_call(StyleSheet_as_val(self->inner), "insertRule", em_Val_from(rule), em_Val_from(index)));
}


jb_Undefined CSSStyleSheet_deleteRule(CSSStyleSheet* self , unsigned long index) {
    return em_Val_as(jb_Undefined, em_Val_call(StyleSheet_as_val(self->inner), "deleteRule", em_Val_from(index)));
}


jb_Promise CSSStyleSheet_replace(CSSStyleSheet* self , jb_String * text) {
    return em_Val_as(jb_Promise, em_Val_call(StyleSheet_as_val(self->inner), "replace", em_Val_from(text)));
}


jb_Undefined CSSStyleSheet_replaceSync(CSSStyleSheet* self , jb_String * text) {
    return em_Val_as(jb_Undefined, em_Val_call(StyleSheet_as_val(self->inner), "replaceSync", em_Val_from(text)));
}


CSSRuleList CSSStyleSheet_rules(const CSSStyleSheet *self) {
    return em_Val_as(CSSRuleList, em_Val_get(StyleSheet_as_val(self->inner), em_Val_from("rules")));
}


long CSSStyleSheet_addRule0(CSSStyleSheet* self ) {
    return em_Val_as(long, em_Val_call(StyleSheet_as_val(self->inner), "addRule"));
}


long CSSStyleSheet_addRule1(CSSStyleSheet* self , jb_String * selector) {
    return em_Val_as(long, em_Val_call(StyleSheet_as_val(self->inner), "addRule", em_Val_from(selector)));
}


long CSSStyleSheet_addRule2(CSSStyleSheet* self , jb_String * selector, jb_String * style) {
    return em_Val_as(long, em_Val_call(StyleSheet_as_val(self->inner), "addRule", em_Val_from(selector), em_Val_from(style)));
}


long CSSStyleSheet_addRule3(CSSStyleSheet* self , jb_String * selector, jb_String * style, unsigned long index) {
    return em_Val_as(long, em_Val_call(StyleSheet_as_val(self->inner), "addRule", em_Val_from(selector), em_Val_from(style), em_Val_from(index)));
}


jb_Undefined CSSStyleSheet_removeRule0(CSSStyleSheet* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(StyleSheet_as_val(self->inner), "removeRule"));
}


jb_Undefined CSSStyleSheet_removeRule1(CSSStyleSheet* self , unsigned long index) {
    return em_Val_as(jb_Undefined, em_Val_call(StyleSheet_as_val(self->inner), "removeRule", em_Val_from(index)));
}

