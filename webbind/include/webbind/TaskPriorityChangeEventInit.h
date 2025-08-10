#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(TaskPriorityChangeEventInit, EventInit);

TaskPriority TaskPriorityChangeEventInit_previousPriority(const TaskPriorityChangeEventInit *self);

void TaskPriorityChangeEventInit_set_previousPriority(TaskPriorityChangeEventInit* self, TaskPriority * value);

TaskPriorityChangeEventInit TaskPriorityChangeEventInit_new();

#ifdef __cplusplus
}
#endif
