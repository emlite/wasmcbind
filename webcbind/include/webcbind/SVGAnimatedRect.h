#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMRect DOMRect;
typedef struct DOMRectReadOnly DOMRectReadOnly;


/**
 * @brief Interface SVGAnimatedRect
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedRect)
 */
DECLARE_EMLITE_TYPE(SVGAnimatedRect, em_Val);

/**
 * @brief Gets the `baseVal` property. 
*/
DOMRect SVGAnimatedRect_baseVal(const SVGAnimatedRect *self);

/**
 * @brief Gets the `animVal` property. 
*/
DOMRectReadOnly SVGAnimatedRect_animVal(const SVGAnimatedRect *self);

#ifdef __cplusplus
}
#endif
