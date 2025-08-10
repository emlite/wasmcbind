#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HighlightHitResult HighlightHitResult;
typedef struct HighlightsFromPointOptions HighlightsFromPointOptions;

DECLARE_EMLITE_TYPE(HighlightRegistry, em_Val);

jb_Array HighlightRegistry_highlightsFromPoint0(HighlightRegistry* self , float x, float y);

jb_Array HighlightRegistry_highlightsFromPoint1(HighlightRegistry* self , float x, float y, HighlightsFromPointOptions * options);

#ifdef __cplusplus
}
#endif
