#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMRect DOMRect;

DECLARE_EMLITE_TYPE(WindowControlsOverlayGeometryChangeEventInit, EventInit);

DOMRect WindowControlsOverlayGeometryChangeEventInit_titlebarAreaRect(const WindowControlsOverlayGeometryChangeEventInit *self);

void WindowControlsOverlayGeometryChangeEventInit_set_titlebarAreaRect(WindowControlsOverlayGeometryChangeEventInit* self, DOMRect * value);

bool WindowControlsOverlayGeometryChangeEventInit_visible(const WindowControlsOverlayGeometryChangeEventInit *self);

void WindowControlsOverlayGeometryChangeEventInit_set_visible(WindowControlsOverlayGeometryChangeEventInit* self, bool value);

WindowControlsOverlayGeometryChangeEventInit WindowControlsOverlayGeometryChangeEventInit_new();

#ifdef __cplusplus
}
#endif
