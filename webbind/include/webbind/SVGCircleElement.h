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
 * @brief Interface SVGCircleElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGCircleElement)
 */
DECLARE_EMLITE_TYPE(SVGCircleElement, SVGGeometryElement);

/**
 * @brief Gets the `cx` property. 
*/
SVGAnimatedLength SVGCircleElement_cx(const SVGCircleElement *self);

/**
 * @brief Gets the `cy` property. 
*/
SVGAnimatedLength SVGCircleElement_cy(const SVGCircleElement *self);

/**
 * @brief Gets the `r` property. 
*/
SVGAnimatedLength SVGCircleElement_r(const SVGCircleElement *self);

#ifdef __cplusplus
}
#endif
