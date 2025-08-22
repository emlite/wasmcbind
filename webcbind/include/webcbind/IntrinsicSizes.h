#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface IntrinsicSizes
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/IntrinsicSizes)
 */
DECLARE_EMLITE_TYPE(IntrinsicSizes, em_Val);

/**
 * @brief Gets the `minContentSize` property. 
*/
double IntrinsicSizes_minContentSize(const IntrinsicSizes *self);

/**
 * @brief Gets the `maxContentSize` property. 
*/
double IntrinsicSizes_maxContentSize(const IntrinsicSizes *self);

#ifdef __cplusplus
}
#endif
