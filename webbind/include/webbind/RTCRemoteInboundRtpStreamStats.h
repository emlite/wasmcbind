#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCReceivedRtpStreamStats.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCRemoteInboundRtpStreamStats, RTCReceivedRtpStreamStats);

jb_String RTCRemoteInboundRtpStreamStats_localId(const RTCRemoteInboundRtpStreamStats *self);

void RTCRemoteInboundRtpStreamStats_set_localId(RTCRemoteInboundRtpStreamStats* self, jb_String * value);

double RTCRemoteInboundRtpStreamStats_roundTripTime(const RTCRemoteInboundRtpStreamStats *self);

void RTCRemoteInboundRtpStreamStats_set_roundTripTime(RTCRemoteInboundRtpStreamStats* self, double value);

double RTCRemoteInboundRtpStreamStats_totalRoundTripTime(const RTCRemoteInboundRtpStreamStats *self);

void RTCRemoteInboundRtpStreamStats_set_totalRoundTripTime(RTCRemoteInboundRtpStreamStats* self, double value);

double RTCRemoteInboundRtpStreamStats_fractionLost(const RTCRemoteInboundRtpStreamStats *self);

void RTCRemoteInboundRtpStreamStats_set_fractionLost(RTCRemoteInboundRtpStreamStats* self, double value);

long long RTCRemoteInboundRtpStreamStats_roundTripTimeMeasurements(const RTCRemoteInboundRtpStreamStats *self);

void RTCRemoteInboundRtpStreamStats_set_roundTripTimeMeasurements(RTCRemoteInboundRtpStreamStats* self, long long value);

long long RTCRemoteInboundRtpStreamStats_packetsWithBleachedEct1Marking(const RTCRemoteInboundRtpStreamStats *self);

void RTCRemoteInboundRtpStreamStats_set_packetsWithBleachedEct1Marking(RTCRemoteInboundRtpStreamStats* self, long long value);

RTCRemoteInboundRtpStreamStats RTCRemoteInboundRtpStreamStats_new();

#ifdef __cplusplus
}
#endif
