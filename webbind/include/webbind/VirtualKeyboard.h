#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMRect DOMRect;


/**
 * @brief Interface VirtualKeyboard
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/VirtualKeyboard)
 */
DECLARE_EMLITE_TYPE(VirtualKeyboard, EventTarget);

/**
 * @brief Calls the `show` method. 
*/
jb_Undefined VirtualKeyboard_show(VirtualKeyboard* self );

/**
 * @brief Calls the `hide` method. 
*/
jb_Undefined VirtualKeyboard_hide(VirtualKeyboard* self );

/**
 * @brief Gets the `boundingRect` property. 
*/
DOMRect VirtualKeyboard_boundingRect(const VirtualKeyboard *self);

/**
 * @brief Gets the `overlaysContent` property. 
*/
bool VirtualKeyboard_overlaysContent(const VirtualKeyboard *self);

/**
 * @brief Sets the `overlaysContent` property. 
*/
void VirtualKeyboard_set_overlaysContent(VirtualKeyboard* self, bool value);

/**
 * @brief Gets the `ongeometrychange` property. 
*/
jb_Any VirtualKeyboard_ongeometrychange(const VirtualKeyboard *self);

/**
 * @brief Sets the `ongeometrychange` property. 
*/
void VirtualKeyboard_set_ongeometrychange(VirtualKeyboard* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
