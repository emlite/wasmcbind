#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface ResizeObserverSize
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserverSize)
 */
DECLARE_EMLITE_TYPE(ResizeObserverSize, em_Val);

/**
 * @brief Gets the `inlineSize` property. 
*/
double ResizeObserverSize_inlineSize(const ResizeObserverSize *self);

/**
 * @brief Gets the `blockSize` property. 
*/
double ResizeObserverSize_blockSize(const ResizeObserverSize *self);

#ifdef __cplusplus
}
#endif
