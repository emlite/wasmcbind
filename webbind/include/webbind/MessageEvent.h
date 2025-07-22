#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct MessagePort MessagePort;


DECLARE_EMLITE_TYPE(MessageEvent, Event);

MessageEvent MessageEvent_new0(jb_DOMString * type);

MessageEvent MessageEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

jb_Any MessageEvent_data( const MessageEvent *self);

jb_USVString MessageEvent_origin( const MessageEvent *self);

jb_DOMString MessageEvent_lastEventId( const MessageEvent *self);

jb_Any MessageEvent_source( const MessageEvent *self);

jb_FrozenArray MessageEvent_ports( const MessageEvent *self);

jb_Undefined MessageEvent_initMessageEvent0(MessageEvent* self , jb_DOMString * type);

jb_Undefined MessageEvent_initMessageEvent1(MessageEvent* self , jb_DOMString * type, bool bubbles);

jb_Undefined MessageEvent_initMessageEvent2(MessageEvent* self , jb_DOMString * type, bool bubbles, bool cancelable);

jb_Undefined MessageEvent_initMessageEvent3(MessageEvent* self , jb_DOMString * type, bool bubbles, bool cancelable, jb_Any * data);

jb_Undefined MessageEvent_initMessageEvent4(MessageEvent* self , jb_DOMString * type, bool bubbles, bool cancelable, jb_Any * data, jb_USVString * origin);

jb_Undefined MessageEvent_initMessageEvent5(MessageEvent* self , jb_DOMString * type, bool bubbles, bool cancelable, jb_Any * data, jb_USVString * origin, jb_DOMString * lastEventId);

jb_Undefined MessageEvent_initMessageEvent6(MessageEvent* self , jb_DOMString * type, bool bubbles, bool cancelable, jb_Any * data, jb_USVString * origin, jb_DOMString * lastEventId, jb_Any * source);

jb_Undefined MessageEvent_initMessageEvent7(MessageEvent* self , jb_DOMString * type, bool bubbles, bool cancelable, jb_Any * data, jb_USVString * origin, jb_DOMString * lastEventId, jb_Any * source, jb_Sequence * ports);
