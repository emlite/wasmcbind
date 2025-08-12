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
 * @brief Interface SVGFESpecularLightingElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement)
 */
DECLARE_EMLITE_TYPE(SVGFESpecularLightingElement, SVGElement);

/**
 * @brief Gets the `in1` property. 
*/
SVGAnimatedString SVGFESpecularLightingElement_in1(const SVGFESpecularLightingElement *self);

/**
 * @brief Gets the `surfaceScale` property. 
*/
SVGAnimatedNumber SVGFESpecularLightingElement_surfaceScale(const SVGFESpecularLightingElement *self);

/**
 * @brief Gets the `specularConstant` property. 
*/
SVGAnimatedNumber SVGFESpecularLightingElement_specularConstant(const SVGFESpecularLightingElement *self);

/**
 * @brief Gets the `specularExponent` property. 
*/
SVGAnimatedNumber SVGFESpecularLightingElement_specularExponent(const SVGFESpecularLightingElement *self);

/**
 * @brief Gets the `kernelUnitLengthX` property. 
*/
SVGAnimatedNumber SVGFESpecularLightingElement_kernelUnitLengthX(const SVGFESpecularLightingElement *self);

/**
 * @brief Gets the `kernelUnitLengthY` property. 
*/
SVGAnimatedNumber SVGFESpecularLightingElement_kernelUnitLengthY(const SVGFESpecularLightingElement *self);

/**
 * @brief Gets the `x` property. 
*/
SVGAnimatedLength SVGFESpecularLightingElement_x(const SVGFESpecularLightingElement *self);

/**
 * @brief Gets the `y` property. 
*/
SVGAnimatedLength SVGFESpecularLightingElement_y(const SVGFESpecularLightingElement *self);

/**
 * @brief Gets the `width` property. 
*/
SVGAnimatedLength SVGFESpecularLightingElement_width(const SVGFESpecularLightingElement *self);

/**
 * @brief Gets the `height` property. 
*/
SVGAnimatedLength SVGFESpecularLightingElement_height(const SVGFESpecularLightingElement *self);

/**
 * @brief Gets the `result` property. 
*/
SVGAnimatedString SVGFESpecularLightingElement_result(const SVGFESpecularLightingElement *self);

#ifdef __cplusplus
}
#endif
