#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PeriodicSyncEventInit PeriodicSyncEventInit;

DECLARE_EMLITE_TYPE(PeriodicSyncEvent, ExtendableEvent);

PeriodicSyncEvent PeriodicSyncEvent_new(jb_String * type, PeriodicSyncEventInit * init);

jb_String PeriodicSyncEvent_tag(const PeriodicSyncEvent *self);

#ifdef __cplusplus
}
#endif
