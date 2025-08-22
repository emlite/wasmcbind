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
 * @brief Interface SVGFEComponentTransferElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEComponentTransferElement)
 */
DECLARE_EMLITE_TYPE(SVGFEComponentTransferElement, SVGElement);

/**
 * @brief Gets the `in1` property. 
*/
SVGAnimatedString SVGFEComponentTransferElement_in1(const SVGFEComponentTransferElement *self);

/**
 * @brief Gets the `x` property. 
*/
SVGAnimatedLength SVGFEComponentTransferElement_x(const SVGFEComponentTransferElement *self);

/**
 * @brief Gets the `y` property. 
*/
SVGAnimatedLength SVGFEComponentTransferElement_y(const SVGFEComponentTransferElement *self);

/**
 * @brief Gets the `width` property. 
*/
SVGAnimatedLength SVGFEComponentTransferElement_width(const SVGFEComponentTransferElement *self);

/**
 * @brief Gets the `height` property. 
*/
SVGAnimatedLength SVGFEComponentTransferElement_height(const SVGFEComponentTransferElement *self);

/**
 * @brief Gets the `result` property. 
*/
SVGAnimatedString SVGFEComponentTransferElement_result(const SVGFEComponentTransferElement *self);

#ifdef __cplusplus
}
#endif
