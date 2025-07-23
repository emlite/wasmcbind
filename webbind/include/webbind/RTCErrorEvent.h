#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct RTCError RTCError;


DECLARE_EMLITE_TYPE(RTCErrorEvent, Event);

RTCErrorEvent RTCErrorEvent_new(jb_DOMString * type, jb_Any * eventInitDict);

RTCError RTCErrorEvent_error(const RTCErrorEvent *self);
