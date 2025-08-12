#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PerformanceResourceTiming.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NotRestoredReasons NotRestoredReasons;


/**
 * @brief Interface PerformanceNavigationTiming
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming)
 */
DECLARE_EMLITE_TYPE(PerformanceNavigationTiming, PerformanceResourceTiming);

/**
 * @brief Gets the `unloadEventStart` property. 
*/
jb_Any PerformanceNavigationTiming_unloadEventStart(const PerformanceNavigationTiming *self);

/**
 * @brief Gets the `unloadEventEnd` property. 
*/
jb_Any PerformanceNavigationTiming_unloadEventEnd(const PerformanceNavigationTiming *self);

/**
 * @brief Gets the `domInteractive` property. 
*/
jb_Any PerformanceNavigationTiming_domInteractive(const PerformanceNavigationTiming *self);

/**
 * @brief Gets the `domContentLoadedEventStart` property. 
*/
jb_Any PerformanceNavigationTiming_domContentLoadedEventStart(const PerformanceNavigationTiming *self);

/**
 * @brief Gets the `domContentLoadedEventEnd` property. 
*/
jb_Any PerformanceNavigationTiming_domContentLoadedEventEnd(const PerformanceNavigationTiming *self);

/**
 * @brief Gets the `domComplete` property. 
*/
jb_Any PerformanceNavigationTiming_domComplete(const PerformanceNavigationTiming *self);

/**
 * @brief Gets the `loadEventStart` property. 
*/
jb_Any PerformanceNavigationTiming_loadEventStart(const PerformanceNavigationTiming *self);

/**
 * @brief Gets the `loadEventEnd` property. 
*/
jb_Any PerformanceNavigationTiming_loadEventEnd(const PerformanceNavigationTiming *self);

/**
 * @brief Gets the `type` property. 
*/
NavigationTimingType PerformanceNavigationTiming_type(const PerformanceNavigationTiming *self);

/**
 * @brief Gets the `redirectCount` property. 
*/
unsigned short PerformanceNavigationTiming_redirectCount(const PerformanceNavigationTiming *self);

/**
 * @brief Gets the `criticalCHRestart` property. 
*/
jb_Any PerformanceNavigationTiming_criticalCHRestart(const PerformanceNavigationTiming *self);

/**
 * @brief Gets the `notRestoredReasons` property. 
*/
NotRestoredReasons PerformanceNavigationTiming_notRestoredReasons(const PerformanceNavigationTiming *self);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_Object PerformanceNavigationTiming_toJSON(PerformanceNavigationTiming* self );

/**
 * @brief Gets the `activationStart` property. 
*/
jb_Any PerformanceNavigationTiming_activationStart(const PerformanceNavigationTiming *self);

#ifdef __cplusplus
}
#endif
