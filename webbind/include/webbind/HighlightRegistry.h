#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Highlight Highlight;
typedef struct HighlightsFromPointOptions HighlightsFromPointOptions;
typedef struct ShadowRoot ShadowRoot;
typedef struct AbstractRange AbstractRange;


typedef struct {
  em_Val inner;
} HighlightHitResult;


DECLARE_EMLITE_TYPE(HighlightHitResult, em_Val);

Highlight HighlightHitResult_highlight( const HighlightHitResult *self);

void HighlightHitResult_set_highlight(HighlightHitResult* self, const Highlight* value);

jb_Sequence HighlightHitResult_ranges( const HighlightHitResult *self);

void HighlightHitResult_set_ranges(HighlightHitResult* self, const jb_Sequence* value);
typedef struct {
  em_Val inner;
} HighlightsFromPointOptions;


DECLARE_EMLITE_TYPE(HighlightsFromPointOptions, em_Val);

jb_Sequence HighlightsFromPointOptions_shadowRoots( const HighlightsFromPointOptions *self);

void HighlightsFromPointOptions_set_shadowRoots(HighlightsFromPointOptions* self, const jb_Sequence* value);
typedef struct {
  em_Val inner;
} HighlightRegistry;


DECLARE_EMLITE_TYPE(HighlightRegistry, em_Val);

jb_Sequence HighlightRegistry_highlightsFromPoint(HighlightRegistry* self , float x, float y);

jb_Sequence HighlightRegistry_highlightsFromPoint(HighlightRegistry* self , float x, float y, const HighlightsFromPointOptions* options);
