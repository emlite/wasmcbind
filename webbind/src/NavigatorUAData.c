#include <webbind/NavigatorUAData.h>


DEFINE_EMLITE_TYPE(NavigatorUABrandVersion, em_Val);


jb_DOMString NavigatorUABrandVersion_brand(const NavigatorUABrandVersion *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "brand"));
}


void NavigatorUABrandVersion_set_brand(NavigatorUABrandVersion* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "brand", value);
}


jb_DOMString NavigatorUABrandVersion_version(const NavigatorUABrandVersion *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "version"));
}


void NavigatorUABrandVersion_set_version(NavigatorUABrandVersion* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "version", value);
}

DEFINE_EMLITE_TYPE(UADataValues, em_Val);


jb_DOMString UADataValues_architecture(const UADataValues *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "architecture"));
}


void UADataValues_set_architecture(UADataValues* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "architecture", value);
}


jb_DOMString UADataValues_bitness(const UADataValues *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "bitness"));
}


void UADataValues_set_bitness(UADataValues* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "bitness", value);
}


jb_Sequence UADataValues_brands(const UADataValues *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "brands"));
}


void UADataValues_set_brands(UADataValues* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "brands", value);
}


jb_Sequence UADataValues_formFactors(const UADataValues *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "formFactors"));
}


void UADataValues_set_formFactors(UADataValues* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "formFactors", value);
}


jb_Sequence UADataValues_fullVersionList(const UADataValues *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "fullVersionList"));
}


void UADataValues_set_fullVersionList(UADataValues* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "fullVersionList", value);
}


jb_DOMString UADataValues_model(const UADataValues *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "model"));
}


void UADataValues_set_model(UADataValues* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "model", value);
}


bool UADataValues_mobile(const UADataValues *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "mobile"));
}


void UADataValues_set_mobile(UADataValues* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "mobile", value);
}


jb_DOMString UADataValues_platform(const UADataValues *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "platform"));
}


void UADataValues_set_platform(UADataValues* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "platform", value);
}


jb_DOMString UADataValues_platformVersion(const UADataValues *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "platformVersion"));
}


void UADataValues_set_platformVersion(UADataValues* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "platformVersion", value);
}


jb_DOMString UADataValues_uaFullVersion(const UADataValues *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "uaFullVersion"));
}


void UADataValues_set_uaFullVersion(UADataValues* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "uaFullVersion", value);
}


bool UADataValues_wow64(const UADataValues *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "wow64"));
}


void UADataValues_set_wow64(UADataValues* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "wow64", value);
}

DEFINE_EMLITE_TYPE(UALowEntropyJSON, em_Val);


jb_Sequence UALowEntropyJSON_brands(const UALowEntropyJSON *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "brands"));
}


void UALowEntropyJSON_set_brands(UALowEntropyJSON* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "brands", value);
}


bool UALowEntropyJSON_mobile(const UALowEntropyJSON *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "mobile"));
}


void UALowEntropyJSON_set_mobile(UALowEntropyJSON* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "mobile", value);
}


jb_DOMString UALowEntropyJSON_platform(const UALowEntropyJSON *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "platform"));
}


void UALowEntropyJSON_set_platform(UALowEntropyJSON* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "platform", value);
}

DEFINE_EMLITE_TYPE(NavigatorUAData, em_Val);


jb_FrozenArray NavigatorUAData_brands(const NavigatorUAData *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "brands"));
}


bool NavigatorUAData_mobile(const NavigatorUAData *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "mobile"));
}


jb_DOMString NavigatorUAData_platform(const NavigatorUAData *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "platform"));
}


jb_Promise NavigatorUAData_getHighEntropyValues(NavigatorUAData* self , const jb_Sequence* hints) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getHighEntropyValues", em_Val_from(hints)));
}


UALowEntropyJSON NavigatorUAData_toJSON(NavigatorUAData* self ) {
    return em_Val_as(UALowEntropyJSON, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

