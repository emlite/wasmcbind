#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(NavigationPreloadState, em_Val);

bool NavigationPreloadState_enabled(const NavigationPreloadState *self);

void NavigationPreloadState_set_enabled(NavigationPreloadState* self, bool value);

jb_String NavigationPreloadState_headerValue(const NavigationPreloadState *self);

void NavigationPreloadState_set_headerValue(NavigationPreloadState* self, jb_String * value);

NavigationPreloadState NavigationPreloadState_new();

#ifdef __cplusplus
}
#endif
