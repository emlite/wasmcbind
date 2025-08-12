#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GamepadButton GamepadButton;
typedef struct GamepadTouch GamepadTouch;
typedef struct GamepadHapticActuator GamepadHapticActuator;
typedef struct GamepadPose GamepadPose;


/**
 * @brief Interface Gamepad
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad)
 */
DECLARE_EMLITE_TYPE(Gamepad, em_Val);

/**
 * @brief Gets the `id` property. 
*/
jb_String Gamepad_id(const Gamepad *self);

/**
 * @brief Gets the `index` property. 
*/
long Gamepad_index(const Gamepad *self);

/**
 * @brief Gets the `connected` property. 
*/
bool Gamepad_connected(const Gamepad *self);

/**
 * @brief Gets the `timestamp` property. 
*/
jb_Any Gamepad_timestamp(const Gamepad *self);

/**
 * @brief Gets the `mapping` property. 
*/
GamepadMappingType Gamepad_mapping(const Gamepad *self);

/**
 * @brief Gets the `axes` property. 
*/
jb_Array Gamepad_axes(const Gamepad *self);

/**
 * @brief Gets the `buttons` property. 
*/
jb_Array Gamepad_buttons(const Gamepad *self);

/**
 * @brief Gets the `touches` property. 
*/
jb_Array Gamepad_touches(const Gamepad *self);

/**
 * @brief Gets the `vibrationActuator` property. 
*/
GamepadHapticActuator Gamepad_vibrationActuator(const Gamepad *self);

/**
 * @brief Gets the `hand` property. 
*/
GamepadHand Gamepad_hand(const Gamepad *self);

/**
 * @brief Gets the `hapticActuators` property. 
*/
jb_Array Gamepad_hapticActuators(const Gamepad *self);

/**
 * @brief Gets the `pose` property. 
*/
GamepadPose Gamepad_pose(const Gamepad *self);

#ifdef __cplusplus
}
#endif
