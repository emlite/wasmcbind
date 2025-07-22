#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AbortController.h"
#include "enums.h"


typedef struct {
  AbortController inner;
} TaskController;


DECLARE_EMLITE_TYPE(TaskController, AbortController);

TaskController TaskController_new();

TaskController TaskController_new(const jb_Any* init);

jb_Undefined TaskController_setPriority(TaskController* self , const TaskPriority* priority);
