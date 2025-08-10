#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Gamepad Gamepad;

DECLARE_EMLITE_TYPE(GamepadEventInit, EventInit);

Gamepad GamepadEventInit_gamepad(const GamepadEventInit *self);

void GamepadEventInit_set_gamepad(GamepadEventInit* self, Gamepad * value);

GamepadEventInit GamepadEventInit_new();

#ifdef __cplusplus
}
#endif
