#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(TaskSignalAnyInit, em_Val);

jb_Any TaskSignalAnyInit_priority(const TaskSignalAnyInit *self);

void TaskSignalAnyInit_set_priority(TaskSignalAnyInit* self, jb_Any * value);

TaskSignalAnyInit TaskSignalAnyInit_new();

#ifdef __cplusplus
}
#endif
