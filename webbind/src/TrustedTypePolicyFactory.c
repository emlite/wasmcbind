#include <webbind/TrustedTypePolicyFactory.h>
#include <webbind/TrustedTypePolicy.h>
#include <webbind/TrustedHTML.h>
#include <webbind/TrustedScript.h>


DEFINE_EMLITE_TYPE(TrustedTypePolicyOptions, em_Val);


jb_Function TrustedTypePolicyOptions_createHTML(const TrustedTypePolicyOptions *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), "createHTML"));
}


void TrustedTypePolicyOptions_set_createHTML(TrustedTypePolicyOptions* self, const jb_Function* value) {
    em_Val_set(em_Val_as_val(self->inner), "createHTML", value);
}


jb_Function TrustedTypePolicyOptions_createScript(const TrustedTypePolicyOptions *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), "createScript"));
}


void TrustedTypePolicyOptions_set_createScript(TrustedTypePolicyOptions* self, const jb_Function* value) {
    em_Val_set(em_Val_as_val(self->inner), "createScript", value);
}


jb_Function TrustedTypePolicyOptions_createScriptURL(const TrustedTypePolicyOptions *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), "createScriptURL"));
}


void TrustedTypePolicyOptions_set_createScriptURL(TrustedTypePolicyOptions* self, const jb_Function* value) {
    em_Val_set(em_Val_as_val(self->inner), "createScriptURL", value);
}

DEFINE_EMLITE_TYPE(TrustedTypePolicyFactory, em_Val);


TrustedTypePolicy TrustedTypePolicyFactory_createPolicy(TrustedTypePolicyFactory* self , const jb_DOMString* policyName) {
    return em_Val_as(TrustedTypePolicy, em_Val_call(em_Val_as_val(self->inner), "createPolicy", em_Val_from(policyName)));
}


TrustedTypePolicy TrustedTypePolicyFactory_createPolicy(TrustedTypePolicyFactory* self , const jb_DOMString* policyName, const TrustedTypePolicyOptions* policyOptions) {
    return em_Val_as(TrustedTypePolicy, em_Val_call(em_Val_as_val(self->inner), "createPolicy", em_Val_from(policyName), em_Val_from(policyOptions)));
}


bool TrustedTypePolicyFactory_isHTML(TrustedTypePolicyFactory* self , const jb_Any* value) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "isHTML", em_Val_from(value)));
}


bool TrustedTypePolicyFactory_isScript(TrustedTypePolicyFactory* self , const jb_Any* value) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "isScript", em_Val_from(value)));
}


bool TrustedTypePolicyFactory_isScriptURL(TrustedTypePolicyFactory* self , const jb_Any* value) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "isScriptURL", em_Val_from(value)));
}


TrustedHTML TrustedTypePolicyFactory_emptyHTML(const TrustedTypePolicyFactory *self) {
    return em_Val_as(TrustedHTML, em_Val_get(em_Val_as_val(self->inner), "emptyHTML"));
}


TrustedScript TrustedTypePolicyFactory_emptyScript(const TrustedTypePolicyFactory *self) {
    return em_Val_as(TrustedScript, em_Val_get(em_Val_as_val(self->inner), "emptyScript"));
}


jb_DOMString TrustedTypePolicyFactory_getAttributeType(TrustedTypePolicyFactory* self , const jb_DOMString* tagName, const jb_DOMString* attribute) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "getAttributeType", em_Val_from(tagName), em_Val_from(attribute)));
}


jb_DOMString TrustedTypePolicyFactory_getAttributeType(TrustedTypePolicyFactory* self , const jb_DOMString* tagName, const jb_DOMString* attribute, const jb_DOMString* elementNs) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "getAttributeType", em_Val_from(tagName), em_Val_from(attribute), em_Val_from(elementNs)));
}


jb_DOMString TrustedTypePolicyFactory_getAttributeType(TrustedTypePolicyFactory* self , const jb_DOMString* tagName, const jb_DOMString* attribute, const jb_DOMString* elementNs, const jb_DOMString* attrNs) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "getAttributeType", em_Val_from(tagName), em_Val_from(attribute), em_Val_from(elementNs), em_Val_from(attrNs)));
}


jb_DOMString TrustedTypePolicyFactory_getPropertyType(TrustedTypePolicyFactory* self , const jb_DOMString* tagName, const jb_DOMString* property) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "getPropertyType", em_Val_from(tagName), em_Val_from(property)));
}


jb_DOMString TrustedTypePolicyFactory_getPropertyType(TrustedTypePolicyFactory* self , const jb_DOMString* tagName, const jb_DOMString* property, const jb_DOMString* elementNs) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "getPropertyType", em_Val_from(tagName), em_Val_from(property), em_Val_from(elementNs)));
}


TrustedTypePolicy TrustedTypePolicyFactory_defaultPolicy(const TrustedTypePolicyFactory *self) {
    return em_Val_as(TrustedTypePolicy, em_Val_get(em_Val_as_val(self->inner), "defaultPolicy"));
}

