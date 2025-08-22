#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SVGElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedString SVGAnimatedString;
typedef struct SVGAnimatedNumber SVGAnimatedNumber;
typedef struct SVGAnimatedEnumeration SVGAnimatedEnumeration;
typedef struct SVGAnimatedLength SVGAnimatedLength;


/**
 * @brief Interface SVGFEDisplacementMapElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement)
 */
DECLARE_EMLITE_TYPE(SVGFEDisplacementMapElement, SVGElement);

/**
 * @brief Gets the `in1` property. 
*/
SVGAnimatedString SVGFEDisplacementMapElement_in1(const SVGFEDisplacementMapElement *self);

/**
 * @brief Gets the `in2` property. 
*/
SVGAnimatedString SVGFEDisplacementMapElement_in2(const SVGFEDisplacementMapElement *self);

/**
 * @brief Gets the `scale` property. 
*/
SVGAnimatedNumber SVGFEDisplacementMapElement_scale(const SVGFEDisplacementMapElement *self);

/**
 * @brief Gets the `xChannelSelector` property. 
*/
SVGAnimatedEnumeration SVGFEDisplacementMapElement_xChannelSelector(const SVGFEDisplacementMapElement *self);

/**
 * @brief Gets the `yChannelSelector` property. 
*/
SVGAnimatedEnumeration SVGFEDisplacementMapElement_yChannelSelector(const SVGFEDisplacementMapElement *self);

/**
 * @brief Gets the `x` property. 
*/
SVGAnimatedLength SVGFEDisplacementMapElement_x(const SVGFEDisplacementMapElement *self);

/**
 * @brief Gets the `y` property. 
*/
SVGAnimatedLength SVGFEDisplacementMapElement_y(const SVGFEDisplacementMapElement *self);

/**
 * @brief Gets the `width` property. 
*/
SVGAnimatedLength SVGFEDisplacementMapElement_width(const SVGFEDisplacementMapElement *self);

/**
 * @brief Gets the `height` property. 
*/
SVGAnimatedLength SVGFEDisplacementMapElement_height(const SVGFEDisplacementMapElement *self);

/**
 * @brief Gets the `result` property. 
*/
SVGAnimatedString SVGFEDisplacementMapElement_result(const SVGFEDisplacementMapElement *self);

#ifdef __cplusplus
}
#endif
