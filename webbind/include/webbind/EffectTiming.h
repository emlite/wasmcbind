#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(EffectTiming, em_Val);

FillMode EffectTiming_fill(const EffectTiming *self);

void EffectTiming_set_fill(EffectTiming* self, FillMode * value);

double EffectTiming_iterationStart(const EffectTiming *self);

void EffectTiming_set_iterationStart(EffectTiming* self, double value);

double EffectTiming_iterations(const EffectTiming *self);

void EffectTiming_set_iterations(EffectTiming* self, double value);

PlaybackDirection EffectTiming_direction(const EffectTiming *self);

void EffectTiming_set_direction(EffectTiming* self, PlaybackDirection * value);

jb_String EffectTiming_easing(const EffectTiming *self);

void EffectTiming_set_easing(EffectTiming* self, jb_String * value);

EffectTiming EffectTiming_new();

#ifdef __cplusplus
}
#endif
