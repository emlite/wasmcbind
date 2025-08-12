#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Gamepad Gamepad;

/** @brief Dictionary type GamepadEventInit */
DECLARE_EMLITE_TYPE(GamepadEventInit, EventInit);

/** @brief Getter of the gamepad property */
Gamepad GamepadEventInit_gamepad(const GamepadEventInit *self);

/** @brief Setter of the gamepad property */
void GamepadEventInit_set_gamepad(GamepadEventInit* self, Gamepad * value);

/** @brief Constructor of the GamepadEventInit dictionary type */
GamepadEventInit GamepadEventInit_new();

#ifdef __cplusplus
}
#endif
