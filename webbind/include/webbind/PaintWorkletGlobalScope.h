#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "WorkletGlobalScope.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PaintWorkletGlobalScope, WorkletGlobalScope);

jb_Undefined PaintWorkletGlobalScope_registerPaint(PaintWorkletGlobalScope* self , jb_String * name, jb_Function * paintCtor);

double PaintWorkletGlobalScope_devicePixelRatio(const PaintWorkletGlobalScope *self);

#ifdef __cplusplus
}
#endif
