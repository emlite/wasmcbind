#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(TaskControllerInit, em_Val);

TaskPriority TaskControllerInit_priority(const TaskControllerInit *self);

void TaskControllerInit_set_priority(TaskControllerInit* self, TaskPriority * value);

TaskControllerInit TaskControllerInit_new();

#ifdef __cplusplus
}
#endif
