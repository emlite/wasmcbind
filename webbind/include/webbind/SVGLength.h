#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface SVGLength
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGLength)
 */
DECLARE_EMLITE_TYPE(SVGLength, em_Val);

/**
 * @brief Gets the `unitType` property. 
*/
unsigned short SVGLength_unitType(const SVGLength *self);

/**
 * @brief Gets the `value` property. 
*/
float SVGLength_value(const SVGLength *self);

/**
 * @brief Sets the `value` property. 
*/
void SVGLength_set_value(SVGLength* self, float value);

/**
 * @brief Gets the `valueInSpecifiedUnits` property. 
*/
float SVGLength_valueInSpecifiedUnits(const SVGLength *self);

/**
 * @brief Sets the `valueInSpecifiedUnits` property. 
*/
void SVGLength_set_valueInSpecifiedUnits(SVGLength* self, float value);

/**
 * @brief Gets the `valueAsString` property. 
*/
jb_String SVGLength_valueAsString(const SVGLength *self);

/**
 * @brief Sets the `valueAsString` property. 
*/
void SVGLength_set_valueAsString(SVGLength* self, jb_String * value);

/**
 * @brief Calls the `newValueSpecifiedUnits` method. 
*/
jb_Undefined SVGLength_newValueSpecifiedUnits(SVGLength* self , unsigned short unitType, float valueInSpecifiedUnits);

/**
 * @brief Calls the `convertToSpecifiedUnits` method. 
*/
jb_Undefined SVGLength_convertToSpecifiedUnits(SVGLength* self , unsigned short unitType);

#ifdef __cplusplus
}
#endif
