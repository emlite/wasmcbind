#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCRtpStreamStats.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCSentRtpStreamStats, RTCRtpStreamStats);

long long RTCSentRtpStreamStats_packetsSent(const RTCSentRtpStreamStats *self);

void RTCSentRtpStreamStats_set_packetsSent(RTCSentRtpStreamStats* self, long long value);

long long RTCSentRtpStreamStats_bytesSent(const RTCSentRtpStreamStats *self);

void RTCSentRtpStreamStats_set_bytesSent(RTCSentRtpStreamStats* self, long long value);

long long RTCSentRtpStreamStats_packetsSentWithEct1(const RTCSentRtpStreamStats *self);

void RTCSentRtpStreamStats_set_packetsSentWithEct1(RTCSentRtpStreamStats* self, long long value);

RTCSentRtpStreamStats RTCSentRtpStreamStats_new();

#ifdef __cplusplus
}
#endif
