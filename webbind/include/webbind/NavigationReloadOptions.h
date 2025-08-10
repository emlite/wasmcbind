#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "NavigationOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(NavigationReloadOptions, NavigationOptions);

jb_Any NavigationReloadOptions_state(const NavigationReloadOptions *self);

void NavigationReloadOptions_set_state(NavigationReloadOptions* self, jb_Any * value);

NavigationReloadOptions NavigationReloadOptions_new();

#ifdef __cplusplus
}
#endif
