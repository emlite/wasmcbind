#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SVGGeometryElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedLength SVGAnimatedLength;


/**
 * @brief Interface SVGRectElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGRectElement)
 */
DECLARE_EMLITE_TYPE(SVGRectElement, SVGGeometryElement);

/**
 * @brief Gets the `x` property. 
*/
SVGAnimatedLength SVGRectElement_x(const SVGRectElement *self);

/**
 * @brief Gets the `y` property. 
*/
SVGAnimatedLength SVGRectElement_y(const SVGRectElement *self);

/**
 * @brief Gets the `width` property. 
*/
SVGAnimatedLength SVGRectElement_width(const SVGRectElement *self);

/**
 * @brief Gets the `height` property. 
*/
SVGAnimatedLength SVGRectElement_height(const SVGRectElement *self);

/**
 * @brief Gets the `rx` property. 
*/
SVGAnimatedLength SVGRectElement_rx(const SVGRectElement *self);

/**
 * @brief Gets the `ry` property. 
*/
SVGAnimatedLength SVGRectElement_ry(const SVGRectElement *self);

#ifdef __cplusplus
}
#endif
