#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SyncEventInit, ExtendableEventInit);

jb_String SyncEventInit_tag(const SyncEventInit *self);

void SyncEventInit_set_tag(SyncEventInit* self, jb_String * value);

bool SyncEventInit_lastChance(const SyncEventInit *self);

void SyncEventInit_set_lastChance(SyncEventInit* self, bool value);

SyncEventInit SyncEventInit_new();

#ifdef __cplusplus
}
#endif
