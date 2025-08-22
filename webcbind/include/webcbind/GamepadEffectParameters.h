#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GamepadEffectParameters */
DECLARE_EMLITE_TYPE(GamepadEffectParameters, em_Val);

/** @brief Getter of the duration property */
long long GamepadEffectParameters_duration(const GamepadEffectParameters *self);

/** @brief Setter of the duration property */
void GamepadEffectParameters_set_duration(GamepadEffectParameters* self, long long value);

/** @brief Getter of the startDelay property */
long long GamepadEffectParameters_startDelay(const GamepadEffectParameters *self);

/** @brief Setter of the startDelay property */
void GamepadEffectParameters_set_startDelay(GamepadEffectParameters* self, long long value);

/** @brief Getter of the strongMagnitude property */
double GamepadEffectParameters_strongMagnitude(const GamepadEffectParameters *self);

/** @brief Setter of the strongMagnitude property */
void GamepadEffectParameters_set_strongMagnitude(GamepadEffectParameters* self, double value);

/** @brief Getter of the weakMagnitude property */
double GamepadEffectParameters_weakMagnitude(const GamepadEffectParameters *self);

/** @brief Setter of the weakMagnitude property */
void GamepadEffectParameters_set_weakMagnitude(GamepadEffectParameters* self, double value);

/** @brief Getter of the leftTrigger property */
double GamepadEffectParameters_leftTrigger(const GamepadEffectParameters *self);

/** @brief Setter of the leftTrigger property */
void GamepadEffectParameters_set_leftTrigger(GamepadEffectParameters* self, double value);

/** @brief Getter of the rightTrigger property */
double GamepadEffectParameters_rightTrigger(const GamepadEffectParameters *self);

/** @brief Setter of the rightTrigger property */
void GamepadEffectParameters_set_rightTrigger(GamepadEffectParameters* self, double value);

/** @brief Constructor of the GamepadEffectParameters dictionary type */
GamepadEffectParameters GamepadEffectParameters_new();

#ifdef __cplusplus
}
#endif
