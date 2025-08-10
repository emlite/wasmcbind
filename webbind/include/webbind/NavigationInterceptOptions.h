#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(NavigationInterceptOptions, em_Val);

jb_Function NavigationInterceptOptions_handler(const NavigationInterceptOptions *self);

void NavigationInterceptOptions_set_handler(NavigationInterceptOptions* self, jb_Function * value);

NavigationFocusReset NavigationInterceptOptions_focusReset(const NavigationInterceptOptions *self);

void NavigationInterceptOptions_set_focusReset(NavigationInterceptOptions* self, NavigationFocusReset * value);

NavigationScrollBehavior NavigationInterceptOptions_scroll(const NavigationInterceptOptions *self);

void NavigationInterceptOptions_set_scroll(NavigationInterceptOptions* self, NavigationScrollBehavior * value);

NavigationInterceptOptions NavigationInterceptOptions_new();

#ifdef __cplusplus
}
#endif
