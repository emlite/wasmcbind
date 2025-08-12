#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct KeyboardLayoutMap KeyboardLayoutMap;


/**
 * @brief Interface Keyboard
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Keyboard)
 */
DECLARE_EMLITE_TYPE(Keyboard, EventTarget);

/**
 * @brief Calls the `lock` method. 
*/
jb_Promise Keyboard_lock0(Keyboard* self );

/**
 * @brief Calls the `lock` method. 
*/
jb_Promise Keyboard_lock1(Keyboard* self , jb_Array * keyCodes);

/**
 * @brief Calls the `unlock` method. 
*/
jb_Undefined Keyboard_unlock(Keyboard* self );

/**
 * @brief Calls the `getLayoutMap` method. 
*/
jb_Promise Keyboard_getLayoutMap(Keyboard* self );

/**
 * @brief Gets the `onlayoutchange` property. 
*/
jb_Any Keyboard_onlayoutchange(const Keyboard *self);

/**
 * @brief Sets the `onlayoutchange` property. 
*/
void Keyboard_set_onlayoutchange(Keyboard* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
