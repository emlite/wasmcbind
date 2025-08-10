#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SchedulerPostTaskOptions SchedulerPostTaskOptions;

DECLARE_EMLITE_TYPE(Scheduler, em_Val);

jb_Promise Scheduler_postTask0(Scheduler* self , jb_Function * callback);

jb_Promise Scheduler_postTask1(Scheduler* self , jb_Function * callback, SchedulerPostTaskOptions * options);

jb_Promise Scheduler_yield(Scheduler* self );

#ifdef __cplusplus
}
#endif
