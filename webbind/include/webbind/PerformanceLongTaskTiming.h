#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PerformanceEntry.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TaskAttributionTiming TaskAttributionTiming;


/**
 * @brief Interface PerformanceLongTaskTiming
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongTaskTiming)
 */
DECLARE_EMLITE_TYPE(PerformanceLongTaskTiming, PerformanceEntry);

/**
 * @brief Gets the `startTime` property. 
*/
jb_Any PerformanceLongTaskTiming_startTime(const PerformanceLongTaskTiming *self);

/**
 * @brief Gets the `duration` property. 
*/
jb_Any PerformanceLongTaskTiming_duration(const PerformanceLongTaskTiming *self);

/**
 * @brief Gets the `name` property. 
*/
jb_String PerformanceLongTaskTiming_name(const PerformanceLongTaskTiming *self);

/**
 * @brief Gets the `entryType` property. 
*/
jb_String PerformanceLongTaskTiming_entryType(const PerformanceLongTaskTiming *self);

/**
 * @brief Gets the `attribution` property. 
*/
jb_Array PerformanceLongTaskTiming_attribution(const PerformanceLongTaskTiming *self);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_Object PerformanceLongTaskTiming_toJSON(PerformanceLongTaskTiming* self );

#ifdef __cplusplus
}
#endif
