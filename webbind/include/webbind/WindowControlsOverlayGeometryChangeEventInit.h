#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMRect DOMRect;

/** @brief Dictionary type WindowControlsOverlayGeometryChangeEventInit */
DECLARE_EMLITE_TYPE(WindowControlsOverlayGeometryChangeEventInit, EventInit);

/** @brief Getter of the titlebarAreaRect property */
DOMRect WindowControlsOverlayGeometryChangeEventInit_titlebarAreaRect(const WindowControlsOverlayGeometryChangeEventInit *self);

/** @brief Setter of the titlebarAreaRect property */
void WindowControlsOverlayGeometryChangeEventInit_set_titlebarAreaRect(WindowControlsOverlayGeometryChangeEventInit* self, DOMRect * value);

/** @brief Getter of the visible property */
bool WindowControlsOverlayGeometryChangeEventInit_visible(const WindowControlsOverlayGeometryChangeEventInit *self);

/** @brief Setter of the visible property */
void WindowControlsOverlayGeometryChangeEventInit_set_visible(WindowControlsOverlayGeometryChangeEventInit* self, bool value);

/** @brief Constructor of the WindowControlsOverlayGeometryChangeEventInit dictionary type */
WindowControlsOverlayGeometryChangeEventInit WindowControlsOverlayGeometryChangeEventInit_new();

#ifdef __cplusplus
}
#endif
