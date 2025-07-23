#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ExtendableEvent.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(PeriodicSyncEvent, ExtendableEvent);

PeriodicSyncEvent PeriodicSyncEvent_new(jb_DOMString * type, jb_Any * init);

jb_DOMString PeriodicSyncEvent_tag(const PeriodicSyncEvent *self);
