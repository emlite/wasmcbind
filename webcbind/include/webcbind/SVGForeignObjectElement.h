#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SVGGraphicsElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedLength SVGAnimatedLength;


/**
 * @brief Interface SVGForeignObjectElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGForeignObjectElement)
 */
DECLARE_EMLITE_TYPE(SVGForeignObjectElement, SVGGraphicsElement);

/**
 * @brief Gets the `x` property. 
*/
SVGAnimatedLength SVGForeignObjectElement_x(const SVGForeignObjectElement *self);

/**
 * @brief Gets the `y` property. 
*/
SVGAnimatedLength SVGForeignObjectElement_y(const SVGForeignObjectElement *self);

/**
 * @brief Gets the `width` property. 
*/
SVGAnimatedLength SVGForeignObjectElement_width(const SVGForeignObjectElement *self);

/**
 * @brief Gets the `height` property. 
*/
SVGAnimatedLength SVGForeignObjectElement_height(const SVGForeignObjectElement *self);

#ifdef __cplusplus
}
#endif
