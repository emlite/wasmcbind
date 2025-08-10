#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMPointReadOnly DOMPointReadOnly;
typedef struct DOMRectReadOnly DOMRectReadOnly;

DECLARE_EMLITE_TYPE(GamepadTouch, em_Val);

unsigned long GamepadTouch_touchId(const GamepadTouch *self);

void GamepadTouch_set_touchId(GamepadTouch* self, unsigned long value);

unsigned char GamepadTouch_surfaceId(const GamepadTouch *self);

void GamepadTouch_set_surfaceId(GamepadTouch* self, unsigned char value);

DOMPointReadOnly GamepadTouch_position(const GamepadTouch *self);

void GamepadTouch_set_position(GamepadTouch* self, DOMPointReadOnly * value);

DOMRectReadOnly GamepadTouch_surfaceDimensions(const GamepadTouch *self);

void GamepadTouch_set_surfaceDimensions(GamepadTouch* self, DOMRectReadOnly * value);

GamepadTouch GamepadTouch_new();

#ifdef __cplusplus
}
#endif
