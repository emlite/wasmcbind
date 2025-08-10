#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HandwritingPoint HandwritingPoint;

DECLARE_EMLITE_TYPE(HandwritingStroke, em_Val);

HandwritingStroke HandwritingStroke_new();

jb_Undefined HandwritingStroke_addPoint(HandwritingStroke* self , HandwritingPoint * point);

jb_Array HandwritingStroke_getPoints(HandwritingStroke* self );

jb_Undefined HandwritingStroke_clear(HandwritingStroke* self );

#ifdef __cplusplus
}
#endif
