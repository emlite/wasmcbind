#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface PerformanceTiming
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceTiming)
 */
DECLARE_EMLITE_TYPE(PerformanceTiming, em_Val);

/**
 * @brief Gets the `navigationStart` property. 
*/
long long PerformanceTiming_navigationStart(const PerformanceTiming *self);

/**
 * @brief Gets the `unloadEventStart` property. 
*/
long long PerformanceTiming_unloadEventStart(const PerformanceTiming *self);

/**
 * @brief Gets the `unloadEventEnd` property. 
*/
long long PerformanceTiming_unloadEventEnd(const PerformanceTiming *self);

/**
 * @brief Gets the `redirectStart` property. 
*/
long long PerformanceTiming_redirectStart(const PerformanceTiming *self);

/**
 * @brief Gets the `redirectEnd` property. 
*/
long long PerformanceTiming_redirectEnd(const PerformanceTiming *self);

/**
 * @brief Gets the `fetchStart` property. 
*/
long long PerformanceTiming_fetchStart(const PerformanceTiming *self);

/**
 * @brief Gets the `domainLookupStart` property. 
*/
long long PerformanceTiming_domainLookupStart(const PerformanceTiming *self);

/**
 * @brief Gets the `domainLookupEnd` property. 
*/
long long PerformanceTiming_domainLookupEnd(const PerformanceTiming *self);

/**
 * @brief Gets the `connectStart` property. 
*/
long long PerformanceTiming_connectStart(const PerformanceTiming *self);

/**
 * @brief Gets the `connectEnd` property. 
*/
long long PerformanceTiming_connectEnd(const PerformanceTiming *self);

/**
 * @brief Gets the `secureConnectionStart` property. 
*/
long long PerformanceTiming_secureConnectionStart(const PerformanceTiming *self);

/**
 * @brief Gets the `requestStart` property. 
*/
long long PerformanceTiming_requestStart(const PerformanceTiming *self);

/**
 * @brief Gets the `responseStart` property. 
*/
long long PerformanceTiming_responseStart(const PerformanceTiming *self);

/**
 * @brief Gets the `responseEnd` property. 
*/
long long PerformanceTiming_responseEnd(const PerformanceTiming *self);

/**
 * @brief Gets the `domLoading` property. 
*/
long long PerformanceTiming_domLoading(const PerformanceTiming *self);

/**
 * @brief Gets the `domInteractive` property. 
*/
long long PerformanceTiming_domInteractive(const PerformanceTiming *self);

/**
 * @brief Gets the `domContentLoadedEventStart` property. 
*/
long long PerformanceTiming_domContentLoadedEventStart(const PerformanceTiming *self);

/**
 * @brief Gets the `domContentLoadedEventEnd` property. 
*/
long long PerformanceTiming_domContentLoadedEventEnd(const PerformanceTiming *self);

/**
 * @brief Gets the `domComplete` property. 
*/
long long PerformanceTiming_domComplete(const PerformanceTiming *self);

/**
 * @brief Gets the `loadEventStart` property. 
*/
long long PerformanceTiming_loadEventStart(const PerformanceTiming *self);

/**
 * @brief Gets the `loadEventEnd` property. 
*/
long long PerformanceTiming_loadEventEnd(const PerformanceTiming *self);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_Object PerformanceTiming_toJSON(PerformanceTiming* self );

#ifdef __cplusplus
}
#endif
