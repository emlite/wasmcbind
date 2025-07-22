#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ExtendableEvent.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(SyncEvent, ExtendableEvent);

SyncEvent SyncEvent_new(jb_DOMString * type, jb_Any * init);

jb_DOMString SyncEvent_tag( const SyncEvent *self);

bool SyncEvent_lastChance( const SyncEvent *self);
