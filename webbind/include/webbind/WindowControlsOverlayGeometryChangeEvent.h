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

DECLARE_EMLITE_TYPE(WindowControlsOverlayGeometryChangeEvent, Event);

WindowControlsOverlayGeometryChangeEvent WindowControlsOverlayGeometryChangeEvent_new(jb_String * type, WindowControlsOverlayGeometryChangeEventInit * eventInitDict);

DOMRect WindowControlsOverlayGeometryChangeEvent_titlebarAreaRect(const WindowControlsOverlayGeometryChangeEvent *self);

bool WindowControlsOverlayGeometryChangeEvent_visible(const WindowControlsOverlayGeometryChangeEvent *self);

#ifdef __cplusplus
}
#endif
