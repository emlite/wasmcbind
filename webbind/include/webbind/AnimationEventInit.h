#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AnimationEventInit, EventInit);

jb_String AnimationEventInit_animationName(const AnimationEventInit *self);

void AnimationEventInit_set_animationName(AnimationEventInit* self, jb_String * value);

double AnimationEventInit_elapsedTime(const AnimationEventInit *self);

void AnimationEventInit_set_elapsedTime(AnimationEventInit* self, double value);

jb_String AnimationEventInit_pseudoElement(const AnimationEventInit *self);

void AnimationEventInit_set_pseudoElement(AnimationEventInit* self, jb_String * value);

AnimationEventInit AnimationEventInit_new();

#ifdef __cplusplus
}
#endif
