#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Highlight Highlight;
typedef struct AbstractRange AbstractRange;

DECLARE_EMLITE_TYPE(HighlightHitResult, em_Val);

Highlight HighlightHitResult_highlight(const HighlightHitResult *self);

void HighlightHitResult_set_highlight(HighlightHitResult* self, Highlight * value);

jb_Array HighlightHitResult_ranges(const HighlightHitResult *self);

void HighlightHitResult_set_ranges(HighlightHitResult* self, jb_Array * value);

HighlightHitResult HighlightHitResult_new();

#ifdef __cplusplus
}
#endif
