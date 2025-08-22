#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PerformanceEntry.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PerformanceMarkOptions PerformanceMarkOptions;


/**
 * @brief Interface PerformanceMark
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceMark)
 */
DECLARE_EMLITE_TYPE(PerformanceMark, PerformanceEntry);

/**
 * @brief Creates a new `PerformanceMark` object. 
*/
PerformanceMark PerformanceMark_new0(jb_String * markName);

/**
 * @brief Creates a new `PerformanceMark` object. 
*/
PerformanceMark PerformanceMark_new1(jb_String * markName, PerformanceMarkOptions * markOptions);

/**
 * @brief Gets the `detail` property. 
*/
jb_Any PerformanceMark_detail(const PerformanceMark *self);

#ifdef __cplusplus
}
#endif
