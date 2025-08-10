#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HandwritingDrawingSegment.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(HandwritingSegment, em_Val);

jb_String HandwritingSegment_grapheme(const HandwritingSegment *self);

void HandwritingSegment_set_grapheme(HandwritingSegment* self, jb_String * value);

unsigned long HandwritingSegment_beginIndex(const HandwritingSegment *self);

void HandwritingSegment_set_beginIndex(HandwritingSegment* self, unsigned long value);

unsigned long HandwritingSegment_endIndex(const HandwritingSegment *self);

void HandwritingSegment_set_endIndex(HandwritingSegment* self, unsigned long value);

jb_Array HandwritingSegment_drawingSegments(const HandwritingSegment *self);

void HandwritingSegment_set_drawingSegments(HandwritingSegment* self, jb_Array * value);

HandwritingSegment HandwritingSegment_new();

#ifdef __cplusplus
}
#endif
