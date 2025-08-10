#include <webbind/TrustedTypePolicyFactory.h>

#include <webbind/TrustedTypePolicy.h>
#include <webbind/TrustedTypePolicyOptions.h>
#include <webbind/TrustedHTML.h>
#include <webbind/TrustedScript.h>

DEFINE_EMLITE_TYPE(TrustedTypePolicyFactory, em_Val);


TrustedTypePolicy TrustedTypePolicyFactory_createPolicy0(TrustedTypePolicyFactory* self , jb_String * policyName) {
    return em_Val_as(TrustedTypePolicy, em_Val_call(em_Val_as_val(self->inner), "createPolicy", em_Val_from(policyName)));
}


TrustedTypePolicy TrustedTypePolicyFactory_createPolicy1(TrustedTypePolicyFactory* self , jb_String * policyName, TrustedTypePolicyOptions * policyOptions) {
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


jb_String TrustedTypePolicyFactory_getAttributeType0(TrustedTypePolicyFactory* self , jb_String * tagName, jb_String * attribute) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "getAttributeType", em_Val_from(tagName), em_Val_from(attribute)));
}


jb_String TrustedTypePolicyFactory_getAttributeType1(TrustedTypePolicyFactory* self , jb_String * tagName, jb_String * attribute, jb_String * elementNs) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "getAttributeType", em_Val_from(tagName), em_Val_from(attribute), em_Val_from(elementNs)));
}


jb_String TrustedTypePolicyFactory_getAttributeType2(TrustedTypePolicyFactory* self , jb_String * tagName, jb_String * attribute, jb_String * elementNs, jb_String * attrNs) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "getAttributeType", em_Val_from(tagName), em_Val_from(attribute), em_Val_from(elementNs), em_Val_from(attrNs)));
}


jb_String TrustedTypePolicyFactory_getPropertyType0(TrustedTypePolicyFactory* self , jb_String * tagName, jb_String * property) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "getPropertyType", em_Val_from(tagName), em_Val_from(property)));
}


jb_String TrustedTypePolicyFactory_getPropertyType1(TrustedTypePolicyFactory* self , jb_String * tagName, jb_String * property, jb_String * elementNs) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "getPropertyType", em_Val_from(tagName), em_Val_from(property), em_Val_from(elementNs)));
}


TrustedTypePolicy TrustedTypePolicyFactory_defaultPolicy(const TrustedTypePolicyFactory *self) {
    return em_Val_as(TrustedTypePolicy, em_Val_get(em_Val_as_val(self->inner), em_Val_from("defaultPolicy")));
}

