#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SVGGeometryElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedLength SVGAnimatedLength;


/**
 * @brief Interface SVGLineElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGLineElement)
 */
DECLARE_EMLITE_TYPE(SVGLineElement, SVGGeometryElement);

/**
 * @brief Gets the `x1` property. 
*/
SVGAnimatedLength SVGLineElement_x1(const SVGLineElement *self);

/**
 * @brief Gets the `y1` property. 
*/
SVGAnimatedLength SVGLineElement_y1(const SVGLineElement *self);

/**
 * @brief Gets the `x2` property. 
*/
SVGAnimatedLength SVGLineElement_x2(const SVGLineElement *self);

/**
 * @brief Gets the `y2` property. 
*/
SVGAnimatedLength SVGLineElement_y2(const SVGLineElement *self);

#ifdef __cplusplus
}
#endif
