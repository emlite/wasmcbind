#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ProfilerInitOptions ProfilerInitOptions;
typedef struct ProfilerTrace ProfilerTrace;

DECLARE_EMLITE_TYPE(Profiler, EventTarget);

jb_Any Profiler_sampleInterval(const Profiler *self);

bool Profiler_stopped(const Profiler *self);

Profiler Profiler_new(ProfilerInitOptions * options);

jb_Promise Profiler_stop(Profiler* self );

#ifdef __cplusplus
}
#endif
