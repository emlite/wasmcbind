#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct HTMLPortalElement HTMLPortalElement;


DECLARE_EMLITE_TYPE(PortalActivateEvent, Event);

PortalActivateEvent PortalActivateEvent_new0(jb_DOMString * type);

PortalActivateEvent PortalActivateEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

jb_Any PortalActivateEvent_data( const PortalActivateEvent *self);

HTMLPortalElement PortalActivateEvent_adoptPredecessor(PortalActivateEvent* self );
