#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SVGGraphicsElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedRect SVGAnimatedRect;
typedef struct SVGAnimatedPreserveAspectRatio SVGAnimatedPreserveAspectRatio;


/**
 * @brief Interface SVGSymbolElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGSymbolElement)
 */
DECLARE_EMLITE_TYPE(SVGSymbolElement, SVGGraphicsElement);

/**
 * @brief Gets the `viewBox` property. 
*/
SVGAnimatedRect SVGSymbolElement_viewBox(const SVGSymbolElement *self);

/**
 * @brief Gets the `preserveAspectRatio` property. 
*/
SVGAnimatedPreserveAspectRatio SVGSymbolElement_preserveAspectRatio(const SVGSymbolElement *self);

#ifdef __cplusplus
}
#endif
