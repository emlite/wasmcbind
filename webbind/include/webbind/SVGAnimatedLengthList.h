#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGLengthList SVGLengthList;


/**
 * @brief Interface SVGAnimatedLengthList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedLengthList)
 */
DECLARE_EMLITE_TYPE(SVGAnimatedLengthList, em_Val);

/**
 * @brief Gets the `baseVal` property. 
*/
SVGLengthList SVGAnimatedLengthList_baseVal(const SVGAnimatedLengthList *self);

/**
 * @brief Gets the `animVal` property. 
*/
SVGLengthList SVGAnimatedLengthList_animVal(const SVGAnimatedLengthList *self);

#ifdef __cplusplus
}
#endif
