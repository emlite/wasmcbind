#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface PerformanceEntry
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEntry)
 */
DECLARE_EMLITE_TYPE(PerformanceEntry, em_Val);

/**
 * @brief Gets the `id` property. 
*/
long long PerformanceEntry_id(const PerformanceEntry *self);

/**
 * @brief Gets the `name` property. 
*/
jb_String PerformanceEntry_name(const PerformanceEntry *self);

/**
 * @brief Gets the `entryType` property. 
*/
jb_String PerformanceEntry_entryType(const PerformanceEntry *self);

/**
 * @brief Gets the `startTime` property. 
*/
jb_Any PerformanceEntry_startTime(const PerformanceEntry *self);

/**
 * @brief Gets the `duration` property. 
*/
jb_Any PerformanceEntry_duration(const PerformanceEntry *self);

/**
 * @brief Gets the `navigationId` property. 
*/
long long PerformanceEntry_navigationId(const PerformanceEntry *self);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_Object PerformanceEntry_toJSON(PerformanceEntry* self );

#ifdef __cplusplus
}
#endif
