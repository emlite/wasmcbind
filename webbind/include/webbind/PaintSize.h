#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface PaintSize
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PaintSize)
 */
DECLARE_EMLITE_TYPE(PaintSize, em_Val);

/**
 * @brief Gets the `width` property. 
*/
double PaintSize_width(const PaintSize *self);

/**
 * @brief Gets the `height` property. 
*/
double PaintSize_height(const PaintSize *self);

#ifdef __cplusplus
}
#endif
