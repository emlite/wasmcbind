#include <webbind/CSSStyleSheet.h>
#include <webbind/CSSRule.h>
#include <webbind/CSSRuleList.h>


DEFINE_EMLITE_TYPE(CSSStyleSheet, StyleSheet);


CSSStyleSheet CSSStyleSheet_new() : StyleSheet(em_Val_global("CSSStyleSheet").new_()) {
        return CSSStyleSheet(em_Val_new(em_Val_global("CSSStyleSheet", ));
      }


CSSStyleSheet CSSStyleSheet_new(const jb_Any* options) : StyleSheet(em_Val_global("CSSStyleSheet").new_(em_Val_from(options))) {
        return CSSStyleSheet(em_Val_new(em_Val_global("CSSStyleSheet", em_Val_from(options)));
      }


CSSRule CSSStyleSheet_ownerRule(const CSSStyleSheet *self) {
    return em_Val_as(CSSRule, em_Val_get(StyleSheet_as_val(self->inner), "ownerRule"));
}


CSSRuleList CSSStyleSheet_cssRules(const CSSStyleSheet *self) {
    return em_Val_as(CSSRuleList, em_Val_get(StyleSheet_as_val(self->inner), "cssRules"));
}


unsigned long CSSStyleSheet_insertRule(CSSStyleSheet* self , const jb_CSSOMString* rule) {
    return em_Val_as(unsigned long, em_Val_call(StyleSheet_as_val(self->inner), "insertRule", em_Val_from(rule)));
}


unsigned long CSSStyleSheet_insertRule(CSSStyleSheet* self , const jb_CSSOMString* rule, unsigned long index) {
    return em_Val_as(unsigned long, em_Val_call(StyleSheet_as_val(self->inner), "insertRule", em_Val_from(rule), em_Val_from(index)));
}


jb_Undefined CSSStyleSheet_deleteRule(CSSStyleSheet* self , unsigned long index) {
    return em_Val_as(jb_Undefined, em_Val_call(StyleSheet_as_val(self->inner), "deleteRule", em_Val_from(index)));
}


jb_Promise CSSStyleSheet_replace(CSSStyleSheet* self , const jb_USVString* text) {
    return em_Val_as(jb_Promise, em_Val_call(StyleSheet_as_val(self->inner), "replace", em_Val_from(text)));
}


jb_Undefined CSSStyleSheet_replaceSync(CSSStyleSheet* self , const jb_USVString* text) {
    return em_Val_as(jb_Undefined, em_Val_call(StyleSheet_as_val(self->inner), "replaceSync", em_Val_from(text)));
}


CSSRuleList CSSStyleSheet_rules(const CSSStyleSheet *self) {
    return em_Val_as(CSSRuleList, em_Val_get(StyleSheet_as_val(self->inner), "rules"));
}


long CSSStyleSheet_addRule(CSSStyleSheet* self ) {
    return em_Val_as(long, em_Val_call(StyleSheet_as_val(self->inner), "addRule"));
}


long CSSStyleSheet_addRule(CSSStyleSheet* self , const jb_DOMString* selector) {
    return em_Val_as(long, em_Val_call(StyleSheet_as_val(self->inner), "addRule", em_Val_from(selector)));
}


long CSSStyleSheet_addRule(CSSStyleSheet* self , const jb_DOMString* selector, const jb_DOMString* style) {
    return em_Val_as(long, em_Val_call(StyleSheet_as_val(self->inner), "addRule", em_Val_from(selector), em_Val_from(style)));
}


long CSSStyleSheet_addRule(CSSStyleSheet* self , const jb_DOMString* selector, const jb_DOMString* style, unsigned long index) {
    return em_Val_as(long, em_Val_call(StyleSheet_as_val(self->inner), "addRule", em_Val_from(selector), em_Val_from(style), em_Val_from(index)));
}


jb_Undefined CSSStyleSheet_removeRule(CSSStyleSheet* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(StyleSheet_as_val(self->inner), "removeRule"));
}


jb_Undefined CSSStyleSheet_removeRule(CSSStyleSheet* self , unsigned long index) {
    return em_Val_as(jb_Undefined, em_Val_call(StyleSheet_as_val(self->inner), "removeRule", em_Val_from(index)));
}

