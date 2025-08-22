#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PerformanceEntry.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct LayoutShiftAttribution LayoutShiftAttribution;


/**
 * @brief Interface LayoutShift
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/LayoutShift)
 */
DECLARE_EMLITE_TYPE(LayoutShift, PerformanceEntry);

/**
 * @brief Gets the `value` property. 
*/
double LayoutShift_value(const LayoutShift *self);

/**
 * @brief Gets the `hadRecentInput` property. 
*/
bool LayoutShift_hadRecentInput(const LayoutShift *self);

/**
 * @brief Gets the `lastInputTime` property. 
*/
jb_Any LayoutShift_lastInputTime(const LayoutShift *self);

/**
 * @brief Gets the `sources` property. 
*/
jb_Array LayoutShift_sources(const LayoutShift *self);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_Object LayoutShift_toJSON(LayoutShift* self );

#ifdef __cplusplus
}
#endif
