#include <webbind/TrustedTypePolicyFactory.h>
#include <webbind/TrustedTypePolicy.h>
#include <webbind/TrustedHTML.h>
#include <webbind/TrustedScript.h>


DEFINE_EMLITE_TYPE(TrustedTypePolicyOptions, em_Val);


jb_Function TrustedTypePolicyOptions_createHTML(const TrustedTypePolicyOptions *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("createHTML")));
}


void TrustedTypePolicyOptions_set_createHTML(TrustedTypePolicyOptions* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("createHTML"), em_Val_from(value));
}


jb_Function TrustedTypePolicyOptions_createScript(const TrustedTypePolicyOptions *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("createScript")));
}


void TrustedTypePolicyOptions_set_createScript(TrustedTypePolicyOptions* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("createScript"), em_Val_from(value));
}


jb_Function TrustedTypePolicyOptions_createScriptURL(const TrustedTypePolicyOptions *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("createScriptURL")));
}


void TrustedTypePolicyOptions_set_createScriptURL(TrustedTypePolicyOptions* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("createScriptURL"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(TrustedTypePolicyFactory, em_Val);


TrustedTypePolicy TrustedTypePolicyFactory_createPolicy0(TrustedTypePolicyFactory* self , jb_DOMString * policyName) {
    return em_Val_as(TrustedTypePolicy, em_Val_call(em_Val_as_val(self->inner), "createPolicy", em_Val_from(policyName)));
}


TrustedTypePolicy TrustedTypePolicyFactory_createPolicy1(TrustedTypePolicyFactory* self , jb_DOMString * policyName, TrustedTypePolicyOptions * policyOptions) {
    return em_Val_as(TrustedTypePolicy, em_Val_call(em_Val_as_val(self->inner), "createPolicy", em_Val_from(policyName), em_Val_from(policyOptions)));
}


bool TrustedTypePolicyFactory_isHTML(TrustedTypePolicyFactory* self , jb_Any * value) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "isHTML", em_Val_from(value)));
}


bool TrustedTypePolicyFactory_isScript(TrustedTypePolicyFactory* self , jb_Any * value) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "isScript", em_Val_from(value)));
}


bool TrustedTypePolicyFactory_isScriptURL(TrustedTypePolicyFactory* self , jb_Any * value) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "isScriptURL", em_Val_from(value)));
}


TrustedHTML TrustedTypePolicyFactory_emptyHTML(const TrustedTypePolicyFactory *self) {
    return em_Val_as(TrustedHTML, em_Val_get(em_Val_as_val(self->inner), em_Val_from("emptyHTML")));
}


TrustedScript TrustedTypePolicyFactory_emptyScript(const TrustedTypePolicyFactory *self) {
    return em_Val_as(TrustedScript, em_Val_get(em_Val_as_val(self->inner), em_Val_from("emptyScript")));
}


jb_DOMString TrustedTypePolicyFactory_getAttributeType0(TrustedTypePolicyFactory* self , jb_DOMString * tagName, jb_DOMString * attribute) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "getAttributeType", em_Val_from(tagName), em_Val_from(attribute)));
}


jb_DOMString TrustedTypePolicyFactory_getAttributeType1(TrustedTypePolicyFactory* self , jb_DOMString * tagName, jb_DOMString * attribute, jb_DOMString * elementNs) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "getAttributeType", em_Val_from(tagName), em_Val_from(attribute), em_Val_from(elementNs)));
}


jb_DOMString TrustedTypePolicyFactory_getAttributeType2(TrustedTypePolicyFactory* self , jb_DOMString * tagName, jb_DOMString * attribute, jb_DOMString * elementNs, jb_DOMString * attrNs) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "getAttributeType", em_Val_from(tagName), em_Val_from(attribute), em_Val_from(elementNs), em_Val_from(attrNs)));
}


jb_DOMString TrustedTypePolicyFactory_getPropertyType0(TrustedTypePolicyFactory* self , jb_DOMString * tagName, jb_DOMString * property) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "getPropertyType", em_Val_from(tagName), em_Val_from(property)));
}


jb_DOMString TrustedTypePolicyFactory_getPropertyType1(TrustedTypePolicyFactory* self , jb_DOMString * tagName, jb_DOMString * property, jb_DOMString * elementNs) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "getPropertyType", em_Val_from(tagName), em_Val_from(property), em_Val_from(elementNs)));
}


TrustedTypePolicy TrustedTypePolicyFactory_defaultPolicy(const TrustedTypePolicyFactory *self) {
    return em_Val_as(TrustedTypePolicy, em_Val_get(em_Val_as_val(self->inner), em_Val_from("defaultPolicy")));
}

