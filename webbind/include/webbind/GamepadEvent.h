#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct Gamepad Gamepad;


typedef struct {
  Event inner;
} GamepadEvent;


DECLARE_EMLITE_TYPE(GamepadEvent, Event);

GamepadEvent GamepadEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

Gamepad GamepadEvent_gamepad( const GamepadEvent *self);
