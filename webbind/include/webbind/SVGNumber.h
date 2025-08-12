#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface SVGNumber
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGNumber)
 */
DECLARE_EMLITE_TYPE(SVGNumber, em_Val);

/**
 * @brief Gets the `value` property. 
*/
float SVGNumber_value(const SVGNumber *self);

/**
 * @brief Sets the `value` property. 
*/
void SVGNumber_set_value(SVGNumber* self, float value);

#ifdef __cplusplus
}
#endif
