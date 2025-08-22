#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CSSNumericValue.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSUnitValue
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSUnitValue)
 */
DECLARE_EMLITE_TYPE(CSSUnitValue, CSSNumericValue);

/**
 * @brief Creates a new `CSSUnitValue` object. 
*/
CSSUnitValue CSSUnitValue_new(double value, jb_String * unit);

/**
 * @brief Gets the `value` property. 
*/
double CSSUnitValue_value(const CSSUnitValue *self);

/**
 * @brief Sets the `value` property. 
*/
void CSSUnitValue_set_value(CSSUnitValue* self, double value);

/**
 * @brief Gets the `unit` property. 
*/
jb_String CSSUnitValue_unit(const CSSUnitValue *self);

#ifdef __cplusplus
}
#endif
