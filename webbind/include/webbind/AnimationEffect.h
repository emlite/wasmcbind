#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct EffectTiming EffectTiming;
typedef struct ComputedEffectTiming ComputedEffectTiming;
typedef struct OptionalEffectTiming OptionalEffectTiming;
typedef struct GroupEffect GroupEffect;

DECLARE_EMLITE_TYPE(AnimationEffect, em_Val);

EffectTiming AnimationEffect_getTiming(AnimationEffect* self );

ComputedEffectTiming AnimationEffect_getComputedTiming(AnimationEffect* self );

jb_Undefined AnimationEffect_updateTiming0(AnimationEffect* self );

jb_Undefined AnimationEffect_updateTiming1(AnimationEffect* self , OptionalEffectTiming * timing);

GroupEffect AnimationEffect_parent(const AnimationEffect *self);

AnimationEffect AnimationEffect_previousSibling(const AnimationEffect *self);

AnimationEffect AnimationEffect_nextSibling(const AnimationEffect *self);

jb_Undefined AnimationEffect_before(AnimationEffect* self , AnimationEffect * effects);

jb_Undefined AnimationEffect_after(AnimationEffect* self , AnimationEffect * effects);

jb_Undefined AnimationEffect_replace(AnimationEffect* self , AnimationEffect * effects);

jb_Undefined AnimationEffect_remove(AnimationEffect* self );

#ifdef __cplusplus
}
#endif
