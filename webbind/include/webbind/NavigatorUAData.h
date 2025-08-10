#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NavigatorUABrandVersion NavigatorUABrandVersion;
typedef struct UADataValues UADataValues;
typedef struct UALowEntropyJSON UALowEntropyJSON;

DECLARE_EMLITE_TYPE(NavigatorUAData, em_Val);

jb_Array NavigatorUAData_brands(const NavigatorUAData *self);

bool NavigatorUAData_mobile(const NavigatorUAData *self);

jb_String NavigatorUAData_platform(const NavigatorUAData *self);

jb_Promise NavigatorUAData_getHighEntropyValues(NavigatorUAData* self , jb_Array * hints);

UALowEntropyJSON NavigatorUAData_toJSON(NavigatorUAData* self );

#ifdef __cplusplus
}
#endif
