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
 * @brief Interface SVGEllipseElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGEllipseElement)
 */
DECLARE_EMLITE_TYPE(SVGEllipseElement, SVGGeometryElement);

/**
 * @brief Gets the `cx` property. 
*/
SVGAnimatedLength SVGEllipseElement_cx(const SVGEllipseElement *self);

/**
 * @brief Gets the `cy` property. 
*/
SVGAnimatedLength SVGEllipseElement_cy(const SVGEllipseElement *self);

/**
 * @brief Gets the `rx` property. 
*/
SVGAnimatedLength SVGEllipseElement_rx(const SVGEllipseElement *self);

/**
 * @brief Gets the `ry` property. 
*/
SVGAnimatedLength SVGEllipseElement_ry(const SVGEllipseElement *self);

#ifdef __cplusplus
}
#endif
