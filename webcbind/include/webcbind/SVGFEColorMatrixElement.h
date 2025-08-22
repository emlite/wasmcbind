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
typedef struct SVGAnimatedNumberList SVGAnimatedNumberList;
typedef struct SVGAnimatedLength SVGAnimatedLength;


/**
 * @brief Interface SVGFEColorMatrixElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEColorMatrixElement)
 */
DECLARE_EMLITE_TYPE(SVGFEColorMatrixElement, SVGElement);

/**
 * @brief Gets the `in1` property. 
*/
SVGAnimatedString SVGFEColorMatrixElement_in1(const SVGFEColorMatrixElement *self);

/**
 * @brief Gets the `type` property. 
*/
SVGAnimatedEnumeration SVGFEColorMatrixElement_type(const SVGFEColorMatrixElement *self);

/**
 * @brief Gets the `values` property. 
*/
SVGAnimatedNumberList SVGFEColorMatrixElement_values(const SVGFEColorMatrixElement *self);

/**
 * @brief Gets the `x` property. 
*/
SVGAnimatedLength SVGFEColorMatrixElement_x(const SVGFEColorMatrixElement *self);

/**
 * @brief Gets the `y` property. 
*/
SVGAnimatedLength SVGFEColorMatrixElement_y(const SVGFEColorMatrixElement *self);

/**
 * @brief Gets the `width` property. 
*/
SVGAnimatedLength SVGFEColorMatrixElement_width(const SVGFEColorMatrixElement *self);

/**
 * @brief Gets the `height` property. 
*/
SVGAnimatedLength SVGFEColorMatrixElement_height(const SVGFEColorMatrixElement *self);

/**
 * @brief Gets the `result` property. 
*/
SVGAnimatedString SVGFEColorMatrixElement_result(const SVGFEColorMatrixElement *self);

#ifdef __cplusplus
}
#endif
