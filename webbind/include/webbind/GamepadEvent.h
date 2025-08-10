#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GamepadEventInit GamepadEventInit;
typedef struct Gamepad Gamepad;

DECLARE_EMLITE_TYPE(GamepadEvent, Event);

GamepadEvent GamepadEvent_new(jb_String * type, GamepadEventInit * eventInitDict);

Gamepad GamepadEvent_gamepad(const GamepadEvent *self);

#ifdef __cplusplus
}
#endif
