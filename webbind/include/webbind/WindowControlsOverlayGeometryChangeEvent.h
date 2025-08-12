#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WindowControlsOverlayGeometryChangeEventInit WindowControlsOverlayGeometryChangeEventInit;
typedef struct DOMRect DOMRect;


/**
 * @brief Interface WindowControlsOverlayGeometryChangeEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WindowControlsOverlayGeometryChangeEvent)
 */
DECLARE_EMLITE_TYPE(WindowControlsOverlayGeometryChangeEvent, Event);

/**
 * @brief Creates a new `WindowControlsOverlayGeometryChangeEvent` object. 
*/
WindowControlsOverlayGeometryChangeEvent WindowControlsOverlayGeometryChangeEvent_new(jb_String * type, WindowControlsOverlayGeometryChangeEventInit * eventInitDict);

/**
 * @brief Gets the `titlebarAreaRect` property. 
*/
DOMRect WindowControlsOverlayGeometryChangeEvent_titlebarAreaRect(const WindowControlsOverlayGeometryChangeEvent *self);

/**
 * @brief Gets the `visible` property. 
*/
bool WindowControlsOverlayGeometryChangeEvent_visible(const WindowControlsOverlayGeometryChangeEvent *self);

#ifdef __cplusplus
}
#endif
