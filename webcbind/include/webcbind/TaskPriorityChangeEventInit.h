#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type TaskPriorityChangeEventInit */
DECLARE_EMLITE_TYPE(TaskPriorityChangeEventInit, EventInit);

/** @brief Getter of the previousPriority property */
TaskPriority TaskPriorityChangeEventInit_previousPriority(const TaskPriorityChangeEventInit *self);

/** @brief Setter of the previousPriority property */
void TaskPriorityChangeEventInit_set_previousPriority(TaskPriorityChangeEventInit* self, TaskPriority * value);

/** @brief Constructor of the TaskPriorityChangeEventInit dictionary type */
TaskPriorityChangeEventInit TaskPriorityChangeEventInit_new();

#ifdef __cplusplus
}
#endif
