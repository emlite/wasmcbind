#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TaskPriorityChangeEventInit TaskPriorityChangeEventInit;

DECLARE_EMLITE_TYPE(TaskPriorityChangeEvent, Event);

TaskPriorityChangeEvent TaskPriorityChangeEvent_new(jb_String * type, TaskPriorityChangeEventInit * priorityChangeEventInitDict);

TaskPriority TaskPriorityChangeEvent_previousPriority(const TaskPriorityChangeEvent *self);

#ifdef __cplusplus
}
#endif
