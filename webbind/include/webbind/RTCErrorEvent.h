#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct RTCError RTCError;


typedef struct {
  Event inner;
} RTCErrorEvent;


DECLARE_EMLITE_TYPE(RTCErrorEvent, Event);

RTCErrorEvent RTCErrorEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

RTCError RTCErrorEvent_error( const RTCErrorEvent *self);
