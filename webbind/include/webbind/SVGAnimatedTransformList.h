#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGTransformList SVGTransformList;


/**
 * @brief Interface SVGAnimatedTransformList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedTransformList)
 */
DECLARE_EMLITE_TYPE(SVGAnimatedTransformList, em_Val);

/**
 * @brief Gets the `baseVal` property. 
*/
SVGTransformList SVGAnimatedTransformList_baseVal(const SVGAnimatedTransformList *self);

/**
 * @brief Gets the `animVal` property. 
*/
SVGTransformList SVGAnimatedTransformList_animVal(const SVGAnimatedTransformList *self);

#ifdef __cplusplus
}
#endif
