#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SVGElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedString SVGAnimatedString;
typedef struct SVGAnimatedLength SVGAnimatedLength;


/**
 * @brief Interface SVGFETileElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETileElement)
 */
DECLARE_EMLITE_TYPE(SVGFETileElement, SVGElement);

/**
 * @brief Gets the `in1` property. 
*/
SVGAnimatedString SVGFETileElement_in1(const SVGFETileElement *self);

/**
 * @brief Gets the `x` property. 
*/
SVGAnimatedLength SVGFETileElement_x(const SVGFETileElement *self);

/**
 * @brief Gets the `y` property. 
*/
SVGAnimatedLength SVGFETileElement_y(const SVGFETileElement *self);

/**
 * @brief Gets the `width` property. 
*/
SVGAnimatedLength SVGFETileElement_width(const SVGFETileElement *self);

/**
 * @brief Gets the `height` property. 
*/
SVGAnimatedLength SVGFETileElement_height(const SVGFETileElement *self);

/**
 * @brief Gets the `result` property. 
*/
SVGAnimatedString SVGFETileElement_result(const SVGFETileElement *self);

#ifdef __cplusplus
}
#endif
