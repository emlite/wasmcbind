#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ScrollOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ScrollToOptions, ScrollOptions);

double ScrollToOptions_left(const ScrollToOptions *self);

void ScrollToOptions_set_left(ScrollToOptions* self, double value);

double ScrollToOptions_top(const ScrollToOptions *self);

void ScrollToOptions_set_top(ScrollToOptions* self, double value);

ScrollToOptions ScrollToOptions_new();

#ifdef __cplusplus
}
#endif
