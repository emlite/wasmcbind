#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SVGElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedString SVGAnimatedString;


/**
 * @brief Interface SVGMPathElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGMPathElement)
 */
DECLARE_EMLITE_TYPE(SVGMPathElement, SVGElement);

/**
 * @brief Gets the `href` property. 
*/
SVGAnimatedString SVGMPathElement_href(const SVGMPathElement *self);

#ifdef __cplusplus
}
#endif
