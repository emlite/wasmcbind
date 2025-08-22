#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface SVGAnimatedNumber
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedNumber)
 */
DECLARE_EMLITE_TYPE(SVGAnimatedNumber, em_Val);

/**
 * @brief Gets the `baseVal` property. 
*/
float SVGAnimatedNumber_baseVal(const SVGAnimatedNumber *self);

/**
 * @brief Sets the `baseVal` property. 
*/
void SVGAnimatedNumber_set_baseVal(SVGAnimatedNumber* self, float value);

/**
 * @brief Gets the `animVal` property. 
*/
float SVGAnimatedNumber_animVal(const SVGAnimatedNumber *self);

#ifdef __cplusplus
}
#endif
