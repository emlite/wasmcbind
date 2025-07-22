#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ExtendableEvent.h"
#include "enums.h"

typedef struct MessagePort MessagePort;


typedef struct {
  ExtendableEvent inner;
} ExtendableMessageEvent;


DECLARE_EMLITE_TYPE(ExtendableMessageEvent, ExtendableEvent);

ExtendableMessageEvent ExtendableMessageEvent_new(const jb_DOMString* type);

ExtendableMessageEvent ExtendableMessageEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

jb_Any ExtendableMessageEvent_data( const ExtendableMessageEvent *self);

jb_USVString ExtendableMessageEvent_origin( const ExtendableMessageEvent *self);

jb_DOMString ExtendableMessageEvent_lastEventId( const ExtendableMessageEvent *self);

jb_Any ExtendableMessageEvent_source( const ExtendableMessageEvent *self);

jb_FrozenArray ExtendableMessageEvent_ports( const ExtendableMessageEvent *self);
