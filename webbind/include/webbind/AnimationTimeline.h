#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Animation Animation;
typedef struct AnimationEffect AnimationEffect;


typedef struct {
  em_Val inner;
} AnimationTimeline;


DECLARE_EMLITE_TYPE(AnimationTimeline, em_Val);

jb_Any AnimationTimeline_currentTime( const AnimationTimeline *self);

jb_Any AnimationTimeline_duration( const AnimationTimeline *self);

Animation AnimationTimeline_play(AnimationTimeline* self );

Animation AnimationTimeline_play(AnimationTimeline* self , const AnimationEffect* effect);
