#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(OptionalEffectTiming, em_Val);

double OptionalEffectTiming_delay(const OptionalEffectTiming *self);

void OptionalEffectTiming_set_delay(OptionalEffectTiming* self, double value);

double OptionalEffectTiming_endDelay(const OptionalEffectTiming *self);

void OptionalEffectTiming_set_endDelay(OptionalEffectTiming* self, double value);

FillMode OptionalEffectTiming_fill(const OptionalEffectTiming *self);

void OptionalEffectTiming_set_fill(OptionalEffectTiming* self, FillMode * value);

double OptionalEffectTiming_iterationStart(const OptionalEffectTiming *self);

void OptionalEffectTiming_set_iterationStart(OptionalEffectTiming* self, double value);

double OptionalEffectTiming_iterations(const OptionalEffectTiming *self);

void OptionalEffectTiming_set_iterations(OptionalEffectTiming* self, double value);

jb_Any OptionalEffectTiming_duration(const OptionalEffectTiming *self);

void OptionalEffectTiming_set_duration(OptionalEffectTiming* self, jb_Any * value);

PlaybackDirection OptionalEffectTiming_direction(const OptionalEffectTiming *self);

void OptionalEffectTiming_set_direction(OptionalEffectTiming* self, PlaybackDirection * value);

jb_String OptionalEffectTiming_easing(const OptionalEffectTiming *self);

void OptionalEffectTiming_set_easing(OptionalEffectTiming* self, jb_String * value);

OptionalEffectTiming OptionalEffectTiming_new();

#ifdef __cplusplus
}
#endif
