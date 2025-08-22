#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SVGElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedEnumeration SVGAnimatedEnumeration;
typedef struct SVGAnimatedLength SVGAnimatedLength;
typedef struct SVGAnimatedString SVGAnimatedString;


/**
 * @brief Interface SVGFilterElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGFilterElement)
 */
DECLARE_EMLITE_TYPE(SVGFilterElement, SVGElement);

/**
 * @brief Gets the `filterUnits` property. 
*/
SVGAnimatedEnumeration SVGFilterElement_filterUnits(const SVGFilterElement *self);

/**
 * @brief Gets the `primitiveUnits` property. 
*/
SVGAnimatedEnumeration SVGFilterElement_primitiveUnits(const SVGFilterElement *self);

/**
 * @brief Gets the `x` property. 
*/
SVGAnimatedLength SVGFilterElement_x(const SVGFilterElement *self);

/**
 * @brief Gets the `y` property. 
*/
SVGAnimatedLength SVGFilterElement_y(const SVGFilterElement *self);

/**
 * @brief Gets the `width` property. 
*/
SVGAnimatedLength SVGFilterElement_width(const SVGFilterElement *self);

/**
 * @brief Gets the `height` property. 
*/
SVGAnimatedLength SVGFilterElement_height(const SVGFilterElement *self);

/**
 * @brief Gets the `href` property. 
*/
SVGAnimatedString SVGFilterElement_href(const SVGFilterElement *self);

#ifdef __cplusplus
}
#endif
