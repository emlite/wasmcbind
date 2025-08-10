#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GamepadEffectParameters, em_Val);

long long GamepadEffectParameters_duration(const GamepadEffectParameters *self);

void GamepadEffectParameters_set_duration(GamepadEffectParameters* self, long long value);

long long GamepadEffectParameters_startDelay(const GamepadEffectParameters *self);

void GamepadEffectParameters_set_startDelay(GamepadEffectParameters* self, long long value);

double GamepadEffectParameters_strongMagnitude(const GamepadEffectParameters *self);

void GamepadEffectParameters_set_strongMagnitude(GamepadEffectParameters* self, double value);

double GamepadEffectParameters_weakMagnitude(const GamepadEffectParameters *self);

void GamepadEffectParameters_set_weakMagnitude(GamepadEffectParameters* self, double value);

double GamepadEffectParameters_leftTrigger(const GamepadEffectParameters *self);

void GamepadEffectParameters_set_leftTrigger(GamepadEffectParameters* self, double value);

double GamepadEffectParameters_rightTrigger(const GamepadEffectParameters *self);

void GamepadEffectParameters_set_rightTrigger(GamepadEffectParameters* self, double value);

GamepadEffectParameters GamepadEffectParameters_new();

#ifdef __cplusplus
}
#endif
