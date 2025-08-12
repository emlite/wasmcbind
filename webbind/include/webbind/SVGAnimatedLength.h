#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGLength SVGLength;


/**
 * @brief Interface SVGAnimatedLength
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedLength)
 */
DECLARE_EMLITE_TYPE(SVGAnimatedLength, em_Val);

/**
 * @brief Gets the `baseVal` property. 
*/
SVGLength SVGAnimatedLength_baseVal(const SVGAnimatedLength *self);

/**
 * @brief Gets the `animVal` property. 
*/
SVGLength SVGAnimatedLength_animVal(const SVGAnimatedLength *self);

#ifdef __cplusplus
}
#endif
