#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SVGElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedNumber SVGAnimatedNumber;


/**
 * @brief Interface SVGFESpotLightElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpotLightElement)
 */
DECLARE_EMLITE_TYPE(SVGFESpotLightElement, SVGElement);

/**
 * @brief Gets the `x` property. 
*/
SVGAnimatedNumber SVGFESpotLightElement_x(const SVGFESpotLightElement *self);

/**
 * @brief Gets the `y` property. 
*/
SVGAnimatedNumber SVGFESpotLightElement_y(const SVGFESpotLightElement *self);

/**
 * @brief Gets the `z` property. 
*/
SVGAnimatedNumber SVGFESpotLightElement_z(const SVGFESpotLightElement *self);

/**
 * @brief Gets the `pointsAtX` property. 
*/
SVGAnimatedNumber SVGFESpotLightElement_pointsAtX(const SVGFESpotLightElement *self);

/**
 * @brief Gets the `pointsAtY` property. 
*/
SVGAnimatedNumber SVGFESpotLightElement_pointsAtY(const SVGFESpotLightElement *self);

/**
 * @brief Gets the `pointsAtZ` property. 
*/
SVGAnimatedNumber SVGFESpotLightElement_pointsAtZ(const SVGFESpotLightElement *self);

/**
 * @brief Gets the `specularExponent` property. 
*/
SVGAnimatedNumber SVGFESpotLightElement_specularExponent(const SVGFESpotLightElement *self);

/**
 * @brief Gets the `limitingConeAngle` property. 
*/
SVGAnimatedNumber SVGFESpotLightElement_limitingConeAngle(const SVGFESpotLightElement *self);

#ifdef __cplusplus
}
#endif
