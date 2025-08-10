#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCError RTCError;

DECLARE_EMLITE_TYPE(RTCErrorEventInit, EventInit);

RTCError RTCErrorEventInit_error(const RTCErrorEventInit *self);

void RTCErrorEventInit_set_error(RTCErrorEventInit* self, RTCError * value);

RTCErrorEventInit RTCErrorEventInit_new();

#ifdef __cplusplus
}
#endif
