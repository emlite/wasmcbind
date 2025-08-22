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
typedef struct SVGAnimatedLength SVGAnimatedLength;


/**
 * @brief Interface SVGFEOffsetElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEOffsetElement)
 */
DECLARE_EMLITE_TYPE(SVGFEOffsetElement, SVGElement);

/**
 * @brief Gets the `in1` property. 
*/
SVGAnimatedString SVGFEOffsetElement_in1(const SVGFEOffsetElement *self);

/**
 * @brief Gets the `dx` property. 
*/
SVGAnimatedNumber SVGFEOffsetElement_dx(const SVGFEOffsetElement *self);

/**
 * @brief Gets the `dy` property. 
*/
SVGAnimatedNumber SVGFEOffsetElement_dy(const SVGFEOffsetElement *self);

/**
 * @brief Gets the `x` property. 
*/
SVGAnimatedLength SVGFEOffsetElement_x(const SVGFEOffsetElement *self);

/**
 * @brief Gets the `y` property. 
*/
SVGAnimatedLength SVGFEOffsetElement_y(const SVGFEOffsetElement *self);

/**
 * @brief Gets the `width` property. 
*/
SVGAnimatedLength SVGFEOffsetElement_width(const SVGFEOffsetElement *self);

/**
 * @brief Gets the `height` property. 
*/
SVGAnimatedLength SVGFEOffsetElement_height(const SVGFEOffsetElement *self);

/**
 * @brief Gets the `result` property. 
*/
SVGAnimatedString SVGFEOffsetElement_result(const SVGFEOffsetElement *self);

#ifdef __cplusplus
}
#endif
