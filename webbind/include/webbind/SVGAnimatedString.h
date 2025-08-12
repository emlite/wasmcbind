#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface SVGAnimatedString
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedString)
 */
DECLARE_EMLITE_TYPE(SVGAnimatedString, em_Val);

/**
 * @brief Gets the `baseVal` property. 
*/
jb_String SVGAnimatedString_baseVal(const SVGAnimatedString *self);

/**
 * @brief Sets the `baseVal` property. 
*/
void SVGAnimatedString_set_baseVal(SVGAnimatedString* self, jb_String * value);

/**
 * @brief Gets the `animVal` property. 
*/
jb_String SVGAnimatedString_animVal(const SVGAnimatedString *self);

#ifdef __cplusplus
}
#endif
