#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGPreserveAspectRatio SVGPreserveAspectRatio;


/**
 * @brief Interface SVGAnimatedPreserveAspectRatio
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedPreserveAspectRatio)
 */
DECLARE_EMLITE_TYPE(SVGAnimatedPreserveAspectRatio, em_Val);

/**
 * @brief Gets the `baseVal` property. 
*/
SVGPreserveAspectRatio SVGAnimatedPreserveAspectRatio_baseVal(const SVGAnimatedPreserveAspectRatio *self);

/**
 * @brief Gets the `animVal` property. 
*/
SVGPreserveAspectRatio SVGAnimatedPreserveAspectRatio_animVal(const SVGAnimatedPreserveAspectRatio *self);

#ifdef __cplusplus
}
#endif
