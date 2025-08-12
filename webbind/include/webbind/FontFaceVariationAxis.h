#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface FontFaceVariationAxis
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceVariationAxis)
 */
DECLARE_EMLITE_TYPE(FontFaceVariationAxis, em_Val);

/**
 * @brief Gets the `name` property. 
*/
jb_String FontFaceVariationAxis_name(const FontFaceVariationAxis *self);

/**
 * @brief Gets the `axisTag` property. 
*/
jb_String FontFaceVariationAxis_axisTag(const FontFaceVariationAxis *self);

/**
 * @brief Gets the `minimumValue` property. 
*/
double FontFaceVariationAxis_minimumValue(const FontFaceVariationAxis *self);

/**
 * @brief Gets the `maximumValue` property. 
*/
double FontFaceVariationAxis_maximumValue(const FontFaceVariationAxis *self);

/**
 * @brief Gets the `defaultValue` property. 
*/
double FontFaceVariationAxis_defaultValue(const FontFaceVariationAxis *self);

#ifdef __cplusplus
}
#endif
