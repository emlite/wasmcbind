#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "RTCStats.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCIceCandidatePairStats */
DECLARE_EMLITE_TYPE(RTCIceCandidatePairStats, RTCStats);

/** @brief Getter of the transportId property */
jb_String RTCIceCandidatePairStats_transportId(const RTCIceCandidatePairStats *self);

/** @brief Setter of the transportId property */
void RTCIceCandidatePairStats_set_transportId(RTCIceCandidatePairStats* self, jb_String * value);

/** @brief Getter of the localCandidateId property */
jb_String RTCIceCandidatePairStats_localCandidateId(const RTCIceCandidatePairStats *self);

/** @brief Setter of the localCandidateId property */
void RTCIceCandidatePairStats_set_localCandidateId(RTCIceCandidatePairStats* self, jb_String * value);

/** @brief Getter of the remoteCandidateId property */
jb_String RTCIceCandidatePairStats_remoteCandidateId(const RTCIceCandidatePairStats *self);

/** @brief Setter of the remoteCandidateId property */
void RTCIceCandidatePairStats_set_remoteCandidateId(RTCIceCandidatePairStats* self, jb_String * value);

/** @brief Getter of the state property */
RTCStatsIceCandidatePairState RTCIceCandidatePairStats_state(const RTCIceCandidatePairStats *self);

/** @brief Setter of the state property */
void RTCIceCandidatePairStats_set_state(RTCIceCandidatePairStats* self, RTCStatsIceCandidatePairState * value);

/** @brief Getter of the nominated property */
bool RTCIceCandidatePairStats_nominated(const RTCIceCandidatePairStats *self);

/** @brief Setter of the nominated property */
void RTCIceCandidatePairStats_set_nominated(RTCIceCandidatePairStats* self, bool value);

/** @brief Getter of the packetsSent property */
long long RTCIceCandidatePairStats_packetsSent(const RTCIceCandidatePairStats *self);

/** @brief Setter of the packetsSent property */
void RTCIceCandidatePairStats_set_packetsSent(RTCIceCandidatePairStats* self, long long value);

/** @brief Getter of the packetsReceived property */
long long RTCIceCandidatePairStats_packetsReceived(const RTCIceCandidatePairStats *self);

/** @brief Setter of the packetsReceived property */
void RTCIceCandidatePairStats_set_packetsReceived(RTCIceCandidatePairStats* self, long long value);

/** @brief Getter of the bytesSent property */
long long RTCIceCandidatePairStats_bytesSent(const RTCIceCandidatePairStats *self);

/** @brief Setter of the bytesSent property */
void RTCIceCandidatePairStats_set_bytesSent(RTCIceCandidatePairStats* self, long long value);

/** @brief Getter of the bytesReceived property */
long long RTCIceCandidatePairStats_bytesReceived(const RTCIceCandidatePairStats *self);

/** @brief Setter of the bytesReceived property */
void RTCIceCandidatePairStats_set_bytesReceived(RTCIceCandidatePairStats* self, long long value);

/** @brief Getter of the lastPacketSentTimestamp property */
jb_Any RTCIceCandidatePairStats_lastPacketSentTimestamp(const RTCIceCandidatePairStats *self);

/** @brief Setter of the lastPacketSentTimestamp property */
void RTCIceCandidatePairStats_set_lastPacketSentTimestamp(RTCIceCandidatePairStats* self, jb_Any * value);

/** @brief Getter of the lastPacketReceivedTimestamp property */
jb_Any RTCIceCandidatePairStats_lastPacketReceivedTimestamp(const RTCIceCandidatePairStats *self);

/** @brief Setter of the lastPacketReceivedTimestamp property */
void RTCIceCandidatePairStats_set_lastPacketReceivedTimestamp(RTCIceCandidatePairStats* self, jb_Any * value);

/** @brief Getter of the totalRoundTripTime property */
double RTCIceCandidatePairStats_totalRoundTripTime(const RTCIceCandidatePairStats *self);

/** @brief Setter of the totalRoundTripTime property */
void RTCIceCandidatePairStats_set_totalRoundTripTime(RTCIceCandidatePairStats* self, double value);

/** @brief Getter of the currentRoundTripTime property */
double RTCIceCandidatePairStats_currentRoundTripTime(const RTCIceCandidatePairStats *self);

/** @brief Setter of the currentRoundTripTime property */
void RTCIceCandidatePairStats_set_currentRoundTripTime(RTCIceCandidatePairStats* self, double value);

/** @brief Getter of the availableOutgoingBitrate property */
double RTCIceCandidatePairStats_availableOutgoingBitrate(const RTCIceCandidatePairStats *self);

/** @brief Setter of the availableOutgoingBitrate property */
void RTCIceCandidatePairStats_set_availableOutgoingBitrate(RTCIceCandidatePairStats* self, double value);

/** @brief Getter of the availableIncomingBitrate property */
double RTCIceCandidatePairStats_availableIncomingBitrate(const RTCIceCandidatePairStats *self);

/** @brief Setter of the availableIncomingBitrate property */
void RTCIceCandidatePairStats_set_availableIncomingBitrate(RTCIceCandidatePairStats* self, double value);

/** @brief Getter of the requestsReceived property */
long long RTCIceCandidatePairStats_requestsReceived(const RTCIceCandidatePairStats *self);

/** @brief Setter of the requestsReceived property */
void RTCIceCandidatePairStats_set_requestsReceived(RTCIceCandidatePairStats* self, long long value);

/** @brief Getter of the requestsSent property */
long long RTCIceCandidatePairStats_requestsSent(const RTCIceCandidatePairStats *self);

/** @brief Setter of the requestsSent property */
void RTCIceCandidatePairStats_set_requestsSent(RTCIceCandidatePairStats* self, long long value);

/** @brief Getter of the responsesReceived property */
long long RTCIceCandidatePairStats_responsesReceived(const RTCIceCandidatePairStats *self);

/** @brief Setter of the responsesReceived property */
void RTCIceCandidatePairStats_set_responsesReceived(RTCIceCandidatePairStats* self, long long value);

/** @brief Getter of the responsesSent property */
long long RTCIceCandidatePairStats_responsesSent(const RTCIceCandidatePairStats *self);

/** @brief Setter of the responsesSent property */
void RTCIceCandidatePairStats_set_responsesSent(RTCIceCandidatePairStats* self, long long value);

/** @brief Getter of the consentRequestsSent property */
long long RTCIceCandidatePairStats_consentRequestsSent(const RTCIceCandidatePairStats *self);

/** @brief Setter of the consentRequestsSent property */
void RTCIceCandidatePairStats_set_consentRequestsSent(RTCIceCandidatePairStats* self, long long value);

/** @brief Getter of the packetsDiscardedOnSend property */
unsigned long RTCIceCandidatePairStats_packetsDiscardedOnSend(const RTCIceCandidatePairStats *self);

/** @brief Setter of the packetsDiscardedOnSend property */
void RTCIceCandidatePairStats_set_packetsDiscardedOnSend(RTCIceCandidatePairStats* self, unsigned long value);

/** @brief Getter of the bytesDiscardedOnSend property */
long long RTCIceCandidatePairStats_bytesDiscardedOnSend(const RTCIceCandidatePairStats *self);

/** @brief Setter of the bytesDiscardedOnSend property */
void RTCIceCandidatePairStats_set_bytesDiscardedOnSend(RTCIceCandidatePairStats* self, long long value);

/** @brief Constructor of the RTCIceCandidatePairStats dictionary type */
RTCIceCandidatePairStats RTCIceCandidatePairStats_new();

#ifdef __cplusplus
}
#endif
