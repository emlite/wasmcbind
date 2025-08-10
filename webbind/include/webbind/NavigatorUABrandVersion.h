#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(NavigatorUABrandVersion, em_Val);

jb_String NavigatorUABrandVersion_brand(const NavigatorUABrandVersion *self);

void NavigatorUABrandVersion_set_brand(NavigatorUABrandVersion* self, jb_String * value);

jb_String NavigatorUABrandVersion_version(const NavigatorUABrandVersion *self);

void NavigatorUABrandVersion_set_version(NavigatorUABrandVersion* self, jb_String * value);

NavigatorUABrandVersion NavigatorUABrandVersion_new();

#ifdef __cplusplus
}
#endif
