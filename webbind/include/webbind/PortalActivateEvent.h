#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct HTMLPortalElement HTMLPortalElement;


typedef struct {
  Event inner;
} PortalActivateEvent;


DECLARE_EMLITE_TYPE(PortalActivateEvent, Event);

PortalActivateEvent PortalActivateEvent_new(const jb_DOMString* type);

PortalActivateEvent PortalActivateEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

jb_Any PortalActivateEvent_data( const PortalActivateEvent *self);

HTMLPortalElement PortalActivateEvent_adoptPredecessor(PortalActivateEvent* self );
