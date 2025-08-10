#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "NavigationOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(NavigationNavigateOptions, NavigationOptions);

jb_Any NavigationNavigateOptions_state(const NavigationNavigateOptions *self);

void NavigationNavigateOptions_set_state(NavigationNavigateOptions* self, jb_Any * value);

NavigationHistoryBehavior NavigationNavigateOptions_history(const NavigationNavigateOptions *self);

void NavigationNavigateOptions_set_history(NavigationNavigateOptions* self, NavigationHistoryBehavior * value);

NavigationNavigateOptions NavigationNavigateOptions_new();

#ifdef __cplusplus
}
#endif
