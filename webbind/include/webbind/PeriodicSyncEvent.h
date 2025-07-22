#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ExtendableEvent.h"
#include "enums.h"


typedef struct {
  ExtendableEvent inner;
} PeriodicSyncEvent;


DECLARE_EMLITE_TYPE(PeriodicSyncEvent, ExtendableEvent);

PeriodicSyncEvent PeriodicSyncEvent_new(const jb_DOMString* type, const jb_Any* init);

jb_DOMString PeriodicSyncEvent_tag( const PeriodicSyncEvent *self);
