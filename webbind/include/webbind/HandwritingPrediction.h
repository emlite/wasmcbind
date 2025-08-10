#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HandwritingSegment.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(HandwritingPrediction, em_Val);

jb_String HandwritingPrediction_text(const HandwritingPrediction *self);

void HandwritingPrediction_set_text(HandwritingPrediction* self, jb_String * value);

jb_Array HandwritingPrediction_segmentationResult(const HandwritingPrediction *self);

void HandwritingPrediction_set_segmentationResult(HandwritingPrediction* self, jb_Array * value);

HandwritingPrediction HandwritingPrediction_new();

#ifdef __cplusplus
}
#endif
