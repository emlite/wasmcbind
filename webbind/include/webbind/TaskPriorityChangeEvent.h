#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} TaskPriorityChangeEvent;


DECLARE_EMLITE_TYPE(TaskPriorityChangeEvent, Event);

TaskPriorityChangeEvent TaskPriorityChangeEvent_new(const jb_DOMString* type, const jb_Any* priorityChangeEventInitDict);

TaskPriority TaskPriorityChangeEvent_previousPriority( const TaskPriorityChangeEvent *self);
