#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGNumberList SVGNumberList;


/**
 * @brief Interface SVGAnimatedNumberList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedNumberList)
 */
DECLARE_EMLITE_TYPE(SVGAnimatedNumberList, em_Val);

/**
 * @brief Gets the `baseVal` property. 
*/
SVGNumberList SVGAnimatedNumberList_baseVal(const SVGAnimatedNumberList *self);

/**
 * @brief Gets the `animVal` property. 
*/
SVGNumberList SVGAnimatedNumberList_animVal(const SVGAnimatedNumberList *self);

#ifdef __cplusplus
}
#endif
