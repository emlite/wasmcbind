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
 * @brief Interface SVGFEDropShadowElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement)
 */
DECLARE_EMLITE_TYPE(SVGFEDropShadowElement, SVGElement);

/**
 * @brief Gets the `in1` property. 
*/
SVGAnimatedString SVGFEDropShadowElement_in1(const SVGFEDropShadowElement *self);

/**
 * @brief Gets the `dx` property. 
*/
SVGAnimatedNumber SVGFEDropShadowElement_dx(const SVGFEDropShadowElement *self);

/**
 * @brief Gets the `dy` property. 
*/
SVGAnimatedNumber SVGFEDropShadowElement_dy(const SVGFEDropShadowElement *self);

/**
 * @brief Gets the `stdDeviationX` property. 
*/
SVGAnimatedNumber SVGFEDropShadowElement_stdDeviationX(const SVGFEDropShadowElement *self);

/**
 * @brief Gets the `stdDeviationY` property. 
*/
SVGAnimatedNumber SVGFEDropShadowElement_stdDeviationY(const SVGFEDropShadowElement *self);

/**
 * @brief Calls the `setStdDeviation` method. 
*/
jb_Undefined SVGFEDropShadowElement_setStdDeviation(SVGFEDropShadowElement* self , float stdDeviationX, float stdDeviationY);

/**
 * @brief Gets the `x` property. 
*/
SVGAnimatedLength SVGFEDropShadowElement_x(const SVGFEDropShadowElement *self);

/**
 * @brief Gets the `y` property. 
*/
SVGAnimatedLength SVGFEDropShadowElement_y(const SVGFEDropShadowElement *self);

/**
 * @brief Gets the `width` property. 
*/
SVGAnimatedLength SVGFEDropShadowElement_width(const SVGFEDropShadowElement *self);

/**
 * @brief Gets the `height` property. 
*/
SVGAnimatedLength SVGFEDropShadowElement_height(const SVGFEDropShadowElement *self);

/**
 * @brief Gets the `result` property. 
*/
SVGAnimatedString SVGFEDropShadowElement_result(const SVGFEDropShadowElement *self);

#ifdef __cplusplus
}
#endif
