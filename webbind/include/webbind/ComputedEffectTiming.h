#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EffectTiming.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ComputedEffectTiming, EffectTiming);

double ComputedEffectTiming_progress(const ComputedEffectTiming *self);

void ComputedEffectTiming_set_progress(ComputedEffectTiming* self, double value);

double ComputedEffectTiming_currentIteration(const ComputedEffectTiming *self);

void ComputedEffectTiming_set_currentIteration(ComputedEffectTiming* self, double value);

ComputedEffectTiming ComputedEffectTiming_new();

#ifdef __cplusplus
}
#endif
