#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"


typedef struct {
  EventTarget inner;
} BroadcastChannel;


DECLARE_EMLITE_TYPE(BroadcastChannel, EventTarget);

BroadcastChannel BroadcastChannel_new(const jb_DOMString* name);

jb_DOMString BroadcastChannel_name( const BroadcastChannel *self);

jb_Undefined BroadcastChannel_postMessage(BroadcastChannel* self , const jb_Any* message);

jb_Undefined BroadcastChannel_close(BroadcastChannel* self );

jb_Any BroadcastChannel_onmessage( const BroadcastChannel *self);

void BroadcastChannel_set_onmessage(BroadcastChannel* self, const jb_Any* value);

jb_Any BroadcastChannel_onmessageerror( const BroadcastChannel *self);

void BroadcastChannel_set_onmessageerror(BroadcastChannel* self, const jb_Any* value);
