#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ExtendableEvent.h"
#include "enums.h"


typedef struct {
  ExtendableEvent inner;
} SyncEvent;


DECLARE_EMLITE_TYPE(SyncEvent, ExtendableEvent);

SyncEvent SyncEvent_new(const jb_DOMString* type, const jb_Any* init);

jb_DOMString SyncEvent_tag( const SyncEvent *self);

bool SyncEvent_lastChance( const SyncEvent *self);
