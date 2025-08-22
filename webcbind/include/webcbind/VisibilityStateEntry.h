#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PerformanceEntry.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface VisibilityStateEntry
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/VisibilityStateEntry)
 */
DECLARE_EMLITE_TYPE(VisibilityStateEntry, PerformanceEntry);

/**
 * @brief Gets the `name` property. 
*/
jb_String VisibilityStateEntry_name(const VisibilityStateEntry *self);

/**
 * @brief Gets the `entryType` property. 
*/
jb_String VisibilityStateEntry_entryType(const VisibilityStateEntry *self);

/**
 * @brief Gets the `startTime` property. 
*/
jb_Any VisibilityStateEntry_startTime(const VisibilityStateEntry *self);

/**
 * @brief Gets the `duration` property. 
*/
unsigned long VisibilityStateEntry_duration(const VisibilityStateEntry *self);

#ifdef __cplusplus
}
#endif
