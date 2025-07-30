#include <webbind/NavigatorUAData.h>


DEFINE_EMLITE_TYPE(NavigatorUABrandVersion, em_Val);


jb_String NavigatorUABrandVersion_brand(const NavigatorUABrandVersion *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("brand")));
}


void NavigatorUABrandVersion_set_brand(NavigatorUABrandVersion* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("brand"), em_Val_from(value));
}


jb_String NavigatorUABrandVersion_version(const NavigatorUABrandVersion *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("version")));
}


void NavigatorUABrandVersion_set_version(NavigatorUABrandVersion* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("version"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(UADataValues, em_Val);


jb_String UADataValues_architecture(const UADataValues *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("architecture")));
}


void UADataValues_set_architecture(UADataValues* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("architecture"), em_Val_from(value));
}


jb_String UADataValues_bitness(const UADataValues *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bitness")));
}


void UADataValues_set_bitness(UADataValues* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bitness"), em_Val_from(value));
}


jb_Array UADataValues_brands(const UADataValues *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("brands")));
}


void UADataValues_set_brands(UADataValues* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("brands"), em_Val_from(value));
}


jb_Array UADataValues_formFactors(const UADataValues *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("formFactors")));
}


void UADataValues_set_formFactors(UADataValues* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("formFactors"), em_Val_from(value));
}


jb_Array UADataValues_fullVersionList(const UADataValues *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fullVersionList")));
}


void UADataValues_set_fullVersionList(UADataValues* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("fullVersionList"), em_Val_from(value));
}


jb_String UADataValues_model(const UADataValues *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("model")));
}


void UADataValues_set_model(UADataValues* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("model"), em_Val_from(value));
}


bool UADataValues_mobile(const UADataValues *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mobile")));
}


void UADataValues_set_mobile(UADataValues* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mobile"), em_Val_from(value));
}


jb_String UADataValues_platform(const UADataValues *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("platform")));
}


void UADataValues_set_platform(UADataValues* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("platform"), em_Val_from(value));
}


jb_String UADataValues_platformVersion(const UADataValues *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("platformVersion")));
}


void UADataValues_set_platformVersion(UADataValues* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("platformVersion"), em_Val_from(value));
}


jb_String UADataValues_uaFullVersion(const UADataValues *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("uaFullVersion")));
}


void UADataValues_set_uaFullVersion(UADataValues* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("uaFullVersion"), em_Val_from(value));
}


bool UADataValues_wow64(const UADataValues *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("wow64")));
}


void UADataValues_set_wow64(UADataValues* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("wow64"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(UALowEntropyJSON, em_Val);


jb_Array UALowEntropyJSON_brands(const UALowEntropyJSON *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("brands")));
}


void UALowEntropyJSON_set_brands(UALowEntropyJSON* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("brands"), em_Val_from(value));
}


bool UALowEntropyJSON_mobile(const UALowEntropyJSON *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mobile")));
}


void UALowEntropyJSON_set_mobile(UALowEntropyJSON* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mobile"), em_Val_from(value));
}


jb_String UALowEntropyJSON_platform(const UALowEntropyJSON *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("platform")));
}


void UALowEntropyJSON_set_platform(UALowEntropyJSON* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("platform"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(NavigatorUAData, em_Val);


jb_Array NavigatorUAData_brands(const NavigatorUAData *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("brands")));
}


bool NavigatorUAData_mobile(const NavigatorUAData *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mobile")));
}


jb_String NavigatorUAData_platform(const NavigatorUAData *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("platform")));
}


jb_Promise NavigatorUAData_getHighEntropyValues(NavigatorUAData* self , jb_Array * hints) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getHighEntropyValues", em_Val_from(hints)));
}


UALowEntropyJSON NavigatorUAData_toJSON(NavigatorUAData* self ) {
    return em_Val_as(UALowEntropyJSON, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

