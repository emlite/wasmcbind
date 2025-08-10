#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCRtpStreamStats.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCReceivedRtpStreamStats, RTCRtpStreamStats);

long long RTCReceivedRtpStreamStats_packetsReceived(const RTCReceivedRtpStreamStats *self);

void RTCReceivedRtpStreamStats_set_packetsReceived(RTCReceivedRtpStreamStats* self, long long value);

long long RTCReceivedRtpStreamStats_packetsReceivedWithEct1(const RTCReceivedRtpStreamStats *self);

void RTCReceivedRtpStreamStats_set_packetsReceivedWithEct1(RTCReceivedRtpStreamStats* self, long long value);

long long RTCReceivedRtpStreamStats_packetsReceivedWithCe(const RTCReceivedRtpStreamStats *self);

void RTCReceivedRtpStreamStats_set_packetsReceivedWithCe(RTCReceivedRtpStreamStats* self, long long value);

long long RTCReceivedRtpStreamStats_packetsReportedAsLost(const RTCReceivedRtpStreamStats *self);

void RTCReceivedRtpStreamStats_set_packetsReportedAsLost(RTCReceivedRtpStreamStats* self, long long value);

long long RTCReceivedRtpStreamStats_packetsReportedAsLostButRecovered(const RTCReceivedRtpStreamStats *self);

void RTCReceivedRtpStreamStats_set_packetsReportedAsLostButRecovered(RTCReceivedRtpStreamStats* self, long long value);

long long RTCReceivedRtpStreamStats_packetsLost(const RTCReceivedRtpStreamStats *self);

void RTCReceivedRtpStreamStats_set_packetsLost(RTCReceivedRtpStreamStats* self, long long value);

double RTCReceivedRtpStreamStats_jitter(const RTCReceivedRtpStreamStats *self);

void RTCReceivedRtpStreamStats_set_jitter(RTCReceivedRtpStreamStats* self, double value);

RTCReceivedRtpStreamStats RTCReceivedRtpStreamStats_new();

#ifdef __cplusplus
}
#endif
