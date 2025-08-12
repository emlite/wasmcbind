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
typedef struct SVGAnimatedEnumeration SVGAnimatedEnumeration;
typedef struct SVGAnimatedLength SVGAnimatedLength;


/**
 * @brief Interface SVGFEGaussianBlurElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement)
 */
DECLARE_EMLITE_TYPE(SVGFEGaussianBlurElement, SVGElement);

/**
 * @brief Gets the `in1` property. 
*/
SVGAnimatedString SVGFEGaussianBlurElement_in1(const SVGFEGaussianBlurElement *self);

/**
 * @brief Gets the `stdDeviationX` property. 
*/
SVGAnimatedNumber SVGFEGaussianBlurElement_stdDeviationX(const SVGFEGaussianBlurElement *self);

/**
 * @brief Gets the `stdDeviationY` property. 
*/
SVGAnimatedNumber SVGFEGaussianBlurElement_stdDeviationY(const SVGFEGaussianBlurElement *self);

/**
 * @brief Gets the `edgeMode` property. 
*/
SVGAnimatedEnumeration SVGFEGaussianBlurElement_edgeMode(const SVGFEGaussianBlurElement *self);

/**
 * @brief Calls the `setStdDeviation` method. 
*/
jb_Undefined SVGFEGaussianBlurElement_setStdDeviation(SVGFEGaussianBlurElement* self , float stdDeviationX, float stdDeviationY);

/**
 * @brief Gets the `x` property. 
*/
SVGAnimatedLength SVGFEGaussianBlurElement_x(const SVGFEGaussianBlurElement *self);

/**
 * @brief Gets the `y` property. 
*/
SVGAnimatedLength SVGFEGaussianBlurElement_y(const SVGFEGaussianBlurElement *self);

/**
 * @brief Gets the `width` property. 
*/
SVGAnimatedLength SVGFEGaussianBlurElement_width(const SVGFEGaussianBlurElement *self);

/**
 * @brief Gets the `height` property. 
*/
SVGAnimatedLength SVGFEGaussianBlurElement_height(const SVGFEGaussianBlurElement *self);

/**
 * @brief Gets the `result` property. 
*/
SVGAnimatedString SVGFEGaussianBlurElement_result(const SVGFEGaussianBlurElement *self);

#ifdef __cplusplus
}
#endif
