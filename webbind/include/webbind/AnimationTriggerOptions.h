#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AnimationTimeline AnimationTimeline;

DECLARE_EMLITE_TYPE(AnimationTriggerOptions, em_Val);

AnimationTimeline AnimationTriggerOptions_timeline(const AnimationTriggerOptions *self);

void AnimationTriggerOptions_set_timeline(AnimationTriggerOptions* self, AnimationTimeline * value);

AnimationTriggerBehavior AnimationTriggerOptions_behavior(const AnimationTriggerOptions *self);

void AnimationTriggerOptions_set_behavior(AnimationTriggerOptions* self, AnimationTriggerBehavior * value);

jb_Any AnimationTriggerOptions_rangeStart(const AnimationTriggerOptions *self);

void AnimationTriggerOptions_set_rangeStart(AnimationTriggerOptions* self, jb_Any * value);

jb_Any AnimationTriggerOptions_rangeEnd(const AnimationTriggerOptions *self);

void AnimationTriggerOptions_set_rangeEnd(AnimationTriggerOptions* self, jb_Any * value);

jb_Any AnimationTriggerOptions_exitRangeStart(const AnimationTriggerOptions *self);

void AnimationTriggerOptions_set_exitRangeStart(AnimationTriggerOptions* self, jb_Any * value);

jb_Any AnimationTriggerOptions_exitRangeEnd(const AnimationTriggerOptions *self);

void AnimationTriggerOptions_set_exitRangeEnd(AnimationTriggerOptions* self, jb_Any * value);

AnimationTriggerOptions AnimationTriggerOptions_new();

#ifdef __cplusplus
}
#endif
