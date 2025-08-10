#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCSentRtpStreamStats.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCRemoteOutboundRtpStreamStats, RTCSentRtpStreamStats);

jb_String RTCRemoteOutboundRtpStreamStats_localId(const RTCRemoteOutboundRtpStreamStats *self);

void RTCRemoteOutboundRtpStreamStats_set_localId(RTCRemoteOutboundRtpStreamStats* self, jb_String * value);

jb_Any RTCRemoteOutboundRtpStreamStats_remoteTimestamp(const RTCRemoteOutboundRtpStreamStats *self);

void RTCRemoteOutboundRtpStreamStats_set_remoteTimestamp(RTCRemoteOutboundRtpStreamStats* self, jb_Any * value);

long long RTCRemoteOutboundRtpStreamStats_reportsSent(const RTCRemoteOutboundRtpStreamStats *self);

void RTCRemoteOutboundRtpStreamStats_set_reportsSent(RTCRemoteOutboundRtpStreamStats* self, long long value);

double RTCRemoteOutboundRtpStreamStats_roundTripTime(const RTCRemoteOutboundRtpStreamStats *self);

void RTCRemoteOutboundRtpStreamStats_set_roundTripTime(RTCRemoteOutboundRtpStreamStats* self, double value);

double RTCRemoteOutboundRtpStreamStats_totalRoundTripTime(const RTCRemoteOutboundRtpStreamStats *self);

void RTCRemoteOutboundRtpStreamStats_set_totalRoundTripTime(RTCRemoteOutboundRtpStreamStats* self, double value);

long long RTCRemoteOutboundRtpStreamStats_roundTripTimeMeasurements(const RTCRemoteOutboundRtpStreamStats *self);

void RTCRemoteOutboundRtpStreamStats_set_roundTripTimeMeasurements(RTCRemoteOutboundRtpStreamStats* self, long long value);

RTCRemoteOutboundRtpStreamStats RTCRemoteOutboundRtpStreamStats_new();

#ifdef __cplusplus
}
#endif
