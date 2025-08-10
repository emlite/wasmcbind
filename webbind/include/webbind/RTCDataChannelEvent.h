#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCDataChannelEventInit RTCDataChannelEventInit;
typedef struct RTCDataChannel RTCDataChannel;

DECLARE_EMLITE_TYPE(RTCDataChannelEvent, Event);

RTCDataChannelEvent RTCDataChannelEvent_new(jb_String * type, RTCDataChannelEventInit * eventInitDict);

RTCDataChannel RTCDataChannelEvent_channel(const RTCDataChannelEvent *self);

#ifdef __cplusplus
}
#endif
