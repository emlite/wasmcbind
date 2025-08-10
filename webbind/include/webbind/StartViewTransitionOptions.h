#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(StartViewTransitionOptions, em_Val);

jb_Function StartViewTransitionOptions_update(const StartViewTransitionOptions *self);

void StartViewTransitionOptions_set_update(StartViewTransitionOptions* self, jb_Function * value);

jb_Array StartViewTransitionOptions_types(const StartViewTransitionOptions *self);

void StartViewTransitionOptions_set_types(StartViewTransitionOptions* self, jb_Array * value);

StartViewTransitionOptions StartViewTransitionOptions_new();

#ifdef __cplusplus
}
#endif
