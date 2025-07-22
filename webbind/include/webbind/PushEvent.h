#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ExtendableEvent.h"
#include "enums.h"

typedef struct PushMessageData PushMessageData;


typedef struct {
  ExtendableEvent inner;
} PushEvent;


DECLARE_EMLITE_TYPE(PushEvent, ExtendableEvent);

PushEvent PushEvent_new(const jb_DOMString* type);

PushEvent PushEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

PushMessageData PushEvent_data( const PushEvent *self);
