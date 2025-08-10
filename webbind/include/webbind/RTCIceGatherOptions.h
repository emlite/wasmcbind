#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCIceServer.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCIceGatherOptions, em_Val);

RTCIceTransportPolicy RTCIceGatherOptions_gatherPolicy(const RTCIceGatherOptions *self);

void RTCIceGatherOptions_set_gatherPolicy(RTCIceGatherOptions* self, RTCIceTransportPolicy * value);

jb_Array RTCIceGatherOptions_iceServers(const RTCIceGatherOptions *self);

void RTCIceGatherOptions_set_iceServers(RTCIceGatherOptions* self, jb_Array * value);

RTCIceGatherOptions RTCIceGatherOptions_new();

#ifdef __cplusplus
}
#endif
