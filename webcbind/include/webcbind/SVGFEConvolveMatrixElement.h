#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SVGElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedString SVGAnimatedString;
typedef struct SVGAnimatedInteger SVGAnimatedInteger;
typedef struct SVGAnimatedNumberList SVGAnimatedNumberList;
typedef struct SVGAnimatedNumber SVGAnimatedNumber;
typedef struct SVGAnimatedEnumeration SVGAnimatedEnumeration;
typedef struct SVGAnimatedBoolean SVGAnimatedBoolean;
typedef struct SVGAnimatedLength SVGAnimatedLength;


/**
 * @brief Interface SVGFEConvolveMatrixElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement)
 */
DECLARE_EMLITE_TYPE(SVGFEConvolveMatrixElement, SVGElement);

/**
 * @brief Gets the `in1` property. 
*/
SVGAnimatedString SVGFEConvolveMatrixElement_in1(const SVGFEConvolveMatrixElement *self);

/**
 * @brief Gets the `orderX` property. 
*/
SVGAnimatedInteger SVGFEConvolveMatrixElement_orderX(const SVGFEConvolveMatrixElement *self);

/**
 * @brief Gets the `orderY` property. 
*/
SVGAnimatedInteger SVGFEConvolveMatrixElement_orderY(const SVGFEConvolveMatrixElement *self);

/**
 * @brief Gets the `kernelMatrix` property. 
*/
SVGAnimatedNumberList SVGFEConvolveMatrixElement_kernelMatrix(const SVGFEConvolveMatrixElement *self);

/**
 * @brief Gets the `divisor` property. 
*/
SVGAnimatedNumber SVGFEConvolveMatrixElement_divisor(const SVGFEConvolveMatrixElement *self);

/**
 * @brief Gets the `bias` property. 
*/
SVGAnimatedNumber SVGFEConvolveMatrixElement_bias(const SVGFEConvolveMatrixElement *self);

/**
 * @brief Gets the `targetX` property. 
*/
SVGAnimatedInteger SVGFEConvolveMatrixElement_targetX(const SVGFEConvolveMatrixElement *self);

/**
 * @brief Gets the `targetY` property. 
*/
SVGAnimatedInteger SVGFEConvolveMatrixElement_targetY(const SVGFEConvolveMatrixElement *self);

/**
 * @brief Gets the `edgeMode` property. 
*/
SVGAnimatedEnumeration SVGFEConvolveMatrixElement_edgeMode(const SVGFEConvolveMatrixElement *self);

/**
 * @brief Gets the `kernelUnitLengthX` property. 
*/
SVGAnimatedNumber SVGFEConvolveMatrixElement_kernelUnitLengthX(const SVGFEConvolveMatrixElement *self);

/**
 * @brief Gets the `kernelUnitLengthY` property. 
*/
SVGAnimatedNumber SVGFEConvolveMatrixElement_kernelUnitLengthY(const SVGFEConvolveMatrixElement *self);

/**
 * @brief Gets the `preserveAlpha` property. 
*/
SVGAnimatedBoolean SVGFEConvolveMatrixElement_preserveAlpha(const SVGFEConvolveMatrixElement *self);

/**
 * @brief Gets the `x` property. 
*/
SVGAnimatedLength SVGFEConvolveMatrixElement_x(const SVGFEConvolveMatrixElement *self);

/**
 * @brief Gets the `y` property. 
*/
SVGAnimatedLength SVGFEConvolveMatrixElement_y(const SVGFEConvolveMatrixElement *self);

/**
 * @brief Gets the `width` property. 
*/
SVGAnimatedLength SVGFEConvolveMatrixElement_width(const SVGFEConvolveMatrixElement *self);

/**
 * @brief Gets the `height` property. 
*/
SVGAnimatedLength SVGFEConvolveMatrixElement_height(const SVGFEConvolveMatrixElement *self);

/**
 * @brief Gets the `result` property. 
*/
SVGAnimatedString SVGFEConvolveMatrixElement_result(const SVGFEConvolveMatrixElement *self);

#ifdef __cplusplus
}
#endif
