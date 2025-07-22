#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AbortSignal.h"
#include "enums.h"

typedef struct TaskSignal TaskSignal;
typedef struct TaskSignalAnyInit TaskSignalAnyInit;


typedef struct {
  em_Val inner;
} TaskSignalAnyInit;


DECLARE_EMLITE_TYPE(TaskSignalAnyInit, em_Val);

jb_Any TaskSignalAnyInit_priority( const TaskSignalAnyInit *self);

void TaskSignalAnyInit_set_priority(TaskSignalAnyInit* self, const jb_Any* value);
typedef struct {
  AbortSignal inner;
} TaskSignal;


DECLARE_EMLITE_TYPE(TaskSignal, AbortSignal);

TaskSignal TaskSignal_any(TaskSignal* self , const jb_Sequence* signals);

TaskSignal TaskSignal_any(TaskSignal* self , const jb_Sequence* signals, const TaskSignalAnyInit* init);

TaskPriority TaskSignal_priority( const TaskSignal *self);

jb_Any TaskSignal_onprioritychange( const TaskSignal *self);

void TaskSignal_set_onprioritychange(TaskSignal* self, const jb_Any* value);
