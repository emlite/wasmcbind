#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SVGElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedPreserveAspectRatio SVGAnimatedPreserveAspectRatio;
typedef struct SVGAnimatedString SVGAnimatedString;
typedef struct SVGAnimatedLength SVGAnimatedLength;


/**
 * @brief Interface SVGFEImageElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEImageElement)
 */
DECLARE_EMLITE_TYPE(SVGFEImageElement, SVGElement);

/**
 * @brief Gets the `preserveAspectRatio` property. 
*/
SVGAnimatedPreserveAspectRatio SVGFEImageElement_preserveAspectRatio(const SVGFEImageElement *self);

/**
 * @brief Gets the `crossOrigin` property. 
*/
SVGAnimatedString SVGFEImageElement_crossOrigin(const SVGFEImageElement *self);

/**
 * @brief Gets the `x` property. 
*/
SVGAnimatedLength SVGFEImageElement_x(const SVGFEImageElement *self);

/**
 * @brief Gets the `y` property. 
*/
SVGAnimatedLength SVGFEImageElement_y(const SVGFEImageElement *self);

/**
 * @brief Gets the `width` property. 
*/
SVGAnimatedLength SVGFEImageElement_width(const SVGFEImageElement *self);

/**
 * @brief Gets the `height` property. 
*/
SVGAnimatedLength SVGFEImageElement_height(const SVGFEImageElement *self);

/**
 * @brief Gets the `result` property. 
*/
SVGAnimatedString SVGFEImageElement_result(const SVGFEImageElement *self);

/**
 * @brief Gets the `href` property. 
*/
SVGAnimatedString SVGFEImageElement_href(const SVGFEImageElement *self);

#ifdef __cplusplus
}
#endif
