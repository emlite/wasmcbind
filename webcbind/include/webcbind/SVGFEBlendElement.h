#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SVGElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedString SVGAnimatedString;
typedef struct SVGAnimatedEnumeration SVGAnimatedEnumeration;
typedef struct SVGAnimatedLength SVGAnimatedLength;


/**
 * @brief Interface SVGFEBlendElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEBlendElement)
 */
DECLARE_EMLITE_TYPE(SVGFEBlendElement, SVGElement);

/**
 * @brief Gets the `in1` property. 
*/
SVGAnimatedString SVGFEBlendElement_in1(const SVGFEBlendElement *self);

/**
 * @brief Gets the `in2` property. 
*/
SVGAnimatedString SVGFEBlendElement_in2(const SVGFEBlendElement *self);

/**
 * @brief Gets the `mode` property. 
*/
SVGAnimatedEnumeration SVGFEBlendElement_mode(const SVGFEBlendElement *self);

/**
 * @brief Gets the `x` property. 
*/
SVGAnimatedLength SVGFEBlendElement_x(const SVGFEBlendElement *self);

/**
 * @brief Gets the `y` property. 
*/
SVGAnimatedLength SVGFEBlendElement_y(const SVGFEBlendElement *self);

/**
 * @brief Gets the `width` property. 
*/
SVGAnimatedLength SVGFEBlendElement_width(const SVGFEBlendElement *self);

/**
 * @brief Gets the `height` property. 
*/
SVGAnimatedLength SVGFEBlendElement_height(const SVGFEBlendElement *self);

/**
 * @brief Gets the `result` property. 
*/
SVGAnimatedString SVGFEBlendElement_result(const SVGFEBlendElement *self);

#ifdef __cplusplus
}
#endif
