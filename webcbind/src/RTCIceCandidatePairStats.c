#include <webcbind/RTCIceCandidatePairStats.h>

DEFINE_EMLITE_TYPE(RTCIceCandidatePairStats, RTCStats);


jb_String RTCIceCandidatePairStats_transportId(const RTCIceCandidatePairStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("transportId")));
}


void RTCIceCandidatePairStats_set_transportId(RTCIceCandidatePairStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("transportId"), em_Val_from(value));
}


jb_String RTCIceCandidatePairStats_localCandidateId(const RTCIceCandidatePairStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("localCandidateId")));
}


void RTCIceCandidatePairStats_set_localCandidateId(RTCIceCandidatePairStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("localCandidateId"), em_Val_from(value));
}


jb_String RTCIceCandidatePairStats_remoteCandidateId(const RTCIceCandidatePairStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("remoteCandidateId")));
}


void RTCIceCandidatePairStats_set_remoteCandidateId(RTCIceCandidatePairStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("remoteCandidateId"), em_Val_from(value));
}


RTCStatsIceCandidatePairState RTCIceCandidatePairStats_state(const RTCIceCandidatePairStats *self) {
    return em_Val_as(RTCStatsIceCandidatePairState, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("state")));
}


void RTCIceCandidatePairStats_set_state(RTCIceCandidatePairStats* self, RTCStatsIceCandidatePairState * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("state"), em_Val_from(value));
}


bool RTCIceCandidatePairStats_nominated(const RTCIceCandidatePairStats *self) {
    return em_Val_as(bool, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("nominated")));
}


void RTCIceCandidatePairStats_set_nominated(RTCIceCandidatePairStats* self, bool value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("nominated"), em_Val_from(value));
}


long long RTCIceCandidatePairStats_packetsSent(const RTCIceCandidatePairStats *self) {
    return em_Val_as(long long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("packetsSent")));
}


void RTCIceCandidatePairStats_set_packetsSent(RTCIceCandidatePairStats* self, long long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("packetsSent"), em_Val_from(value));
}


long long RTCIceCandidatePairStats_packetsReceived(const RTCIceCandidatePairStats *self) {
    return em_Val_as(long long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("packetsReceived")));
}


void RTCIceCandidatePairStats_set_packetsReceived(RTCIceCandidatePairStats* self, long long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("packetsReceived"), em_Val_from(value));
}


long long RTCIceCandidatePairStats_bytesSent(const RTCIceCandidatePairStats *self) {
    return em_Val_as(long long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("bytesSent")));
}


void RTCIceCandidatePairStats_set_bytesSent(RTCIceCandidatePairStats* self, long long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("bytesSent"), em_Val_from(value));
}


long long RTCIceCandidatePairStats_bytesReceived(const RTCIceCandidatePairStats *self) {
    return em_Val_as(long long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("bytesReceived")));
}


void RTCIceCandidatePairStats_set_bytesReceived(RTCIceCandidatePairStats* self, long long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("bytesReceived"), em_Val_from(value));
}


jb_Any RTCIceCandidatePairStats_lastPacketSentTimestamp(const RTCIceCandidatePairStats *self) {
    return em_Val_as(jb_Any, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("lastPacketSentTimestamp")));
}


void RTCIceCandidatePairStats_set_lastPacketSentTimestamp(RTCIceCandidatePairStats* self, jb_Any * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("lastPacketSentTimestamp"), em_Val_from(value));
}


jb_Any RTCIceCandidatePairStats_lastPacketReceivedTimestamp(const RTCIceCandidatePairStats *self) {
    return em_Val_as(jb_Any, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("lastPacketReceivedTimestamp")));
}


void RTCIceCandidatePairStats_set_lastPacketReceivedTimestamp(RTCIceCandidatePairStats* self, jb_Any * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("lastPacketReceivedTimestamp"), em_Val_from(value));
}


