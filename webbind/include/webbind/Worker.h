#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "MessagePort.h"
#include "enums.h"


typedef struct {
  EventTarget inner;
} Worker;


DECLARE_EMLITE_TYPE(Worker, EventTarget);

Worker Worker_new(const jb_Any* scriptURL);

Worker Worker_new(const jb_Any* scriptURL, const jb_Any* options);

jb_Undefined Worker_terminate(Worker* self );

jb_Undefined Worker_postMessage(Worker* self , const jb_Any* message);

jb_Undefined Worker_postMessage(Worker* self , const jb_Any* message, const StructuredSerializeOptions* options);

jb_Any Worker_onerror( const Worker *self);

void Worker_set_onerror(Worker* self, const jb_Any* value);

jb_Any Worker_onmessage( const Worker *self);

void Worker_set_onmessage(Worker* self, const jb_Any* value);

jb_Any Worker_onmessageerror( const Worker *self);

void Worker_set_onmessageerror(Worker* self, const jb_Any* value);
