#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

DECLARE_EMLITE_TYPE(SchedulerPostTaskOptions, em_Val);

AbortSignal SchedulerPostTaskOptions_signal(const SchedulerPostTaskOptions *self);

void SchedulerPostTaskOptions_set_signal(SchedulerPostTaskOptions* self, AbortSignal * value);

TaskPriority SchedulerPostTaskOptions_priority(const SchedulerPostTaskOptions *self);

void SchedulerPostTaskOptions_set_priority(SchedulerPostTaskOptions* self, TaskPriority * value);

long long SchedulerPostTaskOptions_delay(const SchedulerPostTaskOptions *self);

void SchedulerPostTaskOptions_set_delay(SchedulerPostTaskOptions* self, long long value);

SchedulerPostTaskOptions SchedulerPostTaskOptions_new();

#ifdef __cplusplus
}
#endif
