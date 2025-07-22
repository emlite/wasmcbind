#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "MessagePort.h"
#include "enums.h"


typedef struct {
  EventTarget inner;
} ServiceWorker;


DECLARE_EMLITE_TYPE(ServiceWorker, EventTarget);

jb_USVString ServiceWorker_scriptURL( const ServiceWorker *self);

ServiceWorkerState ServiceWorker_state( const ServiceWorker *self);

jb_Undefined ServiceWorker_postMessage(ServiceWorker* self , const jb_Any* message);

jb_Undefined ServiceWorker_postMessage(ServiceWorker* self , const jb_Any* message, const StructuredSerializeOptions* options);

jb_Any ServiceWorker_onstatechange( const ServiceWorker *self);

void ServiceWorker_set_onstatechange(ServiceWorker* self, const jb_Any* value);

jb_Any ServiceWorker_onerror( const ServiceWorker *self);

void ServiceWorker_set_onerror(ServiceWorker* self, const jb_Any* value);
