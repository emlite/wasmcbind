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
typedef struct SVGAnimatedNumber SVGAnimatedNumber;
typedef struct SVGAnimatedLength SVGAnimatedLength;


/**
 * @brief Interface SVGFECompositeElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement)
 */
DECLARE_EMLITE_TYPE(SVGFECompositeElement, SVGElement);

/**
 * @brief Gets the `in1` property. 
*/
SVGAnimatedString SVGFECompositeElement_in1(const SVGFECompositeElement *self);

/**
 * @brief Gets the `in2` property. 
*/
SVGAnimatedString SVGFECompositeElement_in2(const SVGFECompositeElement *self);

/**
 * @brief Gets the `operator` property. 
*/
SVGAnimatedEnumeration SVGFECompositeElement_operator_(const SVGFECompositeElement *self);

/**
 * @brief Gets the `k1` property. 
*/
SVGAnimatedNumber SVGFECompositeElement_k1(const SVGFECompositeElement *self);

/**
 * @brief Gets the `k2` property. 
*/
SVGAnimatedNumber SVGFECompositeElement_k2(const SVGFECompositeElement *self);

/**
 * @brief Gets the `k3` property. 
*/
SVGAnimatedNumber SVGFECompositeElement_k3(const SVGFECompositeElement *self);

/**
 * @brief Gets the `k4` property. 
*/
SVGAnimatedNumber SVGFECompositeElement_k4(const SVGFECompositeElement *self);

/**
 * @brief Gets the `x` property. 
*/
SVGAnimatedLength SVGFECompositeElement_x(const SVGFECompositeElement *self);

/**
 * @brief Gets the `y` property. 
*/
SVGAnimatedLength SVGFECompositeElement_y(const SVGFECompositeElement *self);

/**
 * @brief Gets the `width` property. 
*/
SVGAnimatedLength SVGFECompositeElement_width(const SVGFECompositeElement *self);

/**
 * @brief Gets the `height` property. 
*/
SVGAnimatedLength SVGFECompositeElement_height(const SVGFECompositeElement *self);

/**
 * @brief Gets the `result` property. 
*/
SVGAnimatedString SVGFECompositeElement_result(const SVGFECompositeElement *self);

#ifdef __cplusplus
}
#endif
