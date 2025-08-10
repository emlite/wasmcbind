#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct EffectTiming EffectTiming;
typedef struct ComputedEffectTiming ComputedEffectTiming;

DECLARE_EMLITE_TYPE(WorkletAnimationEffect, em_Val);

EffectTiming WorkletAnimationEffect_getTiming(WorkletAnimationEffect* self );

ComputedEffectTiming WorkletAnimationEffect_getComputedTiming(WorkletAnimationEffect* self );

double WorkletAnimationEffect_localTime(const WorkletAnimationEffect *self);

void WorkletAnimationEffect_set_localTime(WorkletAnimationEffect* self, double value);

#ifdef __cplusplus
}
#endif
