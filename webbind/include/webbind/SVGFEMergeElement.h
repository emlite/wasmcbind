#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SVGElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedLength SVGAnimatedLength;
typedef struct SVGAnimatedString SVGAnimatedString;


/**
 * @brief Interface SVGFEMergeElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMergeElement)
 */
DECLARE_EMLITE_TYPE(SVGFEMergeElement, SVGElement);

/**
 * @brief Gets the `x` property. 
*/
SVGAnimatedLength SVGFEMergeElement_x(const SVGFEMergeElement *self);

/**
 * @brief Gets the `y` property. 
*/
SVGAnimatedLength SVGFEMergeElement_y(const SVGFEMergeElement *self);

/**
 * @brief Gets the `width` property. 
*/
SVGAnimatedLength SVGFEMergeElement_width(const SVGFEMergeElement *self);

/**
 * @brief Gets the `height` property. 
*/
SVGAnimatedLength SVGFEMergeElement_height(const SVGFEMergeElement *self);

/**
 * @brief Gets the `result` property. 
*/
SVGAnimatedString SVGFEMergeElement_result(const SVGFEMergeElement *self);

#ifdef __cplusplus
}
#endif
