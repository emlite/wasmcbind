#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type TaskSignalAnyInit */
DECLARE_EMLITE_TYPE(TaskSignalAnyInit, em_Val);

/** @brief Getter of the priority property */
jb_Any TaskSignalAnyInit_priority(const TaskSignalAnyInit *self);

/** @brief Setter of the priority property */
void TaskSignalAnyInit_set_priority(TaskSignalAnyInit* self, jb_Any * value);

/** @brief Constructor of the TaskSignalAnyInit dictionary type */
TaskSignalAnyInit TaskSignalAnyInit_new();

#ifdef __cplusplus
}
#endif
