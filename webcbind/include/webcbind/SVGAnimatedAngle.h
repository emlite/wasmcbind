#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAngle SVGAngle;


/**
 * @brief Interface SVGAnimatedAngle
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedAngle)
 */
DECLARE_EMLITE_TYPE(SVGAnimatedAngle, em_Val);

/**
 * @brief Gets the `baseVal` property. 
*/
SVGAngle SVGAnimatedAngle_baseVal(const SVGAnimatedAngle *self);

/**
 * @brief Gets the `animVal` property. 
*/
SVGAngle SVGAnimatedAngle_animVal(const SVGAnimatedAngle *self);

#ifdef __cplusplus
}
#endif
