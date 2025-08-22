#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface SVGAnimatedInteger
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedInteger)
 */
DECLARE_EMLITE_TYPE(SVGAnimatedInteger, em_Val);

/**
 * @brief Gets the `baseVal` property. 
*/
long SVGAnimatedInteger_baseVal(const SVGAnimatedInteger *self);

/**
 * @brief Sets the `baseVal` property. 
*/
void SVGAnimatedInteger_set_baseVal(SVGAnimatedInteger* self, long value);

/**
 * @brief Gets the `animVal` property. 
*/
long SVGAnimatedInteger_animVal(const SVGAnimatedInteger *self);

#ifdef __cplusplus
}
#endif
