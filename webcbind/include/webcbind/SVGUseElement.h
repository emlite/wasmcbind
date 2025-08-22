#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SVGGraphicsElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedLength SVGAnimatedLength;
typedef struct SVGElement SVGElement;
typedef struct SVGAnimatedString SVGAnimatedString;


/**
 * @brief Interface SVGUseElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGUseElement)
 */
DECLARE_EMLITE_TYPE(SVGUseElement, SVGGraphicsElement);

/**
 * @brief Gets the `x` property. 
*/
SVGAnimatedLength SVGUseElement_x(const SVGUseElement *self);

/**
 * @brief Gets the `y` property. 
*/
SVGAnimatedLength SVGUseElement_y(const SVGUseElement *self);

/**
 * @brief Gets the `width` property. 
*/
SVGAnimatedLength SVGUseElement_width(const SVGUseElement *self);

/**
 * @brief Gets the `height` property. 
*/
SVGAnimatedLength SVGUseElement_height(const SVGUseElement *self);

/**
 * @brief Gets the `instanceRoot` property. 
*/
SVGElement SVGUseElement_instanceRoot(const SVGUseElement *self);

/**
 * @brief Gets the `animatedInstanceRoot` property. 
*/
SVGElement SVGUseElement_animatedInstanceRoot(const SVGUseElement *self);

/**
 * @brief Gets the `href` property. 
*/
SVGAnimatedString SVGUseElement_href(const SVGUseElement *self);

#ifdef __cplusplus
}
#endif
