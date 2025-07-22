#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"


typedef struct {
  EventTarget inner;
} EventSource;


DECLARE_EMLITE_TYPE(EventSource, EventTarget);

EventSource EventSource_new(const jb_USVString* url);

EventSource EventSource_new(const jb_USVString* url, const jb_Any* eventSourceInitDict);

jb_USVString EventSource_url( const EventSource *self);

bool EventSource_withCredentials( const EventSource *self);

unsigned short EventSource_readyState( const EventSource *self);

jb_Any EventSource_onopen( const EventSource *self);

void EventSource_set_onopen(EventSource* self, const jb_Any* value);

jb_Any EventSource_onmessage( const EventSource *self);

void EventSource_set_onmessage(EventSource* self, const jb_Any* value);

jb_Any EventSource_onerror( const EventSource *self);

void EventSource_set_onerror(EventSource* self, const jb_Any* value);

jb_Undefined EventSource_close(EventSource* self );
