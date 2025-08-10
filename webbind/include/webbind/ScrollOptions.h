#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ScrollOptions, em_Val);

ScrollBehavior ScrollOptions_behavior(const ScrollOptions *self);

void ScrollOptions_set_behavior(ScrollOptions* self, ScrollBehavior * value);

ScrollOptions ScrollOptions_new();

#ifdef __cplusplus
}
#endif
