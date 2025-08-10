#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HandwritingDrawing HandwritingDrawing;
typedef struct HandwritingHints HandwritingHints;

DECLARE_EMLITE_TYPE(HandwritingRecognizer, em_Val);

HandwritingDrawing HandwritingRecognizer_startDrawing0(HandwritingRecognizer* self );

HandwritingDrawing HandwritingRecognizer_startDrawing1(HandwritingRecognizer* self , HandwritingHints * hints);

jb_Undefined HandwritingRecognizer_finish(HandwritingRecognizer* self );

#ifdef __cplusplus
}
#endif
