#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AbstractRange.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct StaticRangeInit StaticRangeInit;


/**
 * @brief Interface StaticRange
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/StaticRange)
 */
DECLARE_EMLITE_TYPE(StaticRange, AbstractRange);

/**
 * @brief Creates a new `StaticRange` object. 
*/
StaticRange StaticRange_new(StaticRangeInit * init);

#ifdef __cplusplus
}
#endif
