#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface ScreenOrientation
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ScreenOrientation)
 */
DECLARE_EMLITE_TYPE(ScreenOrientation, EventTarget);

/**
 * @brief Calls the `lock` method. 
*/
jb_Promise ScreenOrientation_lock(ScreenOrientation* self , OrientationLockType * orientation);

/**
 * @brief Calls the `unlock` method. 
*/
jb_Undefined ScreenOrientation_unlock(ScreenOrientation* self );

/**
 * @brief Gets the `type` property. 
*/
OrientationType ScreenOrientation_type(const ScreenOrientation *self);

/**
 * @brief Gets the `angle` property. 
*/
unsigned short ScreenOrientation_angle(const ScreenOrientation *self);

/**
 * @brief Gets the `onchange` property. 
*/
jb_Any ScreenOrientation_onchange(const ScreenOrientation *self);

/**
 * @brief Sets the `onchange` property. 
*/
void ScreenOrientation_set_onchange(ScreenOrientation* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
