#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct MessagePort MessagePort;


typedef struct {
  Event inner;
} MessageEvent;


DECLARE_EMLITE_TYPE(MessageEvent, Event);

MessageEvent MessageEvent_new(const jb_DOMString* type);

MessageEvent MessageEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

jb_Any MessageEvent_data( const MessageEvent *self);

jb_USVString MessageEvent_origin( const MessageEvent *self);

jb_DOMString MessageEvent_lastEventId( const MessageEvent *self);

jb_Any MessageEvent_source( const MessageEvent *self);

jb_FrozenArray MessageEvent_ports( const MessageEvent *self);

jb_Undefined MessageEvent_initMessageEvent(MessageEvent* self , const jb_DOMString* type);

jb_Undefined MessageEvent_initMessageEvent(MessageEvent* self , const jb_DOMString* type, bool bubbles);

jb_Undefined MessageEvent_initMessageEvent(MessageEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable);

jb_Undefined MessageEvent_initMessageEvent(MessageEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable, const jb_Any* data);

jb_Undefined MessageEvent_initMessageEvent(MessageEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable, const jb_Any* data, const jb_USVString* origin);

jb_Undefined MessageEvent_initMessageEvent(MessageEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable, const jb_Any* data, const jb_USVString* origin, const jb_DOMString* lastEventId);

jb_Undefined MessageEvent_initMessageEvent(MessageEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable, const jb_Any* data, const jb_USVString* origin, const jb_DOMString* lastEventId, const jb_Any* source);

jb_Undefined MessageEvent_initMessageEvent(MessageEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable, const jb_Any* data, const jb_USVString* origin, const jb_DOMString* lastEventId, const jb_Any* source, const jb_Sequence* ports);
