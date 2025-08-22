#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SVGTextContentElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedLengthList SVGAnimatedLengthList;
typedef struct SVGAnimatedNumberList SVGAnimatedNumberList;


/**
 * @brief Interface SVGTextPositioningElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPositioningElement)
 */
DECLARE_EMLITE_TYPE(SVGTextPositioningElement, SVGTextContentElement);

/**
 * @brief Gets the `x` property. 
*/
SVGAnimatedLengthList SVGTextPositioningElement_x(const SVGTextPositioningElement *self);

/**
 * @brief Gets the `y` property. 
*/
SVGAnimatedLengthList SVGTextPositioningElement_y(const SVGTextPositioningElement *self);

/**
 * @brief Gets the `dx` property. 
*/
SVGAnimatedLengthList SVGTextPositioningElement_dx(const SVGTextPositioningElement *self);

/**
 * @brief Gets the `dy` property. 
*/
SVGAnimatedLengthList SVGTextPositioningElement_dy(const SVGTextPositioningElement *self);

/**
 * @brief Gets the `rotate` property. 
*/
SVGAnimatedNumberList SVGTextPositioningElement_rotate(const SVGTextPositioningElement *self);

#ifdef __cplusplus
}
#endif
