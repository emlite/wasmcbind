#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type TaskControllerInit */
DECLARE_EMLITE_TYPE(TaskControllerInit, em_Val);

/** @brief Getter of the priority property */
TaskPriority TaskControllerInit_priority(const TaskControllerInit *self);

/** @brief Setter of the priority property */
void TaskControllerInit_set_priority(TaskControllerInit* self, TaskPriority * value);

/** @brief Constructor of the TaskControllerInit dictionary type */
TaskControllerInit TaskControllerInit_new();

#ifdef __cplusplus
}
#endif
