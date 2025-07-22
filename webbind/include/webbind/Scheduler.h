#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct SchedulerPostTaskOptions SchedulerPostTaskOptions;
typedef struct AbortSignal AbortSignal;


typedef struct {
  em_Val inner;
} SchedulerPostTaskOptions;


DECLARE_EMLITE_TYPE(SchedulerPostTaskOptions, em_Val);

AbortSignal SchedulerPostTaskOptions_signal( const SchedulerPostTaskOptions *self);

void SchedulerPostTaskOptions_set_signal(SchedulerPostTaskOptions* self, const AbortSignal* value);

TaskPriority SchedulerPostTaskOptions_priority( const SchedulerPostTaskOptions *self);

void SchedulerPostTaskOptions_set_priority(SchedulerPostTaskOptions* self, const TaskPriority* value);

long long SchedulerPostTaskOptions_delay( const SchedulerPostTaskOptions *self);

void SchedulerPostTaskOptions_set_delay(SchedulerPostTaskOptions* self, long long value);
typedef struct {
  em_Val inner;
} Scheduler;


DECLARE_EMLITE_TYPE(Scheduler, em_Val);

jb_Promise Scheduler_postTask(Scheduler* self , const jb_Function* callback);

jb_Promise Scheduler_postTask(Scheduler* self , const jb_Function* callback, const SchedulerPostTaskOptions* options);

jb_Promise Scheduler_yield(Scheduler* self );
