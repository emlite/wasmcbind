#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SVGGraphicsElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedLength SVGAnimatedLength;
typedef struct SVGAnimatedPreserveAspectRatio SVGAnimatedPreserveAspectRatio;
typedef struct SVGAnimatedString SVGAnimatedString;


/**
 * @brief Interface SVGImageElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGImageElement)
 */
DECLARE_EMLITE_TYPE(SVGImageElement, SVGGraphicsElement);

/**
 * @brief Gets the `x` property. 
*/
SVGAnimatedLength SVGImageElement_x(const SVGImageElement *self);

/**
 * @brief Gets the `y` property. 
*/
SVGAnimatedLength SVGImageElement_y(const SVGImageElement *self);

/**
 * @brief Gets the `width` property. 
*/
SVGAnimatedLength SVGImageElement_width(const SVGImageElement *self);

/**
 * @brief Gets the `height` property. 
*/
SVGAnimatedLength SVGImageElement_height(const SVGImageElement *self);

/**
 * @brief Gets the `preserveAspectRatio` property. 
*/
SVGAnimatedPreserveAspectRatio SVGImageElement_preserveAspectRatio(const SVGImageElement *self);

/**
 * @brief Gets the `crossOrigin` property. 
*/
jb_String SVGImageElement_crossOrigin(const SVGImageElement *self);

/**
 * @brief Sets the `crossOrigin` property. 
*/
void SVGImageElement_set_crossOrigin(SVGImageElement* self, jb_String * value);

/**
 * @brief Gets the `href` property. 
*/
SVGAnimatedString SVGImageElement_href(const SVGImageElement *self);

#ifdef __cplusplus
}
#endif
