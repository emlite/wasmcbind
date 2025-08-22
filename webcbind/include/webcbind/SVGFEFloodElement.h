#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SVGElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedLength SVGAnimatedLength;
typedef struct SVGAnimatedString SVGAnimatedString;


/**
 * @brief Interface SVGFEFloodElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEFloodElement)
 */
DECLARE_EMLITE_TYPE(SVGFEFloodElement, SVGElement);

/**
 * @brief Gets the `x` property. 
*/
SVGAnimatedLength SVGFEFloodElement_x(const SVGFEFloodElement *self);

/**
 * @brief Gets the `y` property. 
*/
SVGAnimatedLength SVGFEFloodElement_y(const SVGFEFloodElement *self);

/**
 * @brief Gets the `width` property. 
*/
SVGAnimatedLength SVGFEFloodElement_width(const SVGFEFloodElement *self);

/**
 * @brief Gets the `height` property. 
*/
SVGAnimatedLength SVGFEFloodElement_height(const SVGFEFloodElement *self);

/**
 * @brief Gets the `result` property. 
*/
SVGAnimatedString SVGFEFloodElement_result(const SVGFEFloodElement *self);

#ifdef __cplusplus
}
#endif
