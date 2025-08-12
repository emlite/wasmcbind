#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SVGElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedEnumeration SVGAnimatedEnumeration;
typedef struct SVGAnimatedLength SVGAnimatedLength;


/**
 * @brief Interface SVGMaskElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGMaskElement)
 */
DECLARE_EMLITE_TYPE(SVGMaskElement, SVGElement);

/**
 * @brief Gets the `maskUnits` property. 
*/
SVGAnimatedEnumeration SVGMaskElement_maskUnits(const SVGMaskElement *self);

/**
 * @brief Gets the `maskContentUnits` property. 
*/
SVGAnimatedEnumeration SVGMaskElement_maskContentUnits(const SVGMaskElement *self);

/**
 * @brief Gets the `x` property. 
*/
SVGAnimatedLength SVGMaskElement_x(const SVGMaskElement *self);

/**
 * @brief Gets the `y` property. 
*/
SVGAnimatedLength SVGMaskElement_y(const SVGMaskElement *self);

/**
 * @brief Gets the `width` property. 
*/
SVGAnimatedLength SVGMaskElement_width(const SVGMaskElement *self);

/**
 * @brief Gets the `height` property. 
*/
SVGAnimatedLength SVGMaskElement_height(const SVGMaskElement *self);

#ifdef __cplusplus
}
#endif
