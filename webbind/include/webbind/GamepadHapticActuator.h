#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GamepadEffectParameters GamepadEffectParameters;

DECLARE_EMLITE_TYPE(GamepadHapticActuator, em_Val);

jb_Array GamepadHapticActuator_effects(const GamepadHapticActuator *self);

jb_Promise GamepadHapticActuator_playEffect0(GamepadHapticActuator* self , GamepadHapticEffectType * type);

jb_Promise GamepadHapticActuator_playEffect1(GamepadHapticActuator* self , GamepadHapticEffectType * type, GamepadEffectParameters * params);

jb_Promise GamepadHapticActuator_reset(GamepadHapticActuator* self );

jb_Promise GamepadHapticActuator_pulse(GamepadHapticActuator* self , double value, double duration);

#ifdef __cplusplus
}
#endif
