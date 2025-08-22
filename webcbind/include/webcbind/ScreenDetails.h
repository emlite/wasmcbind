#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ScreenDetailed ScreenDetailed;


/**
 * @brief Interface ScreenDetails
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetails)
 */
DECLARE_EMLITE_TYPE(ScreenDetails, EventTarget);

/**
 * @brief Gets the `screens` property. 
*/
jb_Array ScreenDetails_screens(const ScreenDetails *self);

/**
 * @brief Gets the `currentScreen` property. 
*/
ScreenDetailed ScreenDetails_currentScreen(const ScreenDetails *self);

/**
 * @brief Gets the `onscreenschange` property. 
*/
jb_Any ScreenDetails_onscreenschange(const ScreenDetails *self);

/**
 * @brief Sets the `onscreenschange` property. 
*/
void ScreenDetails_set_onscreenschange(ScreenDetails* self, jb_Any * value);

/**
 * @brief Gets the `oncurrentscreenchange` property. 
*/
jb_Any ScreenDetails_oncurrentscreenchange(const ScreenDetails *self);

/**
 * @brief Sets the `oncurrentscreenchange` property. 
*/
void ScreenDetails_set_oncurrentscreenchange(ScreenDetails* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
