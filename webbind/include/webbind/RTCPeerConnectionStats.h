#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCStats.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCPeerConnectionStats, RTCStats);

unsigned long RTCPeerConnectionStats_dataChannelsOpened(const RTCPeerConnectionStats *self);

void RTCPeerConnectionStats_set_dataChannelsOpened(RTCPeerConnectionStats* self, unsigned long value);

unsigned long RTCPeerConnectionStats_dataChannelsClosed(const RTCPeerConnectionStats *self);

void RTCPeerConnectionStats_set_dataChannelsClosed(RTCPeerConnectionStats* self, unsigned long value);

RTCPeerConnectionStats RTCPeerConnectionStats_new();

#ifdef __cplusplus
}
#endif
