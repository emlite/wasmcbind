#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SVGElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedNumber SVGAnimatedNumber;


/**
 * @brief Interface SVGFEDistantLightElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDistantLightElement)
 */
DECLARE_EMLITE_TYPE(SVGFEDistantLightElement, SVGElement);

/**
 * @brief Gets the `azimuth` property. 
*/
SVGAnimatedNumber SVGFEDistantLightElement_azimuth(const SVGFEDistantLightElement *self);

/**
 * @brief Gets the `elevation` property. 
*/
SVGAnimatedNumber SVGFEDistantLightElement_elevation(const SVGFEDistantLightElement *self);

#ifdef __cplusplus
}
#endif
