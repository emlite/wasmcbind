#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct QueuingStrategyInit QueuingStrategyInit;


/**
 * @brief Interface CountQueuingStrategy
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CountQueuingStrategy)
 */
DECLARE_EMLITE_TYPE(CountQueuingStrategy, em_Val);

/**
 * @brief Creates a new `CountQueuingStrategy` object. 
*/
CountQueuingStrategy CountQueuingStrategy_new(QueuingStrategyInit * init);

/**
 * @brief Gets the `highWaterMark` property. 
*/
double CountQueuingStrategy_highWaterMark(const CountQueuingStrategy *self);

/**
 * @brief Gets the `size` property. 
*/
jb_Function CountQueuingStrategy_size(const CountQueuingStrategy *self);

#ifdef __cplusplus
}
#endif
