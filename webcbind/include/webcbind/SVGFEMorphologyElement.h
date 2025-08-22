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
 * @brief Interface SVGFEMorphologyElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMorphologyElement)
 */
DECLARE_EMLITE_TYPE(SVGFEMorphologyElement, SVGElement);

/**
 * @brief Gets the `in1` property. 
*/
SVGAnimatedString SVGFEMorphologyElement_in1(const SVGFEMorphologyElement *self);

/**
 * @brief Gets the `operator` property. 
*/
SVGAnimatedEnumeration SVGFEMorphologyElement_operator_(const SVGFEMorphologyElement *self);

/**
 * @brief Gets the `radiusX` property. 
*/
SVGAnimatedNumber SVGFEMorphologyElement_radiusX(const SVGFEMorphologyElement *self);

/**
 * @brief Gets the `radiusY` property. 
*/
SVGAnimatedNumber SVGFEMorphologyElement_radiusY(const SVGFEMorphologyElement *self);

/**
 * @brief Gets the `x` property. 
*/
SVGAnimatedLength SVGFEMorphologyElement_x(const SVGFEMorphologyElement *self);

/**
 * @brief Gets the `y` property. 
*/
SVGAnimatedLength SVGFEMorphologyElement_y(const SVGFEMorphologyElement *self);

/**
 * @brief Gets the `width` property. 
*/
SVGAnimatedLength SVGFEMorphologyElement_width(const SVGFEMorphologyElement *self);

/**
 * @brief Gets the `height` property. 
*/
SVGAnimatedLength SVGFEMorphologyElement_height(const SVGFEMorphologyElement *self);

/**
 * @brief Gets the `result` property. 
*/
SVGAnimatedString SVGFEMorphologyElement_result(const SVGFEMorphologyElement *self);

#ifdef __cplusplus
}
#endif
