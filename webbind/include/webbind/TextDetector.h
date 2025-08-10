#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DetectedText DetectedText;

DECLARE_EMLITE_TYPE(TextDetector, em_Val);

TextDetector TextDetector_new();

jb_Promise TextDetector_detect(TextDetector* self , jb_Any * image);

#ifdef __cplusplus
}
#endif
