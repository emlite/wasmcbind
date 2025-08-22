#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface PerformanceServerTiming
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceServerTiming)
 */
DECLARE_EMLITE_TYPE(PerformanceServerTiming, em_Val);

/**
 * @brief Gets the `name` property. 
*/
jb_String PerformanceServerTiming_name(const PerformanceServerTiming *self);

/**
 * @brief Gets the `duration` property. 
*/
jb_Any PerformanceServerTiming_duration(const PerformanceServerTiming *self);

/**
 * @brief Gets the `description` property. 
*/
jb_String PerformanceServerTiming_description(const PerformanceServerTiming *self);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_Object PerformanceServerTiming_toJSON(PerformanceServerTiming* self );

#ifdef __cplusplus
}
#endif
