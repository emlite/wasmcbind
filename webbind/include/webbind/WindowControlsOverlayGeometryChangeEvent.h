#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct DOMRect DOMRect;


DECLARE_EMLITE_TYPE(WindowControlsOverlayGeometryChangeEvent, Event);

WindowControlsOverlayGeometryChangeEvent WindowControlsOverlayGeometryChangeEvent_new(jb_DOMString * type, jb_Any * eventInitDict);

DOMRect WindowControlsOverlayGeometryChangeEvent_titlebarAreaRect(const WindowControlsOverlayGeometryChangeEvent *self);

bool WindowControlsOverlayGeometryChangeEvent_visible(const WindowControlsOverlayGeometryChangeEvent *self);
