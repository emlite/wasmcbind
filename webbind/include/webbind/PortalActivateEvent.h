#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PortalActivateEventInit PortalActivateEventInit;
typedef struct HTMLPortalElement HTMLPortalElement;

DECLARE_EMLITE_TYPE(PortalActivateEvent, Event);

PortalActivateEvent PortalActivateEvent_new0(jb_String * type);

PortalActivateEvent PortalActivateEvent_new1(jb_String * type, PortalActivateEventInit * eventInitDict);

jb_Any PortalActivateEvent_data(const PortalActivateEvent *self);

HTMLPortalElement PortalActivateEvent_adoptPredecessor(PortalActivateEvent* self );

#ifdef __cplusplus
}
#endif
