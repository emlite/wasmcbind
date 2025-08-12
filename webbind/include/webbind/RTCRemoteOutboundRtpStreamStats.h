#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCSentRtpStreamStats.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCRemoteOutboundRtpStreamStats */
DECLARE_EMLITE_TYPE(RTCRemoteOutboundRtpStreamStats, RTCSentRtpStreamStats);

/** @brief Getter of the localId property */
jb_String RTCRemoteOutboundRtpStreamStats_localId(const RTCRemoteOutboundRtpStreamStats *self);

/** @brief Setter of the localId property */
void RTCRemoteOutboundRtpStreamStats_set_localId(RTCRemoteOutboundRtpStreamStats* self, jb_String * value);

/** @brief Getter of the remoteTimestamp property */
jb_Any RTCRemoteOutboundRtpStreamStats_remoteTimestamp(const RTCRemoteOutboundRtpStreamStats *self);

/** @brief Setter of the remoteTimestamp property */
void RTCRemoteOutboundRtpStreamStats_set_remoteTimestamp(RTCRemoteOutboundRtpStreamStats* self, jb_Any * value);

/** @brief Getter of the reportsSent property */
long long RTCRemoteOutboundRtpStreamStats_reportsSent(const RTCRemoteOutboundRtpStreamStats *self);

/** @brief Setter of the reportsSent property */
void RTCRemoteOutboundRtpStreamStats_set_reportsSent(RTCRemoteOutboundRtpStreamStats* self, long long value);

/** @brief Getter of the roundTripTime property */
double RTCRemoteOutboundRtpStreamStats_roundTripTime(const RTCRemoteOutboundRtpStreamStats *self);

/** @brief Setter of the roundTripTime property */
void RTCRemoteOutboundRtpStreamStats_set_roundTripTime(RTCRemoteOutboundRtpStreamStats* self, double value);

/** @brief Getter of the totalRoundTripTime property */
double RTCRemoteOutboundRtpStreamStats_totalRoundTripTime(const RTCRemoteOutboundRtpStreamStats *self);

/** @brief Setter of the totalRoundTripTime property */
void RTCRemoteOutboundRtpStreamStats_set_totalRoundTripTime(RTCRemoteOutboundRtpStreamStats* self, double value);

/** @brief Getter of the roundTripTimeMeasurements property */
long long RTCRemoteOutboundRtpStreamStats_roundTripTimeMeasurements(const RTCRemoteOutboundRtpStreamStats *self);

/** @brief Setter of the roundTripTimeMeasurements property */
void RTCRemoteOutboundRtpStreamStats_set_roundTripTimeMeasurements(RTCRemoteOutboundRtpStreamStats* self, long long value);

/** @brief Constructor of the RTCRemoteOutboundRtpStreamStats dictionary type */
RTCRemoteOutboundRtpStreamStats RTCRemoteOutboundRtpStreamStats_new();

#ifdef __cplusplus
}
#endif
