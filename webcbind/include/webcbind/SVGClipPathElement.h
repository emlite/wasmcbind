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


/**
 * @brief Interface SVGClipPathElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGClipPathElement)
 */
DECLARE_EMLITE_TYPE(SVGClipPathElement, SVGElement);

/**
 * @brief Gets the `clipPathUnits` property. 
*/
SVGAnimatedEnumeration SVGClipPathElement_clipPathUnits(const SVGClipPathElement *self);

/**
 * @brief Gets the `transform` property. 
*/
SVGAnimatedTransformList SVGClipPathElement_transform(const SVGClipPathElement *self);

#ifdef __cplusplus
}
#endif
