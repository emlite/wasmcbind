#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SVGTextContentElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedLength SVGAnimatedLength;
typedef struct SVGAnimatedEnumeration SVGAnimatedEnumeration;
typedef struct SVGAnimatedString SVGAnimatedString;


/**
 * @brief Interface SVGTextPathElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPathElement)
 */
DECLARE_EMLITE_TYPE(SVGTextPathElement, SVGTextContentElement);

/**
 * @brief Gets the `startOffset` property. 
*/
SVGAnimatedLength SVGTextPathElement_startOffset(const SVGTextPathElement *self);

/**
 * @brief Gets the `method` property. 
*/
SVGAnimatedEnumeration SVGTextPathElement_method(const SVGTextPathElement *self);

/**
 * @brief Gets the `spacing` property. 
*/
SVGAnimatedEnumeration SVGTextPathElement_spacing(const SVGTextPathElement *self);

/**
 * @brief Gets the `href` property. 
*/
SVGAnimatedString SVGTextPathElement_href(const SVGTextPathElement *self);

#ifdef __cplusplus
}
#endif
