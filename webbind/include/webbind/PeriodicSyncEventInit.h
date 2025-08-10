#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PeriodicSyncEventInit, ExtendableEventInit);

jb_String PeriodicSyncEventInit_tag(const PeriodicSyncEventInit *self);

void PeriodicSyncEventInit_set_tag(PeriodicSyncEventInit* self, jb_String * value);

PeriodicSyncEventInit PeriodicSyncEventInit_new();

#ifdef __cplusplus
}
#endif
