#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "RTCReceivedRtpStreamStats.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCRemoteInboundRtpStreamStats */
DECLARE_EMLITE_TYPE(RTCRemoteInboundRtpStreamStats, RTCReceivedRtpStreamStats);

/** @brief Getter of the localId property */
jb_String RTCRemoteInboundRtpStreamStats_localId(const RTCRemoteInboundRtpStreamStats *self);

/** @brief Setter of the localId property */
void RTCRemoteInboundRtpStreamStats_set_localId(RTCRemoteInboundRtpStreamStats* self, jb_String * value);

/** @brief Getter of the roundTripTime property */
double RTCRemoteInboundRtpStreamStats_roundTripTime(const RTCRemoteInboundRtpStreamStats *self);

/** @brief Setter of the roundTripTime property */
void RTCRemoteInboundRtpStreamStats_set_roundTripTime(RTCRemoteInboundRtpStreamStats* self, double value);

/** @brief Getter of the totalRoundTripTime property */
double RTCRemoteInboundRtpStreamStats_totalRoundTripTime(const RTCRemoteInboundRtpStreamStats *self);

/** @brief Setter of the totalRoundTripTime property */
void RTCRemoteInboundRtpStreamStats_set_totalRoundTripTime(RTCRemoteInboundRtpStreamStats* self, double value);

/** @brief Getter of the fractionLost property */
double RTCRemoteInboundRtpStreamStats_fractionLost(const RTCRemoteInboundRtpStreamStats *self);

/** @brief Setter of the fractionLost property */
void RTCRemoteInboundRtpStreamStats_set_fractionLost(RTCRemoteInboundRtpStreamStats* self, double value);

/** @brief Getter of the roundTripTimeMeasurements property */
long long RTCRemoteInboundRtpStreamStats_roundTripTimeMeasurements(const RTCRemoteInboundRtpStreamStats *self);

/** @brief Setter of the roundTripTimeMeasurements property */
void RTCRemoteInboundRtpStreamStats_set_roundTripTimeMeasurements(RTCRemoteInboundRtpStreamStats* self, long long value);

/** @brief Getter of the packetsWithBleachedEct1Marking property */
long long RTCRemoteInboundRtpStreamStats_packetsWithBleachedEct1Marking(const RTCRemoteInboundRtpStreamStats *self);

/** @brief Setter of the packetsWithBleachedEct1Marking property */
void RTCRemoteInboundRtpStreamStats_set_packetsWithBleachedEct1Marking(RTCRemoteInboundRtpStreamStats* self, long long value);

/** @brief Constructor of the RTCRemoteInboundRtpStreamStats dictionary type */
RTCRemoteInboundRtpStreamStats RTCRemoteInboundRtpStreamStats_new();

#ifdef __cplusplus
}
#endif
