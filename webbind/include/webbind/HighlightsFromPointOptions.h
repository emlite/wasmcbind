#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ShadowRoot ShadowRoot;

DECLARE_EMLITE_TYPE(HighlightsFromPointOptions, em_Val);

jb_Array HighlightsFromPointOptions_shadowRoots(const HighlightsFromPointOptions *self);

void HighlightsFromPointOptions_set_shadowRoots(HighlightsFromPointOptions* self, jb_Array * value);

HighlightsFromPointOptions HighlightsFromPointOptions_new();

#ifdef __cplusplus
}
#endif
