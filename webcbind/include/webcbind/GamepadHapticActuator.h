#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GamepadEffectParameters GamepadEffectParameters;


/**
 * @brief Interface GamepadHapticActuator
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GamepadHapticActuator)
 */
DECLARE_EMLITE_TYPE(GamepadHapticActuator, em_Val);

/**
 * @brief Gets the `effects` property. 
*/
jb_Array GamepadHapticActuator_effects(const GamepadHapticActuator *self);

/**
 * @brief Calls the `playEffect` method. 
*/
jb_Promise GamepadHapticActuator_playEffect0(GamepadHapticActuator* self , GamepadHapticEffectType * type);

/**
 * @brief Calls the `playEffect` method. 
*/
jb_Promise GamepadHapticActuator_playEffect1(GamepadHapticActuator* self , GamepadHapticEffectType * type, GamepadEffectParameters * params);

/**
 * @brief Calls the `reset` method. 
*/
jb_Promise GamepadHapticActuator_reset(GamepadHapticActuator* self );

/**
 * @brief Calls the `pulse` method. 
*/
jb_Promise GamepadHapticActuator_pulse(GamepadHapticActuator* self , double value, double duration);

#ifdef __cplusplus
}
#endif
