#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct EffectTiming EffectTiming;
typedef struct ComputedEffectTiming ComputedEffectTiming;


typedef struct {
  em_Val inner;
} EffectTiming;


DECLARE_EMLITE_TYPE(EffectTiming, em_Val);

FillMode EffectTiming_fill( const EffectTiming *self);

void EffectTiming_set_fill(EffectTiming* self, const FillMode* value);

double EffectTiming_iterationStart( const EffectTiming *self);

void EffectTiming_set_iterationStart(EffectTiming* self, double value);

double EffectTiming_iterations( const EffectTiming *self);

void EffectTiming_set_iterations(EffectTiming* self, double value);

PlaybackDirection EffectTiming_direction( const EffectTiming *self);

void EffectTiming_set_direction(EffectTiming* self, const PlaybackDirection* value);

jb_DOMString EffectTiming_easing( const EffectTiming *self);

void EffectTiming_set_easing(EffectTiming* self, const jb_DOMString* value);
typedef struct {
  em_Val inner;
} ComputedEffectTiming;


DECLARE_EMLITE_TYPE(ComputedEffectTiming, em_Val);

double ComputedEffectTiming_progress( const ComputedEffectTiming *self);

void ComputedEffectTiming_set_progress(ComputedEffectTiming* self, double value);

double ComputedEffectTiming_currentIteration( const ComputedEffectTiming *self);

void ComputedEffectTiming_set_currentIteration(ComputedEffectTiming* self, double value);
typedef struct {
  em_Val inner;
} WorkletAnimationEffect;


DECLARE_EMLITE_TYPE(WorkletAnimationEffect, em_Val);

EffectTiming WorkletAnimationEffect_getTiming(WorkletAnimationEffect* self );

ComputedEffectTiming WorkletAnimationEffect_getComputedTiming(WorkletAnimationEffect* self );

double WorkletAnimationEffect_localTime( const WorkletAnimationEffect *self);

void WorkletAnimationEffect_set_localTime(WorkletAnimationEffect* self, double value);
