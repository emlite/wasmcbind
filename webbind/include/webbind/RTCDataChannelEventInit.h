#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCDataChannel RTCDataChannel;

DECLARE_EMLITE_TYPE(RTCDataChannelEventInit, EventInit);

RTCDataChannel RTCDataChannelEventInit_channel(const RTCDataChannelEventInit *self);

void RTCDataChannelEventInit_set_channel(RTCDataChannelEventInit* self, RTCDataChannel * value);

RTCDataChannelEventInit RTCDataChannelEventInit_new();

#ifdef __cplusplus
}
#endif
