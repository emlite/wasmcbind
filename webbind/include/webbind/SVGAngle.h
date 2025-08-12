#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface SVGAngle
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGAngle)
 */
DECLARE_EMLITE_TYPE(SVGAngle, em_Val);

/**
 * @brief Gets the `unitType` property. 
*/
unsigned short SVGAngle_unitType(const SVGAngle *self);

/**
 * @brief Gets the `value` property. 
*/
float SVGAngle_value(const SVGAngle *self);

/**
 * @brief Sets the `value` property. 
*/
void SVGAngle_set_value(SVGAngle* self, float value);

/**
 * @brief Gets the `valueInSpecifiedUnits` property. 
*/
float SVGAngle_valueInSpecifiedUnits(const SVGAngle *self);

/**
 * @brief Sets the `valueInSpecifiedUnits` property. 
*/
void SVGAngle_set_valueInSpecifiedUnits(SVGAngle* self, float value);

/**
 * @brief Gets the `valueAsString` property. 
*/
jb_String SVGAngle_valueAsString(const SVGAngle *self);

/**
 * @brief Sets the `valueAsString` property. 
*/
void SVGAngle_set_valueAsString(SVGAngle* self, jb_String * value);

/**
 * @brief Calls the `newValueSpecifiedUnits` method. 
*/
jb_Undefined SVGAngle_newValueSpecifiedUnits(SVGAngle* self , unsigned short unitType, float valueInSpecifiedUnits);

/**
 * @brief Calls the `convertToSpecifiedUnits` method. 
*/
jb_Undefined SVGAngle_convertToSpecifiedUnits(SVGAngle* self , unsigned short unitType);

#ifdef __cplusplus
}
#endif
