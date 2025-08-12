#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMPointReadOnly DOMPointReadOnly;
typedef struct DOMRectReadOnly DOMRectReadOnly;

/** @brief Dictionary type GamepadTouch */
DECLARE_EMLITE_TYPE(GamepadTouch, em_Val);

/** @brief Getter of the touchId property */
unsigned long GamepadTouch_touchId(const GamepadTouch *self);

/** @brief Setter of the touchId property */
void GamepadTouch_set_touchId(GamepadTouch* self, unsigned long value);

/** @brief Getter of the surfaceId property */
unsigned char GamepadTouch_surfaceId(const GamepadTouch *self);

/** @brief Setter of the surfaceId property */
void GamepadTouch_set_surfaceId(GamepadTouch* self, unsigned char value);

/** @brief Getter of the position property */
DOMPointReadOnly GamepadTouch_position(const GamepadTouch *self);

/** @brief Setter of the position property */
void GamepadTouch_set_position(GamepadTouch* self, DOMPointReadOnly * value);

/** @brief Getter of the surfaceDimensions property */
DOMRectReadOnly GamepadTouch_surfaceDimensions(const GamepadTouch *self);

/** @brief Setter of the surfaceDimensions property */
void GamepadTouch_set_surfaceDimensions(GamepadTouch* self, DOMRectReadOnly * value);

/** @brief Constructor of the GamepadTouch dictionary type */
GamepadTouch GamepadTouch_new();

#ifdef __cplusplus
}
#endif
