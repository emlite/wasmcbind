#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PerformanceEntry.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface TaskAttributionTiming
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TaskAttributionTiming)
 */
DECLARE_EMLITE_TYPE(TaskAttributionTiming, PerformanceEntry);

/**
 * @brief Gets the `startTime` property. 
*/
jb_Any TaskAttributionTiming_startTime(const TaskAttributionTiming *self);

/**
 * @brief Gets the `duration` property. 
*/
jb_Any TaskAttributionTiming_duration(const TaskAttributionTiming *self);

/**
 * @brief Gets the `name` property. 
*/
jb_String TaskAttributionTiming_name(const TaskAttributionTiming *self);

/**
 * @brief Gets the `entryType` property. 
*/
jb_String TaskAttributionTiming_entryType(const TaskAttributionTiming *self);

/**
 * @brief Gets the `containerType` property. 
*/
jb_String TaskAttributionTiming_containerType(const TaskAttributionTiming *self);

/**
 * @brief Gets the `containerSrc` property. 
*/
jb_String TaskAttributionTiming_containerSrc(const TaskAttributionTiming *self);

/**
 * @brief Gets the `containerId` property. 
*/
jb_String TaskAttributionTiming_containerId(const TaskAttributionTiming *self);

/**
 * @brief Gets the `containerName` property. 
*/
jb_String TaskAttributionTiming_containerName(const TaskAttributionTiming *self);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_Object TaskAttributionTiming_toJSON(TaskAttributionTiming* self );

#ifdef __cplusplus
}
#endif
