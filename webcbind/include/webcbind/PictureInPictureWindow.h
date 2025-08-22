#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface PictureInPictureWindow
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PictureInPictureWindow)
 */
DECLARE_EMLITE_TYPE(PictureInPictureWindow, EventTarget);

/**
 * @brief Gets the `width` property. 
*/
long PictureInPictureWindow_width(const PictureInPictureWindow *self);

/**
 * @brief Gets the `height` property. 
*/
long PictureInPictureWindow_height(const PictureInPictureWindow *self);

/**
 * @brief Gets the `onresize` property. 
*/
jb_Any PictureInPictureWindow_onresize(const PictureInPictureWindow *self);

/**
 * @brief Sets the `onresize` property. 
*/
void PictureInPictureWindow_set_onresize(PictureInPictureWindow* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
