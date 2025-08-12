#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SVGElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedString SVGAnimatedString;
typedef struct SVGAnimatedNumber SVGAnimatedNumber;
typedef struct SVGAnimatedLength SVGAnimatedLength;


/**
 * @brief Interface SVGFEDiffuseLightingElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement)
 */
DECLARE_EMLITE_TYPE(SVGFEDiffuseLightingElement, SVGElement);

/**
 * @brief Gets the `in1` property. 
*/
SVGAnimatedString SVGFEDiffuseLightingElement_in1(const SVGFEDiffuseLightingElement *self);

/**
 * @brief Gets the `surfaceScale` property. 
*/
SVGAnimatedNumber SVGFEDiffuseLightingElement_surfaceScale(const SVGFEDiffuseLightingElement *self);

/**
 * @brief Gets the `diffuseConstant` property. 
*/
SVGAnimatedNumber SVGFEDiffuseLightingElement_diffuseConstant(const SVGFEDiffuseLightingElement *self);

/**
 * @brief Gets the `kernelUnitLengthX` property. 
*/
SVGAnimatedNumber SVGFEDiffuseLightingElement_kernelUnitLengthX(const SVGFEDiffuseLightingElement *self);

/**
 * @brief Gets the `kernelUnitLengthY` property. 
*/
SVGAnimatedNumber SVGFEDiffuseLightingElement_kernelUnitLengthY(const SVGFEDiffuseLightingElement *self);

/**
 * @brief Gets the `x` property. 
*/
SVGAnimatedLength SVGFEDiffuseLightingElement_x(const SVGFEDiffuseLightingElement *self);

/**
 * @brief Gets the `y` property. 
*/
SVGAnimatedLength SVGFEDiffuseLightingElement_y(const SVGFEDiffuseLightingElement *self);

/**
 * @brief Gets the `width` property. 
*/
SVGAnimatedLength SVGFEDiffuseLightingElement_width(const SVGFEDiffuseLightingElement *self);

/**
 * @brief Gets the `height` property. 
*/
SVGAnimatedLength SVGFEDiffuseLightingElement_height(const SVGFEDiffuseLightingElement *self);

/**
 * @brief Gets the `result` property. 
*/
SVGAnimatedString SVGFEDiffuseLightingElement_result(const SVGFEDiffuseLightingElement *self);

#ifdef __cplusplus
}
#endif
