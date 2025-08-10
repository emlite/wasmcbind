#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SyncEventInit SyncEventInit;

DECLARE_EMLITE_TYPE(SyncEvent, ExtendableEvent);

SyncEvent SyncEvent_new(jb_String * type, SyncEventInit * init);

jb_String SyncEvent_tag(const SyncEvent *self);

bool SyncEvent_lastChance(const SyncEvent *self);

#ifdef __cplusplus
}
#endif
