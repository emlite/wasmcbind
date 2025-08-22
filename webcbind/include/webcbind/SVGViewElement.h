#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SVGElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedRect SVGAnimatedRect;
typedef struct SVGAnimatedPreserveAspectRatio SVGAnimatedPreserveAspectRatio;


/**
 * @brief Interface SVGViewElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGViewElement)
 */
DECLARE_EMLITE_TYPE(SVGViewElement, SVGElement);

/**
 * @brief Gets the `viewBox` property. 
*/
SVGAnimatedRect SVGViewElement_viewBox(const SVGViewElement *self);

/**
 * @brief Gets the `preserveAspectRatio` property. 
*/
SVGAnimatedPreserveAspectRatio SVGViewElement_preserveAspectRatio(const SVGViewElement *self);

#ifdef __cplusplus
}
#endif
