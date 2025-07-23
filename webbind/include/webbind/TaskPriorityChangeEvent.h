#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(TaskPriorityChangeEvent, Event);

TaskPriorityChangeEvent TaskPriorityChangeEvent_new(jb_DOMString * type, jb_Any * priorityChangeEventInitDict);

TaskPriority TaskPriorityChangeEvent_previousPriority(const TaskPriorityChangeEvent *self);
