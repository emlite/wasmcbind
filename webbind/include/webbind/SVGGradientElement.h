#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SVGElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedEnumeration SVGAnimatedEnumeration;
typedef struct SVGAnimatedTransformList SVGAnimatedTransformList;
typedef struct SVGAnimatedString SVGAnimatedString;


/**
 * @brief Interface SVGGradientElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGGradientElement)
 */
DECLARE_EMLITE_TYPE(SVGGradientElement, SVGElement);

/**
 * @brief Gets the `gradientUnits` property. 
*/
SVGAnimatedEnumeration SVGGradientElement_gradientUnits(const SVGGradientElement *self);

/**
 * @brief Gets the `gradientTransform` property. 
*/
SVGAnimatedTransformList SVGGradientElement_gradientTransform(const SVGGradientElement *self);

/**
 * @brief Gets the `spreadMethod` property. 
*/
SVGAnimatedEnumeration SVGGradientElement_spreadMethod(const SVGGradientElement *self);

/**
 * @brief Gets the `href` property. 
*/
SVGAnimatedString SVGGradientElement_href(const SVGGradientElement *self);

#ifdef __cplusplus
}
#endif
