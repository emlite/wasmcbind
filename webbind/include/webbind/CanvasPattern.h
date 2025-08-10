#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMMatrix2DInit DOMMatrix2DInit;

DECLARE_EMLITE_TYPE(CanvasPattern, em_Val);

jb_Undefined CanvasPattern_setTransform0(CanvasPattern* self );

jb_Undefined CanvasPattern_setTransform1(CanvasPattern* self , DOMMatrix2DInit * transform);

#ifdef __cplusplus
}
#endif
