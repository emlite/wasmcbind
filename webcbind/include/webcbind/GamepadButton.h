#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface GamepadButton
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GamepadButton)
 */
DECLARE_EMLITE_TYPE(GamepadButton, em_Val);

/**
 * @brief Gets the `pressed` property. 
*/
bool GamepadButton_pressed(const GamepadButton *self);

/**
 * @brief Gets the `touched` property. 
*/
bool GamepadButton_touched(const GamepadButton *self);

/**
 * @brief Gets the `value` property. 
*/
double GamepadButton_value(const GamepadButton *self);

#ifdef __cplusplus
}
#endif
