#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "WorkerGlobalScope.h"
#include "MessagePort.h"
#include "enums.h"


typedef struct {
  WorkerGlobalScope inner;
} DedicatedWorkerGlobalScope;


DECLARE_EMLITE_TYPE(DedicatedWorkerGlobalScope, WorkerGlobalScope);

jb_DOMString DedicatedWorkerGlobalScope_name( const DedicatedWorkerGlobalScope *self);

jb_Undefined DedicatedWorkerGlobalScope_postMessage(DedicatedWorkerGlobalScope* self , const jb_Any* message);

jb_Undefined DedicatedWorkerGlobalScope_postMessage(DedicatedWorkerGlobalScope* self , const jb_Any* message, const StructuredSerializeOptions* options);

jb_Undefined DedicatedWorkerGlobalScope_close(DedicatedWorkerGlobalScope* self );

jb_Any DedicatedWorkerGlobalScope_onrtctransform( const DedicatedWorkerGlobalScope *self);

void DedicatedWorkerGlobalScope_set_onrtctransform(DedicatedWorkerGlobalScope* self, const jb_Any* value);

unsigned long DedicatedWorkerGlobalScope_requestAnimationFrame(DedicatedWorkerGlobalScope* self , const jb_Function* callback);

jb_Undefined DedicatedWorkerGlobalScope_cancelAnimationFrame(DedicatedWorkerGlobalScope* self , unsigned long handle);

jb_Any DedicatedWorkerGlobalScope_onmessage( const DedicatedWorkerGlobalScope *self);

void DedicatedWorkerGlobalScope_set_onmessage(DedicatedWorkerGlobalScope* self, const jb_Any* value);

jb_Any DedicatedWorkerGlobalScope_onmessageerror( const DedicatedWorkerGlobalScope *self);

void DedicatedWorkerGlobalScope_set_onmessageerror(DedicatedWorkerGlobalScope* self, const jb_Any* value);
