#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct HandwritingStroke HandwritingStroke;
typedef struct HandwritingPrediction HandwritingPrediction;


typedef struct {
  em_Val inner;
} HandwritingPrediction;


DECLARE_EMLITE_TYPE(HandwritingPrediction, em_Val);

jb_DOMString HandwritingPrediction_text( const HandwritingPrediction *self);

void HandwritingPrediction_set_text(HandwritingPrediction* self, const jb_DOMString* value);

jb_Sequence HandwritingPrediction_segmentationResult( const HandwritingPrediction *self);

void HandwritingPrediction_set_segmentationResult(HandwritingPrediction* self, const jb_Sequence* value);
typedef struct {
  em_Val inner;
} HandwritingDrawing;


DECLARE_EMLITE_TYPE(HandwritingDrawing, em_Val);

jb_Undefined HandwritingDrawing_addStroke(HandwritingDrawing* self , const HandwritingStroke* stroke);

jb_Undefined HandwritingDrawing_removeStroke(HandwritingDrawing* self , const HandwritingStroke* stroke);

jb_Undefined HandwritingDrawing_clear(HandwritingDrawing* self );

jb_Sequence HandwritingDrawing_getStrokes(HandwritingDrawing* self );

jb_Promise HandwritingDrawing_getPrediction(HandwritingDrawing* self );
