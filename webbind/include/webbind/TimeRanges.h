#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface TimeRanges
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TimeRanges)
 */
DECLARE_EMLITE_TYPE(TimeRanges, em_Val);

/**
 * @brief Gets the `length` property. 
*/
unsigned long TimeRanges_length(const TimeRanges *self);

/**
 * @brief Calls the `start` method. 
*/
double TimeRanges_start(TimeRanges* self , unsigned long index);

/**
 * @brief Calls the `end` method. 
*/
double TimeRanges_end(TimeRanges* self , unsigned long index);

#ifdef __cplusplus
}
#endif
