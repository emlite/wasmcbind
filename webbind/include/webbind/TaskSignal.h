#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AbortSignal.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TaskSignalAnyInit TaskSignalAnyInit;

DECLARE_EMLITE_TYPE(TaskSignal, AbortSignal);

TaskSignal TaskSignal_any0(TaskSignal* self , jb_Array * signals);

TaskSignal TaskSignal_any1(TaskSignal* self , jb_Array * signals, TaskSignalAnyInit * init);

TaskPriority TaskSignal_priority(const TaskSignal *self);

jb_Any TaskSignal_onprioritychange(const TaskSignal *self);

void TaskSignal_set_onprioritychange(TaskSignal* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
