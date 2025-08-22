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
 * @brief Interface SVGFEPointLightElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEPointLightElement)
 */
DECLARE_EMLITE_TYPE(SVGFEPointLightElement, SVGElement);

/**
 * @brief Gets the `x` property. 
*/
SVGAnimatedNumber SVGFEPointLightElement_x(const SVGFEPointLightElement *self);

/**
 * @brief Gets the `y` property. 
*/
SVGAnimatedNumber SVGFEPointLightElement_y(const SVGFEPointLightElement *self);

/**
 * @brief Gets the `z` property. 
*/
SVGAnimatedNumber SVGFEPointLightElement_z(const SVGFEPointLightElement *self);

#ifdef __cplusplus
}
#endif
