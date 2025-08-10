#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AnimationTimeline.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DocumentTimelineOptions DocumentTimelineOptions;

DECLARE_EMLITE_TYPE(DocumentTimeline, AnimationTimeline);

DocumentTimeline DocumentTimeline_new0();

DocumentTimeline DocumentTimeline_new1(DocumentTimelineOptions * options);

#ifdef __cplusplus
}
#endif
