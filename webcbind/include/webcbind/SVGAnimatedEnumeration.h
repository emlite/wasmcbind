#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface SVGAnimatedEnumeration
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedEnumeration)
 */
DECLARE_EMLITE_TYPE(SVGAnimatedEnumeration, em_Val);

/**
 * @brief Gets the `baseVal` property. 
*/
unsigned short SVGAnimatedEnumeration_baseVal(const SVGAnimatedEnumeration *self);

/**
 * @brief Sets the `baseVal` property. 
*/
void SVGAnimatedEnumeration_set_baseVal(SVGAnimatedEnumeration* self, unsigned short value);

/**
 * @brief Gets the `animVal` property. 
*/
unsigned short SVGAnimatedEnumeration_animVal(const SVGAnimatedEnumeration *self);

#ifdef __cplusplus
}
#endif
