#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct NavigatorUABrandVersion NavigatorUABrandVersion;
typedef struct UADataValues UADataValues;
typedef struct UALowEntropyJSON UALowEntropyJSON;


DECLARE_EMLITE_TYPE(NavigatorUABrandVersion, em_Val);

jb_DOMString NavigatorUABrandVersion_brand(const NavigatorUABrandVersion *self);

void NavigatorUABrandVersion_set_brand(NavigatorUABrandVersion* self, jb_DOMString * value);

jb_DOMString NavigatorUABrandVersion_version(const NavigatorUABrandVersion *self);

void NavigatorUABrandVersion_set_version(NavigatorUABrandVersion* self, jb_DOMString * value);
DECLARE_EMLITE_TYPE(UADataValues, em_Val);

jb_DOMString UADataValues_architecture(const UADataValues *self);

void UADataValues_set_architecture(UADataValues* self, jb_DOMString * value);

jb_DOMString UADataValues_bitness(const UADataValues *self);

void UADataValues_set_bitness(UADataValues* self, jb_DOMString * value);

jb_Sequence UADataValues_brands(const UADataValues *self);

void UADataValues_set_brands(UADataValues* self, jb_Sequence * value);

jb_Sequence UADataValues_formFactors(const UADataValues *self);

void UADataValues_set_formFactors(UADataValues* self, jb_Sequence * value);

jb_Sequence UADataValues_fullVersionList(const UADataValues *self);

void UADataValues_set_fullVersionList(UADataValues* self, jb_Sequence * value);

jb_DOMString UADataValues_model(const UADataValues *self);

void UADataValues_set_model(UADataValues* self, jb_DOMString * value);

bool UADataValues_mobile(const UADataValues *self);

void UADataValues_set_mobile(UADataValues* self, bool value);

jb_DOMString UADataValues_platform(const UADataValues *self);

void UADataValues_set_platform(UADataValues* self, jb_DOMString * value);

jb_DOMString UADataValues_platformVersion(const UADataValues *self);

void UADataValues_set_platformVersion(UADataValues* self, jb_DOMString * value);

jb_DOMString UADataValues_uaFullVersion(const UADataValues *self);

void UADataValues_set_uaFullVersion(UADataValues* self, jb_DOMString * value);

bool UADataValues_wow64(const UADataValues *self);

void UADataValues_set_wow64(UADataValues* self, bool value);
DECLARE_EMLITE_TYPE(UALowEntropyJSON, em_Val);

jb_Sequence UALowEntropyJSON_brands(const UALowEntropyJSON *self);

void UALowEntropyJSON_set_brands(UALowEntropyJSON* self, jb_Sequence * value);

bool UALowEntropyJSON_mobile(const UALowEntropyJSON *self);

void UALowEntropyJSON_set_mobile(UALowEntropyJSON* self, bool value);

jb_DOMString UALowEntropyJSON_platform(const UALowEntropyJSON *self);

void UALowEntropyJSON_set_platform(UALowEntropyJSON* self, jb_DOMString * value);
DECLARE_EMLITE_TYPE(NavigatorUAData, em_Val);

jb_FrozenArray NavigatorUAData_brands(const NavigatorUAData *self);

bool NavigatorUAData_mobile(const NavigatorUAData *self);

jb_DOMString NavigatorUAData_platform(const NavigatorUAData *self);

jb_Promise NavigatorUAData_getHighEntropyValues(NavigatorUAData* self , jb_Sequence * hints);

UALowEntropyJSON NavigatorUAData_toJSON(NavigatorUAData* self );
