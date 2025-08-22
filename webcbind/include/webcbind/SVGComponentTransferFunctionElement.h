#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SVGElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedEnumeration SVGAnimatedEnumeration;
typedef struct SVGAnimatedNumberList SVGAnimatedNumberList;
typedef struct SVGAnimatedNumber SVGAnimatedNumber;


/**
 * @brief Interface SVGComponentTransferFunctionElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGComponentTransferFunctionElement)
 */
DECLARE_EMLITE_TYPE(SVGComponentTransferFunctionElement, SVGElement);

/**
 * @brief Gets the `type` property. 
*/
SVGAnimatedEnumeration SVGComponentTransferFunctionElement_type(const SVGComponentTransferFunctionElement *self);

/**
 * @brief Gets the `tableValues` property. 
*/
SVGAnimatedNumberList SVGComponentTransferFunctionElement_tableValues(const SVGComponentTransferFunctionElement *self);

/**
 * @brief Gets the `slope` property. 
*/
SVGAnimatedNumber SVGComponentTransferFunctionElement_slope(const SVGComponentTransferFunctionElement *self);

/**
 * @brief Gets the `intercept` property. 
*/
SVGAnimatedNumber SVGComponentTransferFunctionElement_intercept(const SVGComponentTransferFunctionElement *self);

/**
 * @brief Gets the `amplitude` property. 
*/
SVGAnimatedNumber SVGComponentTransferFunctionElement_amplitude(const SVGComponentTransferFunctionElement *self);

/**
 * @brief Gets the `exponent` property. 
*/
SVGAnimatedNumber SVGComponentTransferFunctionElement_exponent(const SVGComponentTransferFunctionElement *self);

/**
 * @brief Gets the `offset` property. 
*/
SVGAnimatedNumber SVGComponentTransferFunctionElement_offset(const SVGComponentTransferFunctionElement *self);

#ifdef __cplusplus
}
#endif
