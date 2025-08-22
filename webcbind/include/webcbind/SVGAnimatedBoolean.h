#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface SVGAnimatedBoolean
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedBoolean)
 */
DECLARE_EMLITE_TYPE(SVGAnimatedBoolean, em_Val);

/**
 * @brief Gets the `baseVal` property. 
*/
bool SVGAnimatedBoolean_baseVal(const SVGAnimatedBoolean *self);

/**
 * @brief Sets the `baseVal` property. 
*/
void SVGAnimatedBoolean_set_baseVal(SVGAnimatedBoolean* self, bool value);

/**
 * @brief Gets the `animVal` property. 
*/
bool SVGAnimatedBoolean_animVal(const SVGAnimatedBoolean *self);

#ifdef __cplusplus
}
#endif
