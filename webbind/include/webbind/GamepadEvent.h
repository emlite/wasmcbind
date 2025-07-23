#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct Gamepad Gamepad;


DECLARE_EMLITE_TYPE(GamepadEvent, Event);

GamepadEvent GamepadEvent_new(jb_DOMString * type, jb_Any * eventInitDict);

Gamepad GamepadEvent_gamepad(const GamepadEvent *self);
