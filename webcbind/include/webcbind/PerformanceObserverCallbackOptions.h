#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PerformanceObserverCallbackOptions */
DECLARE_EMLITE_TYPE(PerformanceObserverCallbackOptions, em_Val);

/** @brief Getter of the droppedEntriesCount property */
long long PerformanceObserverCallbackOptions_droppedEntriesCount(const PerformanceObserverCallbackOptions *self);

/** @brief Setter of the droppedEntriesCount property */
void PerformanceObserverCallbackOptions_set_droppedEntriesCount(PerformanceObserverCallbackOptions* self, long long value);

/** @brief Constructor of the PerformanceObserverCallbackOptions dictionary type */
PerformanceObserverCallbackOptions PerformanceObserverCallbackOptions_new();

#ifdef __cplusplus
}
#endif
