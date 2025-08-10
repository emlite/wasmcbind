#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "NavigatorUABrandVersion.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(UALowEntropyJSON, em_Val);

jb_Array UALowEntropyJSON_brands(const UALowEntropyJSON *self);

void UALowEntropyJSON_set_brands(UALowEntropyJSON* self, jb_Array * value);

bool UALowEntropyJSON_mobile(const UALowEntropyJSON *self);

void UALowEntropyJSON_set_mobile(UALowEntropyJSON* self, bool value);

jb_String UALowEntropyJSON_platform(const UALowEntropyJSON *self);

void UALowEntropyJSON_set_platform(UALowEntropyJSON* self, jb_String * value);

UALowEntropyJSON UALowEntropyJSON_new();

#ifdef __cplusplus
}
#endif
