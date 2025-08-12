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
 * @brief Interface WindowControlsOverlay
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WindowControlsOverlay)
 */
DECLARE_EMLITE_TYPE(WindowControlsOverlay, EventTarget);

/**
 * @brief Gets the `visible` property. 
*/
bool WindowControlsOverlay_visible(const WindowControlsOverlay *self);

/**
 * @brief Calls the `getTitlebarAreaRect` method. 
*/
DOMRect WindowControlsOverlay_getTitlebarAreaRect(WindowControlsOverlay* self );

/**
 * @brief Gets the `ongeometrychange` property. 
*/
jb_Any WindowControlsOverlay_ongeometrychange(const WindowControlsOverlay *self);

/**
 * @brief Sets the `ongeometrychange` property. 
*/
void WindowControlsOverlay_set_ongeometrychange(WindowControlsOverlay* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
