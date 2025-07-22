#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct ProfilerTrace ProfilerTrace;


typedef struct {
  em_Val inner;
} ProfilerTrace;


DECLARE_EMLITE_TYPE(ProfilerTrace, em_Val);

jb_Sequence ProfilerTrace_resources( const ProfilerTrace *self);

void ProfilerTrace_set_resources(ProfilerTrace* self, const jb_Sequence* value);

jb_Sequence ProfilerTrace_frames( const ProfilerTrace *self);

void ProfilerTrace_set_frames(ProfilerTrace* self, const jb_Sequence* value);

jb_Sequence ProfilerTrace_stacks( const ProfilerTrace *self);

void ProfilerTrace_set_stacks(ProfilerTrace* self, const jb_Sequence* value);

jb_Sequence ProfilerTrace_samples( const ProfilerTrace *self);

void ProfilerTrace_set_samples(ProfilerTrace* self, const jb_Sequence* value);
typedef struct {
  EventTarget inner;
} Profiler;


DECLARE_EMLITE_TYPE(Profiler, EventTarget);

jb_Any Profiler_sampleInterval( const Profiler *self);

bool Profiler_stopped( const Profiler *self);

Profiler Profiler_new(const jb_Any* options);

jb_Promise Profiler_stop(Profiler* self );
