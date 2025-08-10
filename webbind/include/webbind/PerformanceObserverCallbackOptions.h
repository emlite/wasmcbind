#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PerformanceObserverCallbackOptions, em_Val);

long long PerformanceObserverCallbackOptions_droppedEntriesCount(const PerformanceObserverCallbackOptions *self);

void PerformanceObserverCallbackOptions_set_droppedEntriesCount(PerformanceObserverCallbackOptions* self, long long value);

PerformanceObserverCallbackOptions PerformanceObserverCallbackOptions_new();

#ifdef __cplusplus
}
#endif
