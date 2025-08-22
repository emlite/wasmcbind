#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SVGElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedEnumeration SVGAnimatedEnumeration;
typedef struct SVGAnimatedTransformList SVGAnimatedTransformList;
typedef struct SVGAnimatedLength SVGAnimatedLength;
typedef struct SVGAnimatedRect SVGAnimatedRect;
typedef struct SVGAnimatedPreserveAspectRatio SVGAnimatedPreserveAspectRatio;
typedef struct SVGAnimatedString SVGAnimatedString;


/**
 * @brief Interface SVGPatternElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement)
 */
DECLARE_EMLITE_TYPE(SVGPatternElement, SVGElement);

/**
 * @brief Gets the `patternUnits` property. 
*/
SVGAnimatedEnumeration SVGPatternElement_patternUnits(const SVGPatternElement *self);

/**
 * @brief Gets the `patternContentUnits` property. 
*/
SVGAnimatedEnumeration SVGPatternElement_patternContentUnits(const SVGPatternElement *self);

/**
 * @brief Gets the `patternTransform` property. 
*/
SVGAnimatedTransformList SVGPatternElement_patternTransform(const SVGPatternElement *self);

/**
 * @brief Gets the `x` property. 
*/
SVGAnimatedLength SVGPatternElement_x(const SVGPatternElement *self);

/**
 * @brief Gets the `y` property. 
*/
SVGAnimatedLength SVGPatternElement_y(const SVGPatternElement *self);

/**
 * @brief Gets the `width` property. 
*/
SVGAnimatedLength SVGPatternElement_width(const SVGPatternElement *self);

/**
 * @brief Gets the `height` property. 
*/
SVGAnimatedLength SVGPatternElement_height(const SVGPatternElement *self);

/**
 * @brief Gets the `viewBox` property. 
*/
SVGAnimatedRect SVGPatternElement_viewBox(const SVGPatternElement *self);

/**
 * @brief Gets the `preserveAspectRatio` property. 
*/
SVGAnimatedPreserveAspectRatio SVGPatternElement_preserveAspectRatio(const SVGPatternElement *self);

/**
 * @brief Gets the `href` property. 
*/
SVGAnimatedString SVGPatternElement_href(const SVGPatternElement *self);

#ifdef __cplusplus
}
#endif
