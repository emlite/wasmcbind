#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PerformanceEntry.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface PerformancePaintTiming
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PerformancePaintTiming)
 */
DECLARE_EMLITE_TYPE(PerformancePaintTiming, PerformanceEntry);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_Object PerformancePaintTiming_toJSON(PerformancePaintTiming* self );

/**
 * @brief Gets the `paintTime` property. 
*/
jb_Any PerformancePaintTiming_paintTime(const PerformancePaintTiming *self);

/**
 * @brief Gets the `presentationTime` property. 
*/
jb_Any PerformancePaintTiming_presentationTime(const PerformancePaintTiming *self);

#ifdef __cplusplus
}
#endif
