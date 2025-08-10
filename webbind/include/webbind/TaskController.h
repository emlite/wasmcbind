#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AbortController.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TaskControllerInit TaskControllerInit;

DECLARE_EMLITE_TYPE(TaskController, AbortController);

TaskController TaskController_new0();

TaskController TaskController_new1(TaskControllerInit * init);

jb_Undefined TaskController_setPriority(TaskController* self , TaskPriority * priority);

#ifdef __cplusplus
}
#endif
