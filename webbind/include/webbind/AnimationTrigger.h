#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct AnimationTimeline AnimationTimeline;


typedef struct {
  em_Val inner;
} AnimationTrigger;


DECLARE_EMLITE_TYPE(AnimationTrigger, em_Val);

AnimationTrigger AnimationTrigger_new();

AnimationTrigger AnimationTrigger_new(const jb_Any* options);

AnimationTimeline AnimationTrigger_timeline( const AnimationTrigger *self);

void AnimationTrigger_set_timeline(AnimationTrigger* self, const AnimationTimeline* value);

AnimationTriggerBehavior AnimationTrigger_behavior( const AnimationTrigger *self);

void AnimationTrigger_set_behavior(AnimationTrigger* self, const AnimationTriggerBehavior* value);

jb_Any AnimationTrigger_rangeStart( const AnimationTrigger *self);

void AnimationTrigger_set_rangeStart(AnimationTrigger* self, const jb_Any* value);

jb_Any AnimationTrigger_rangeEnd( const AnimationTrigger *self);

void AnimationTrigger_set_rangeEnd(AnimationTrigger* self, const jb_Any* value);

jb_Any AnimationTrigger_exitRangeStart( const AnimationTrigger *self);

void AnimationTrigger_set_exitRangeStart(AnimationTrigger* self, const jb_Any* value);

jb_Any AnimationTrigger_exitRangeEnd( const AnimationTrigger *self);

void AnimationTrigger_set_exitRangeEnd(AnimationTrigger* self, const jb_Any* value);
