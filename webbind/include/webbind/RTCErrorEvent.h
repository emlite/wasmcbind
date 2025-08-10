#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCErrorEventInit RTCErrorEventInit;
typedef struct RTCError RTCError;

DECLARE_EMLITE_TYPE(RTCErrorEvent, Event);

RTCErrorEvent RTCErrorEvent_new(jb_String * type, RTCErrorEventInit * eventInitDict);

RTCError RTCErrorEvent_error(const RTCErrorEvent *self);

#ifdef __cplusplus
}
#endif
