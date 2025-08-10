#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCStats.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCIceCandidatePairStats, RTCStats);

jb_String RTCIceCandidatePairStats_transportId(const RTCIceCandidatePairStats *self);

void RTCIceCandidatePairStats_set_transportId(RTCIceCandidatePairStats* self, jb_String * value);

jb_String RTCIceCandidatePairStats_localCandidateId(const RTCIceCandidatePairStats *self);

void RTCIceCandidatePairStats_set_localCandidateId(RTCIceCandidatePairStats* self, jb_String * value);

jb_String RTCIceCandidatePairStats_remoteCandidateId(const RTCIceCandidatePairStats *self);

void RTCIceCandidatePairStats_set_remoteCandidateId(RTCIceCandidatePairStats* self, jb_String * value);

RTCStatsIceCandidatePairState RTCIceCandidatePairStats_state(const RTCIceCandidatePairStats *self);

void RTCIceCandidatePairStats_set_state(RTCIceCandidatePairStats* self, RTCStatsIceCandidatePairState * value);

bool RTCIceCandidatePairStats_nominated(const RTCIceCandidatePairStats *self);

void RTCIceCandidatePairStats_set_nominated(RTCIceCandidatePairStats* self, bool value);

long long RTCIceCandidatePairStats_packetsSent(const RTCIceCandidatePairStats *self);

void RTCIceCandidatePairStats_set_packetsSent(RTCIceCandidatePairStats* self, long long value);

long long RTCIceCandidatePairStats_packetsReceived(const RTCIceCandidatePairStats *self);

void RTCIceCandidatePairStats_set_packetsReceived(RTCIceCandidatePairStats* self, long long value);

long long RTCIceCandidatePairStats_bytesSent(const RTCIceCandidatePairStats *self);

void RTCIceCandidatePairStats_set_bytesSent(RTCIceCandidatePairStats* self, long long value);

long long RTCIceCandidatePairStats_bytesReceived(const RTCIceCandidatePairStats *self);

void RTCIceCandidatePairStats_set_bytesReceived(RTCIceCandidatePairStats* self, long long value);

jb_Any RTCIceCandidatePairStats_lastPacketSentTimestamp(const RTCIceCandidatePairStats *self);

void RTCIceCandidatePairStats_set_lastPacketSentTimestamp(RTCIceCandidatePairStats* self, jb_Any * value);

jb_Any RTCIceCandidatePairStats_lastPacketReceivedTimestamp(const RTCIceCandidatePairStats *self);

void RTCIceCandidatePairStats_set_lastPacketReceivedTimestamp(RTCIceCandidatePairStats* self, jb_Any * value);

double RTCIceCandidatePairStats_totalRoundTripTime(const RTCIceCandidatePairStats *self);

void RTCIceCandidatePairStats_set_totalRoundTripTime(RTCIceCandidatePairStats* self, double value);

double RTCIceCandidatePairStats_currentRoundTripTime(const RTCIceCandidatePairStats *self);

void RTCIceCandidatePairStats_set_currentRoundTripTime(RTCIceCandidatePairStats* self, double value);

double RTCIceCandidatePairStats_availableOutgoingBitrate(const RTCIceCandidatePairStats *self);

void RTCIceCandidatePairStats_set_availableOutgoingBitrate(RTCIceCandidatePairStats* self, double value);

double RTCIceCandidatePairStats_availableIncomingBitrate(const RTCIceCandidatePairStats *self);

void RTCIceCandidatePairStats_set_availableIncomingBitrate(RTCIceCandidatePairStats* self, double value);

long long RTCIceCandidatePairStats_requestsReceived(const RTCIceCandidatePairStats *self);

void RTCIceCandidatePairStats_set_requestsReceived(RTCIceCandidatePairStats* self, long long value);

long long RTCIceCandidatePairStats_requestsSent(const RTCIceCandidatePairStats *self);

void RTCIceCandidatePairStats_set_requestsSent(RTCIceCandidatePairStats* self, long long value);

long long RTCIceCandidatePairStats_responsesReceived(const RTCIceCandidatePairStats *self);

void RTCIceCandidatePairStats_set_responsesReceived(RTCIceCandidatePairStats* self, long long value);

long long RTCIceCandidatePairStats_responsesSent(const RTCIceCandidatePairStats *self);

void RTCIceCandidatePairStats_set_responsesSent(RTCIceCandidatePairStats* self, long long value);

long long RTCIceCandidatePairStats_consentRequestsSent(const RTCIceCandidatePairStats *self);

void RTCIceCandidatePairStats_set_consentRequestsSent(RTCIceCandidatePairStats* self, long long value);

unsigned long RTCIceCandidatePairStats_packetsDiscardedOnSend(const RTCIceCandidatePairStats *self);

void RTCIceCandidatePairStats_set_packetsDiscardedOnSend(RTCIceCandidatePairStats* self, unsigned long value);

long long RTCIceCandidatePairStats_bytesDiscardedOnSend(const RTCIceCandidatePairStats *self);

void RTCIceCandidatePairStats_set_bytesDiscardedOnSend(RTCIceCandidatePairStats* self, long long value);

RTCIceCandidatePairStats RTCIceCandidatePairStats_new();

#ifdef __cplusplus
}
#endif
