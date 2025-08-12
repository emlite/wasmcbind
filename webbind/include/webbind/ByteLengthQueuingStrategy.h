#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct QueuingStrategyInit QueuingStrategyInit;


/**
 * @brief Interface ByteLengthQueuingStrategy
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ByteLengthQueuingStrategy)
 */
DECLARE_EMLITE_TYPE(ByteLengthQueuingStrategy, em_Val);

/**
 * @brief Creates a new `ByteLengthQueuingStrategy` object. 
*/
ByteLengthQueuingStrategy ByteLengthQueuingStrategy_new(QueuingStrategyInit * init);

/**
 * @brief Gets the `highWaterMark` property. 
*/
double ByteLengthQueuingStrategy_highWaterMark(const ByteLengthQueuingStrategy *self);

/**
 * @brief Gets the `size` property. 
*/
jb_Function ByteLengthQueuingStrategy_size(const ByteLengthQueuingStrategy *self);

#ifdef __cplusplus
}
#endif
