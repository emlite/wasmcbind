#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AnimationTimeline.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ScrollTimelineOptions ScrollTimelineOptions;
typedef struct Element Element;

DECLARE_EMLITE_TYPE(ScrollTimeline, AnimationTimeline);

ScrollTimeline ScrollTimeline_new0();

ScrollTimeline ScrollTimeline_new1(ScrollTimelineOptions * options);

Element ScrollTimeline_source(const ScrollTimeline *self);

ScrollAxis ScrollTimeline_axis(const ScrollTimeline *self);

#ifdef __cplusplus
}
#endif
