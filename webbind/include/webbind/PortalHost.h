#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "MessagePort.h"
#include "enums.h"


typedef struct {
  EventTarget inner;
} PortalHost;


DECLARE_EMLITE_TYPE(PortalHost, EventTarget);

jb_Undefined PortalHost_postMessage(PortalHost* self , const jb_Any* message);

jb_Undefined PortalHost_postMessage(PortalHost* self , const jb_Any* message, const StructuredSerializeOptions* options);

jb_Any PortalHost_onmessage( const PortalHost *self);

void PortalHost_set_onmessage(PortalHost* self, const jb_Any* value);

jb_Any PortalHost_onmessageerror( const PortalHost *self);

void PortalHost_set_onmessageerror(PortalHost* self, const jb_Any* value);
