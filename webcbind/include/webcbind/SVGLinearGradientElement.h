#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SVGGradientElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedLength SVGAnimatedLength;


/**
 * @brief Interface SVGLinearGradientElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGLinearGradientElement)
 */
DECLARE_EMLITE_TYPE(SVGLinearGradientElement, SVGGradientElement);

/**
 * @brief Gets the `x1` property. 
*/
SVGAnimatedLength SVGLinearGradientElement_x1(const SVGLinearGradientElement *self);

/**
 * @brief Gets the `y1` property. 
*/
SVGAnimatedLength SVGLinearGradientElement_y1(const SVGLinearGradientElement *self);

/**
 * @brief Gets the `x2` property. 
*/
SVGAnimatedLength SVGLinearGradientElement_x2(const SVGLinearGradientElement *self);

/**
 * @brief Gets the `y2` property. 
*/
SVGAnimatedLength SVGLinearGradientElement_y2(const SVGLinearGradientElement *self);

#ifdef __cplusplus
}
#endif
