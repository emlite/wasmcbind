#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "NavigatorUABrandVersion.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(UADataValues, em_Val);

jb_String UADataValues_architecture(const UADataValues *self);

void UADataValues_set_architecture(UADataValues* self, jb_String * value);

jb_String UADataValues_bitness(const UADataValues *self);

void UADataValues_set_bitness(UADataValues* self, jb_String * value);

jb_Array UADataValues_brands(const UADataValues *self);

void UADataValues_set_brands(UADataValues* self, jb_Array * value);

jb_Array UADataValues_formFactors(const UADataValues *self);

void UADataValues_set_formFactors(UADataValues* self, jb_Array * value);

jb_Array UADataValues_fullVersionList(const UADataValues *self);

void UADataValues_set_fullVersionList(UADataValues* self, jb_Array * value);

jb_String UADataValues_model(const UADataValues *self);

void UADataValues_set_model(UADataValues* self, jb_String * value);

bool UADataValues_mobile(const UADataValues *self);

void UADataValues_set_mobile(UADataValues* self, bool value);

jb_String UADataValues_platform(const UADataValues *self);

void UADataValues_set_platform(UADataValues* self, jb_String * value);

jb_String UADataValues_platformVersion(const UADataValues *self);

void UADataValues_set_platformVersion(UADataValues* self, jb_String * value);

jb_String UADataValues_uaFullVersion(const UADataValues *self);

void UADataValues_set_uaFullVersion(UADataValues* self, jb_String * value);

bool UADataValues_wow64(const UADataValues *self);

void UADataValues_set_wow64(UADataValues* self, bool value);

UADataValues UADataValues_new();

#ifdef __cplusplus
}
#endif
