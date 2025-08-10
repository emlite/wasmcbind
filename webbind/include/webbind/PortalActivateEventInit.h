#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PortalActivateEventInit, EventInit);

jb_Any PortalActivateEventInit_data(const PortalActivateEventInit *self);

void PortalActivateEventInit_set_data(PortalActivateEventInit* self, jb_Any * value);

PortalActivateEventInit PortalActivateEventInit_new();

#ifdef __cplusplus
}
#endif
