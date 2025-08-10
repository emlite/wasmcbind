#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(HandwritingDrawingSegment, em_Val);

unsigned long HandwritingDrawingSegment_strokeIndex(const HandwritingDrawingSegment *self);

void HandwritingDrawingSegment_set_strokeIndex(HandwritingDrawingSegment* self, unsigned long value);

unsigned long HandwritingDrawingSegment_beginPointIndex(const HandwritingDrawingSegment *self);

void HandwritingDrawingSegment_set_beginPointIndex(HandwritingDrawingSegment* self, unsigned long value);

unsigned long HandwritingDrawingSegment_endPointIndex(const HandwritingDrawingSegment *self);

void HandwritingDrawingSegment_set_endPointIndex(HandwritingDrawingSegment* self, unsigned long value);

HandwritingDrawingSegment HandwritingDrawingSegment_new();

#ifdef __cplusplus
}
#endif
