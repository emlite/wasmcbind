#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PerformanceEntry.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface PerformanceMeasure
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceMeasure)
 */
DECLARE_EMLITE_TYPE(PerformanceMeasure, PerformanceEntry);

/**
 * @brief Gets the `detail` property. 
*/
jb_Any PerformanceMeasure_detail(const PerformanceMeasure *self);

#ifdef __cplusplus
}
#endif
