#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "WorkletGlobalScope.h"
#include "enums.h"


typedef struct {
  WorkletGlobalScope inner;
} PaintWorkletGlobalScope;


DECLARE_EMLITE_TYPE(PaintWorkletGlobalScope, WorkletGlobalScope);

jb_Undefined PaintWorkletGlobalScope_registerPaint(PaintWorkletGlobalScope* self , const jb_DOMString* name, const jb_Any* paintCtor);

double PaintWorkletGlobalScope_devicePixelRatio( const PaintWorkletGlobalScope *self);
