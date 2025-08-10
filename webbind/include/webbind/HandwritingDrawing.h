#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HandwritingStroke HandwritingStroke;
typedef struct HandwritingPrediction HandwritingPrediction;

DECLARE_EMLITE_TYPE(HandwritingDrawing, em_Val);

jb_Undefined HandwritingDrawing_addStroke(HandwritingDrawing* self , HandwritingStroke * stroke);

jb_Undefined HandwritingDrawing_removeStroke(HandwritingDrawing* self , HandwritingStroke * stroke);

jb_Undefined HandwritingDrawing_clear(HandwritingDrawing* self );

jb_Array HandwritingDrawing_getStrokes(HandwritingDrawing* self );

jb_Promise HandwritingDrawing_getPrediction(HandwritingDrawing* self );

#ifdef __cplusplus
}
#endif
