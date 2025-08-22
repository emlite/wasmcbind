#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SVGElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedNumber SVGAnimatedNumber;
typedef struct SVGAnimatedInteger SVGAnimatedInteger;
typedef struct SVGAnimatedEnumeration SVGAnimatedEnumeration;
typedef struct SVGAnimatedLength SVGAnimatedLength;
typedef struct SVGAnimatedString SVGAnimatedString;


/**
 * @brief Interface SVGFETurbulenceElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement)
 */
DECLARE_EMLITE_TYPE(SVGFETurbulenceElement, SVGElement);

/**
 * @brief Gets the `baseFrequencyX` property. 
*/
SVGAnimatedNumber SVGFETurbulenceElement_baseFrequencyX(const SVGFETurbulenceElement *self);

/**
 * @brief Gets the `baseFrequencyY` property. 
*/
SVGAnimatedNumber SVGFETurbulenceElement_baseFrequencyY(const SVGFETurbulenceElement *self);

/**
 * @brief Gets the `numOctaves` property. 
*/
SVGAnimatedInteger SVGFETurbulenceElement_numOctaves(const SVGFETurbulenceElement *self);

/**
 * @brief Gets the `seed` property. 
*/
SVGAnimatedNumber SVGFETurbulenceElement_seed(const SVGFETurbulenceElement *self);

/**
 * @brief Gets the `stitchTiles` property. 
*/
SVGAnimatedEnumeration SVGFETurbulenceElement_stitchTiles(const SVGFETurbulenceElement *self);

/**
 * @brief Gets the `type` property. 
*/
SVGAnimatedEnumeration SVGFETurbulenceElement_type(const SVGFETurbulenceElement *self);

/**
 * @brief Gets the `x` property. 
*/
SVGAnimatedLength SVGFETurbulenceElement_x(const SVGFETurbulenceElement *self);

/**
 * @brief Gets the `y` property. 
*/
SVGAnimatedLength SVGFETurbulenceElement_y(const SVGFETurbulenceElement *self);

/**
 * @brief Gets the `width` property. 
*/
SVGAnimatedLength SVGFETurbulenceElement_width(const SVGFETurbulenceElement *self);

/**
 * @brief Gets the `height` property. 
*/
SVGAnimatedLength SVGFETurbulenceElement_height(const SVGFETurbulenceElement *self);

/**
 * @brief Gets the `result` property. 
*/
SVGAnimatedString SVGFETurbulenceElement_result(const SVGFETurbulenceElement *self);

#ifdef __cplusplus
}
#endif
