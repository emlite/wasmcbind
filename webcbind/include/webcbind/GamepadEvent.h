#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GamepadEventInit GamepadEventInit;
typedef struct Gamepad Gamepad;


/**
 * @brief Interface GamepadEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GamepadEvent)
 */
DECLARE_EMLITE_TYPE(GamepadEvent, Event);

/**
 * @brief Creates a new `GamepadEvent` object. 
*/
GamepadEvent GamepadEvent_new(jb_String * type, GamepadEventInit * eventInitDict);

/**
 * @brief Gets the `gamepad` property. 
*/
Gamepad GamepadEvent_gamepad(const GamepadEvent *self);

#ifdef __cplusplus
}
#endif
