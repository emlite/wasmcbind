#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct DOMRect DOMRect;


typedef struct {
  EventTarget inner;
} WindowControlsOverlay;


DECLARE_EMLITE_TYPE(WindowControlsOverlay, EventTarget);

bool WindowControlsOverlay_visible( const WindowControlsOverlay *self);

DOMRect WindowControlsOverlay_getTitlebarAreaRect(WindowControlsOverlay* self );

jb_Any WindowControlsOverlay_ongeometrychange( const WindowControlsOverlay *self);

void WindowControlsOverlay_set_ongeometrychange(WindowControlsOverlay* self, const jb_Any* value);
