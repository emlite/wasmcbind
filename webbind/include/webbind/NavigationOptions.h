#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(NavigationOptions, em_Val);

jb_Any NavigationOptions_info(const NavigationOptions *self);

void NavigationOptions_set_info(NavigationOptions* self, jb_Any * value);

NavigationOptions NavigationOptions_new();

#ifdef __cplusplus
}
#endif
