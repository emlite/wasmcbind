#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct DOMRect DOMRect;


typedef struct {
  em_Val inner;
} Viewport;


DECLARE_EMLITE_TYPE(Viewport, em_Val);

jb_FrozenArray Viewport_segments( const Viewport *self);
