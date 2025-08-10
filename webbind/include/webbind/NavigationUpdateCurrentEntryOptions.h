#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(NavigationUpdateCurrentEntryOptions, em_Val);

jb_Any NavigationUpdateCurrentEntryOptions_state(const NavigationUpdateCurrentEntryOptions *self);

void NavigationUpdateCurrentEntryOptions_set_state(NavigationUpdateCurrentEntryOptions* self, jb_Any * value);

NavigationUpdateCurrentEntryOptions NavigationUpdateCurrentEntryOptions_new();

#ifdef __cplusplus
}
#endif