double RTCIceCandidatePairStats_totalRoundTripTime(const RTCIceCandidatePairStats *self) {
    return em_Val_as(double, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("totalRoundTripTime")));
}


void RTCIceCandidatePairStats_set_totalRoundTripTime(RTCIceCandidatePairStats* self, double value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("totalRoundTripTime"), em_Val_from(value));
}


double RTCIceCandidatePairStats_currentRoundTripTime(const RTCIceCandidatePairStats *self) {
    return em_Val_as(double, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("currentRoundTripTime")));
}


void RTCIceCandidatePairStats_set_currentRoundTripTime(RTCIceCandidatePairStats* self, double value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("currentRoundTripTime"), em_Val_from(value));
}


double RTCIceCandidatePairStats_availableOutgoingBitrate(const RTCIceCandidatePairStats *self) {
    return em_Val_as(double, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("availableOutgoingBitrate")));
}


void RTCIceCandidatePairStats_set_availableOutgoingBitrate(RTCIceCandidatePairStats* self, double value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("availableOutgoingBitrate"), em_Val_from(value));
}


double RTCIceCandidatePairStats_availableIncomingBitrate(const RTCIceCandidatePairStats *self) {
    return em_Val_as(double, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("availableIncomingBitrate")));
}


void RTCIceCandidatePairStats_set_availableIncomingBitrate(RTCIceCandidatePairStats* self, double value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("availableIncomingBitrate"), em_Val_from(value));
}


long long RTCIceCandidatePairStats_requestsReceived(const RTCIceCandidatePairStats *self) {
    return em_Val_as(long long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("requestsReceived")));
}


void RTCIceCandidatePairStats_set_requestsReceived(RTCIceCandidatePairStats* self, long long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("requestsReceived"), em_Val_from(value));
}


long long RTCIceCandidatePairStats_requestsSent(const RTCIceCandidatePairStats *self) {
    return em_Val_as(long long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("requestsSent")));
}


void RTCIceCandidatePairStats_set_requestsSent(RTCIceCandidatePairStats* self, long long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("requestsSent"), em_Val_from(value));
}


long long RTCIceCandidatePairStats_responsesReceived(const RTCIceCandidatePairStats *self) {
    return em_Val_as(long long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("responsesReceived")));
}


void RTCIceCandidatePairStats_set_responsesReceived(RTCIceCandidatePairStats* self, long long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("responsesReceived"), em_Val_from(value));
}


long long RTCIceCandidatePairStats_responsesSent(const RTCIceCandidatePairStats *self) {
    return em_Val_as(long long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("responsesSent")));
}


void RTCIceCandidatePairStats_set_responsesSent(RTCIceCandidatePairStats* self, long long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("responsesSent"), em_Val_from(value));
}


long long RTCIceCandidatePairStats_consentRequestsSent(const RTCIceCandidatePairStats *self) {
    return em_Val_as(long long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("consentRequestsSent")));
}


void RTCIceCandidatePairStats_set_consentRequestsSent(RTCIceCandidatePairStats* self, long long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("consentRequestsSent"), em_Val_from(value));
}


unsigned long RTCIceCandidatePairStats_packetsDiscardedOnSend(const RTCIceCandidatePairStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("packetsDiscardedOnSend")));
}


void RTCIceCandidatePairStats_set_packetsDiscardedOnSend(RTCIceCandidatePairStats* self, unsigned long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("packetsDiscardedOnSend"), em_Val_from(value));
}


long long RTCIceCandidatePairStats_bytesDiscardedOnSend(const RTCIceCandidatePairStats *self) {
    return em_Val_as(long long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("bytesDiscardedOnSend")));
}


void RTCIceCandidatePairStats_set_bytesDiscardedOnSend(RTCIceCandidatePairStats* self, long long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("bytesDiscardedOnSend"), em_Val_from(value));
}


RTCIceCandidatePairStats RTCIceCandidatePairStats_new() {
    em_Val obj = em_Val_object();
    return RTCIceCandidatePairStats_from_val(&obj);
}

