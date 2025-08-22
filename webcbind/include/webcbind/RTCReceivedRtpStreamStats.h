#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "RTCRtpStreamStats.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCReceivedRtpStreamStats */
DECLARE_EMLITE_TYPE(RTCReceivedRtpStreamStats, RTCRtpStreamStats);

/** @brief Getter of the packetsReceived property */
long long RTCReceivedRtpStreamStats_packetsReceived(const RTCReceivedRtpStreamStats *self);

/** @brief Setter of the packetsReceived property */
void RTCReceivedRtpStreamStats_set_packetsReceived(RTCReceivedRtpStreamStats* self, long long value);

/** @brief Getter of the packetsReceivedWithEct1 property */
long long RTCReceivedRtpStreamStats_packetsReceivedWithEct1(const RTCReceivedRtpStreamStats *self);

/** @brief Setter of the packetsReceivedWithEct1 property */
void RTCReceivedRtpStreamStats_set_packetsReceivedWithEct1(RTCReceivedRtpStreamStats* self, long long value);

/** @brief Getter of the packetsReceivedWithCe property */
long long RTCReceivedRtpStreamStats_packetsReceivedWithCe(const RTCReceivedRtpStreamStats *self);

/** @brief Setter of the packetsReceivedWithCe property */
void RTCReceivedRtpStreamStats_set_packetsReceivedWithCe(RTCReceivedRtpStreamStats* self, long long value);

/** @brief Getter of the packetsReportedAsLost property */
long long RTCReceivedRtpStreamStats_packetsReportedAsLost(const RTCReceivedRtpStreamStats *self);

/** @brief Setter of the packetsReportedAsLost property */
void RTCReceivedRtpStreamStats_set_packetsReportedAsLost(RTCReceivedRtpStreamStats* self, long long value);

/** @brief Getter of the packetsReportedAsLostButRecovered property */
long long RTCReceivedRtpStreamStats_packetsReportedAsLostButRecovered(const RTCReceivedRtpStreamStats *self);

/** @brief Setter of the packetsReportedAsLostButRecovered property */
void RTCReceivedRtpStreamStats_set_packetsReportedAsLostButRecovered(RTCReceivedRtpStreamStats* self, long long value);

/** @brief Getter of the packetsLost property */
long long RTCReceivedRtpStreamStats_packetsLost(const RTCReceivedRtpStreamStats *self);

/** @brief Setter of the packetsLost property */
void RTCReceivedRtpStreamStats_set_packetsLost(RTCReceivedRtpStreamStats* self, long long value);

/** @brief Getter of the jitter property */
double RTCReceivedRtpStreamStats_jitter(const RTCReceivedRtpStreamStats *self);

/** @brief Setter of the jitter property */
void RTCReceivedRtpStreamStats_set_jitter(RTCReceivedRtpStreamStats* self, double value);

/** @brief Constructor of the RTCReceivedRtpStreamStats dictionary type */
RTCReceivedRtpStreamStats RTCReceivedRtpStreamStats_new();

#ifdef __cplusplus
}
#endif
