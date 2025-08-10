#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "KeyframeEffectOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AnimationTimeline AnimationTimeline;

DECLARE_EMLITE_TYPE(KeyframeAnimationOptions, KeyframeEffectOptions);

jb_String KeyframeAnimationOptions_id(const KeyframeAnimationOptions *self);

void KeyframeAnimationOptions_set_id(KeyframeAnimationOptions* self, jb_String * value);

AnimationTimeline KeyframeAnimationOptions_timeline(const KeyframeAnimationOptions *self);

void KeyframeAnimationOptions_set_timeline(KeyframeAnimationOptions* self, AnimationTimeline * value);

KeyframeAnimationOptions KeyframeAnimationOptions_new();

#ifdef __cplusplus
}
#endif
