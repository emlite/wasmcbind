#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PerformanceEntry.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Node Node;


/**
 * @brief Interface PerformanceEventTiming
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEventTiming)
 */
DECLARE_EMLITE_TYPE(PerformanceEventTiming, PerformanceEntry);

/**
 * @brief Gets the `processingStart` property. 
*/
jb_Any PerformanceEventTiming_processingStart(const PerformanceEventTiming *self);

/**
 * @brief Gets the `processingEnd` property. 
*/
jb_Any PerformanceEventTiming_processingEnd(const PerformanceEventTiming *self);

/**
 * @brief Gets the `cancelable` property. 
*/
bool PerformanceEventTiming_cancelable(const PerformanceEventTiming *self);

/**
 * @brief Gets the `target` property. 
*/
Node PerformanceEventTiming_target(const PerformanceEventTiming *self);

/**
 * @brief Gets the `interactionId` property. 
*/
long long PerformanceEventTiming_interactionId(const PerformanceEventTiming *self);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_Object PerformanceEventTiming_toJSON(PerformanceEventTiming* self );

#ifdef __cplusplus
}
#endif
