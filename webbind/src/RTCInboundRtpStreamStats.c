#include <webbind/RTCInboundRtpStreamStats.h>

DEFINE_EMLITE_TYPE(RTCInboundRtpStreamStats, RTCReceivedRtpStreamStats);


jb_String RTCInboundRtpStreamStats_trackIdentifier(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("trackIdentifier")));
}


void RTCInboundRtpStreamStats_set_trackIdentifier(RTCInboundRtpStreamStats* self, jb_String * value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("trackIdentifier"), em_Val_from(value));
}


jb_String RTCInboundRtpStreamStats_mid(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("mid")));
}


void RTCInboundRtpStreamStats_set_mid(RTCInboundRtpStreamStats* self, jb_String * value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("mid"), em_Val_from(value));
}


jb_String RTCInboundRtpStreamStats_remoteId(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("remoteId")));
}


void RTCInboundRtpStreamStats_set_remoteId(RTCInboundRtpStreamStats* self, jb_String * value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("remoteId"), em_Val_from(value));
}


unsigned long RTCInboundRtpStreamStats_framesDecoded(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("framesDecoded")));
}


void RTCInboundRtpStreamStats_set_framesDecoded(RTCInboundRtpStreamStats* self, unsigned long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("framesDecoded"), em_Val_from(value));
}


unsigned long RTCInboundRtpStreamStats_keyFramesDecoded(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("keyFramesDecoded")));
}


void RTCInboundRtpStreamStats_set_keyFramesDecoded(RTCInboundRtpStreamStats* self, unsigned long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("keyFramesDecoded"), em_Val_from(value));
}


unsigned long RTCInboundRtpStreamStats_framesRendered(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("framesRendered")));
}


void RTCInboundRtpStreamStats_set_framesRendered(RTCInboundRtpStreamStats* self, unsigned long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("framesRendered"), em_Val_from(value));
}


unsigned long RTCInboundRtpStreamStats_framesDropped(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("framesDropped")));
}


void RTCInboundRtpStreamStats_set_framesDropped(RTCInboundRtpStreamStats* self, unsigned long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("framesDropped"), em_Val_from(value));
}


unsigned long RTCInboundRtpStreamStats_frameWidth(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("frameWidth")));
}


void RTCInboundRtpStreamStats_set_frameWidth(RTCInboundRtpStreamStats* self, unsigned long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("frameWidth"), em_Val_from(value));
}


unsigned long RTCInboundRtpStreamStats_frameHeight(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("frameHeight")));
}


void RTCInboundRtpStreamStats_set_frameHeight(RTCInboundRtpStreamStats* self, unsigned long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("frameHeight"), em_Val_from(value));
}


double RTCInboundRtpStreamStats_framesPerSecond(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(double, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("framesPerSecond")));
}


void RTCInboundRtpStreamStats_set_framesPerSecond(RTCInboundRtpStreamStats* self, double value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("framesPerSecond"), em_Val_from(value));
}


long long RTCInboundRtpStreamStats_qpSum(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("qpSum")));
}


void RTCInboundRtpStreamStats_set_qpSum(RTCInboundRtpStreamStats* self, long long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("qpSum"), em_Val_from(value));
}


double RTCInboundRtpStreamStats_totalDecodeTime(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(double, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("totalDecodeTime")));
}


void RTCInboundRtpStreamStats_set_totalDecodeTime(RTCInboundRtpStreamStats* self, double value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("totalDecodeTime"), em_Val_from(value));
}


double RTCInboundRtpStreamStats_totalInterFrameDelay(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(double, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("totalInterFrameDelay")));
}


void RTCInboundRtpStreamStats_set_totalInterFrameDelay(RTCInboundRtpStreamStats* self, double value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("totalInterFrameDelay"), em_Val_from(value));
}


double RTCInboundRtpStreamStats_totalSquaredInterFrameDelay(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(double, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("totalSquaredInterFrameDelay")));
}


void RTCInboundRtpStreamStats_set_totalSquaredInterFrameDelay(RTCInboundRtpStreamStats* self, double value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("totalSquaredInterFrameDelay"), em_Val_from(value));
}


unsigned long RTCInboundRtpStreamStats_pauseCount(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("pauseCount")));
}


void RTCInboundRtpStreamStats_set_pauseCount(RTCInboundRtpStreamStats* self, unsigned long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("pauseCount"), em_Val_from(value));
}


double RTCInboundRtpStreamStats_totalPausesDuration(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(double, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("totalPausesDuration")));
}


void RTCInboundRtpStreamStats_set_totalPausesDuration(RTCInboundRtpStreamStats* self, double value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("totalPausesDuration"), em_Val_from(value));
}


unsigned long RTCInboundRtpStreamStats_freezeCount(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("freezeCount")));
}


void RTCInboundRtpStreamStats_set_freezeCount(RTCInboundRtpStreamStats* self, unsigned long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("freezeCount"), em_Val_from(value));
}


double RTCInboundRtpStreamStats_totalFreezesDuration(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(double, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("totalFreezesDuration")));
}


void RTCInboundRtpStreamStats_set_totalFreezesDuration(RTCInboundRtpStreamStats* self, double value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("totalFreezesDuration"), em_Val_from(value));
}


jb_Any RTCInboundRtpStreamStats_lastPacketReceivedTimestamp(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(jb_Any, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("lastPacketReceivedTimestamp")));
}


void RTCInboundRtpStreamStats_set_lastPacketReceivedTimestamp(RTCInboundRtpStreamStats* self, jb_Any * value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("lastPacketReceivedTimestamp"), em_Val_from(value));
}


long long RTCInboundRtpStreamStats_headerBytesReceived(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("headerBytesReceived")));
}


void RTCInboundRtpStreamStats_set_headerBytesReceived(RTCInboundRtpStreamStats* self, long long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("headerBytesReceived"), em_Val_from(value));
}


long long RTCInboundRtpStreamStats_packetsDiscarded(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("packetsDiscarded")));
}


void RTCInboundRtpStreamStats_set_packetsDiscarded(RTCInboundRtpStreamStats* self, long long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("packetsDiscarded"), em_Val_from(value));
}


long long RTCInboundRtpStreamStats_fecBytesReceived(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("fecBytesReceived")));
}


void RTCInboundRtpStreamStats_set_fecBytesReceived(RTCInboundRtpStreamStats* self, long long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("fecBytesReceived"), em_Val_from(value));
}


long long RTCInboundRtpStreamStats_fecPacketsReceived(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("fecPacketsReceived")));
}


void RTCInboundRtpStreamStats_set_fecPacketsReceived(RTCInboundRtpStreamStats* self, long long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("fecPacketsReceived"), em_Val_from(value));
}


long long RTCInboundRtpStreamStats_fecPacketsDiscarded(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("fecPacketsDiscarded")));
}


void RTCInboundRtpStreamStats_set_fecPacketsDiscarded(RTCInboundRtpStreamStats* self, long long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("fecPacketsDiscarded"), em_Val_from(value));
}


long long RTCInboundRtpStreamStats_bytesReceived(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("bytesReceived")));
}


void RTCInboundRtpStreamStats_set_bytesReceived(RTCInboundRtpStreamStats* self, long long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("bytesReceived"), em_Val_from(value));
}


unsigned long RTCInboundRtpStreamStats_nackCount(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("nackCount")));
}


void RTCInboundRtpStreamStats_set_nackCount(RTCInboundRtpStreamStats* self, unsigned long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("nackCount"), em_Val_from(value));
}


unsigned long RTCInboundRtpStreamStats_firCount(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("firCount")));
}


void RTCInboundRtpStreamStats_set_firCount(RTCInboundRtpStreamStats* self, unsigned long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("firCount"), em_Val_from(value));
}


unsigned long RTCInboundRtpStreamStats_pliCount(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("pliCount")));
}


void RTCInboundRtpStreamStats_set_pliCount(RTCInboundRtpStreamStats* self, unsigned long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("pliCount"), em_Val_from(value));
}


double RTCInboundRtpStreamStats_totalProcessingDelay(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(double, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("totalProcessingDelay")));
}


void RTCInboundRtpStreamStats_set_totalProcessingDelay(RTCInboundRtpStreamStats* self, double value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("totalProcessingDelay"), em_Val_from(value));
}


jb_Any RTCInboundRtpStreamStats_estimatedPlayoutTimestamp(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(jb_Any, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("estimatedPlayoutTimestamp")));
}


void RTCInboundRtpStreamStats_set_estimatedPlayoutTimestamp(RTCInboundRtpStreamStats* self, jb_Any * value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("estimatedPlayoutTimestamp"), em_Val_from(value));
}


double RTCInboundRtpStreamStats_jitterBufferDelay(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(double, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("jitterBufferDelay")));
}


void RTCInboundRtpStreamStats_set_jitterBufferDelay(RTCInboundRtpStreamStats* self, double value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("jitterBufferDelay"), em_Val_from(value));
}


double RTCInboundRtpStreamStats_jitterBufferTargetDelay(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(double, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("jitterBufferTargetDelay")));
}


void RTCInboundRtpStreamStats_set_jitterBufferTargetDelay(RTCInboundRtpStreamStats* self, double value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("jitterBufferTargetDelay"), em_Val_from(value));
}


long long RTCInboundRtpStreamStats_jitterBufferEmittedCount(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("jitterBufferEmittedCount")));
}


void RTCInboundRtpStreamStats_set_jitterBufferEmittedCount(RTCInboundRtpStreamStats* self, long long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("jitterBufferEmittedCount"), em_Val_from(value));
}


double RTCInboundRtpStreamStats_jitterBufferMinimumDelay(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(double, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("jitterBufferMinimumDelay")));
}


void RTCInboundRtpStreamStats_set_jitterBufferMinimumDelay(RTCInboundRtpStreamStats* self, double value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("jitterBufferMinimumDelay"), em_Val_from(value));
}


long long RTCInboundRtpStreamStats_totalSamplesReceived(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("totalSamplesReceived")));
}


void RTCInboundRtpStreamStats_set_totalSamplesReceived(RTCInboundRtpStreamStats* self, long long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("totalSamplesReceived"), em_Val_from(value));
}


long long RTCInboundRtpStreamStats_concealedSamples(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("concealedSamples")));
}


void RTCInboundRtpStreamStats_set_concealedSamples(RTCInboundRtpStreamStats* self, long long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("concealedSamples"), em_Val_from(value));
}


long long RTCInboundRtpStreamStats_silentConcealedSamples(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("silentConcealedSamples")));
}


void RTCInboundRtpStreamStats_set_silentConcealedSamples(RTCInboundRtpStreamStats* self, long long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("silentConcealedSamples"), em_Val_from(value));
}


long long RTCInboundRtpStreamStats_concealmentEvents(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("concealmentEvents")));
}


void RTCInboundRtpStreamStats_set_concealmentEvents(RTCInboundRtpStreamStats* self, long long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("concealmentEvents"), em_Val_from(value));
}


long long RTCInboundRtpStreamStats_insertedSamplesForDeceleration(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("insertedSamplesForDeceleration")));
}


void RTCInboundRtpStreamStats_set_insertedSamplesForDeceleration(RTCInboundRtpStreamStats* self, long long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("insertedSamplesForDeceleration"), em_Val_from(value));
}


long long RTCInboundRtpStreamStats_removedSamplesForAcceleration(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("removedSamplesForAcceleration")));
}


void RTCInboundRtpStreamStats_set_removedSamplesForAcceleration(RTCInboundRtpStreamStats* self, long long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("removedSamplesForAcceleration"), em_Val_from(value));
}


double RTCInboundRtpStreamStats_audioLevel(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(double, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("audioLevel")));
}


void RTCInboundRtpStreamStats_set_audioLevel(RTCInboundRtpStreamStats* self, double value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("audioLevel"), em_Val_from(value));
}


double RTCInboundRtpStreamStats_totalAudioEnergy(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(double, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("totalAudioEnergy")));
}


void RTCInboundRtpStreamStats_set_totalAudioEnergy(RTCInboundRtpStreamStats* self, double value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("totalAudioEnergy"), em_Val_from(value));
}


double RTCInboundRtpStreamStats_totalSamplesDuration(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(double, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("totalSamplesDuration")));
}


void RTCInboundRtpStreamStats_set_totalSamplesDuration(RTCInboundRtpStreamStats* self, double value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("totalSamplesDuration"), em_Val_from(value));
}


unsigned long RTCInboundRtpStreamStats_framesReceived(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("framesReceived")));
}


void RTCInboundRtpStreamStats_set_framesReceived(RTCInboundRtpStreamStats* self, unsigned long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("framesReceived"), em_Val_from(value));
}


jb_String RTCInboundRtpStreamStats_decoderImplementation(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("decoderImplementation")));
}


void RTCInboundRtpStreamStats_set_decoderImplementation(RTCInboundRtpStreamStats* self, jb_String * value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("decoderImplementation"), em_Val_from(value));
}


jb_String RTCInboundRtpStreamStats_playoutId(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("playoutId")));
}


void RTCInboundRtpStreamStats_set_playoutId(RTCInboundRtpStreamStats* self, jb_String * value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("playoutId"), em_Val_from(value));
}


bool RTCInboundRtpStreamStats_powerEfficientDecoder(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(bool, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("powerEfficientDecoder")));
}


void RTCInboundRtpStreamStats_set_powerEfficientDecoder(RTCInboundRtpStreamStats* self, bool value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("powerEfficientDecoder"), em_Val_from(value));
}


unsigned long RTCInboundRtpStreamStats_framesAssembledFromMultiplePackets(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("framesAssembledFromMultiplePackets")));
}


void RTCInboundRtpStreamStats_set_framesAssembledFromMultiplePackets(RTCInboundRtpStreamStats* self, unsigned long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("framesAssembledFromMultiplePackets"), em_Val_from(value));
}


double RTCInboundRtpStreamStats_totalAssemblyTime(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(double, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("totalAssemblyTime")));
}


void RTCInboundRtpStreamStats_set_totalAssemblyTime(RTCInboundRtpStreamStats* self, double value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("totalAssemblyTime"), em_Val_from(value));
}


long long RTCInboundRtpStreamStats_retransmittedPacketsReceived(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("retransmittedPacketsReceived")));
}


void RTCInboundRtpStreamStats_set_retransmittedPacketsReceived(RTCInboundRtpStreamStats* self, long long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("retransmittedPacketsReceived"), em_Val_from(value));
}


long long RTCInboundRtpStreamStats_retransmittedBytesReceived(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("retransmittedBytesReceived")));
}


void RTCInboundRtpStreamStats_set_retransmittedBytesReceived(RTCInboundRtpStreamStats* self, long long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("retransmittedBytesReceived"), em_Val_from(value));
}


unsigned long RTCInboundRtpStreamStats_rtxSsrc(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("rtxSsrc")));
}


void RTCInboundRtpStreamStats_set_rtxSsrc(RTCInboundRtpStreamStats* self, unsigned long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("rtxSsrc"), em_Val_from(value));
}


unsigned long RTCInboundRtpStreamStats_fecSsrc(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("fecSsrc")));
}


void RTCInboundRtpStreamStats_set_fecSsrc(RTCInboundRtpStreamStats* self, unsigned long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("fecSsrc"), em_Val_from(value));
}


double RTCInboundRtpStreamStats_totalCorruptionProbability(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(double, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("totalCorruptionProbability")));
}


void RTCInboundRtpStreamStats_set_totalCorruptionProbability(RTCInboundRtpStreamStats* self, double value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("totalCorruptionProbability"), em_Val_from(value));
}


double RTCInboundRtpStreamStats_totalSquaredCorruptionProbability(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(double, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("totalSquaredCorruptionProbability")));
}


void RTCInboundRtpStreamStats_set_totalSquaredCorruptionProbability(RTCInboundRtpStreamStats* self, double value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("totalSquaredCorruptionProbability"), em_Val_from(value));
}


long long RTCInboundRtpStreamStats_corruptionMeasurements(const RTCInboundRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("corruptionMeasurements")));
}


void RTCInboundRtpStreamStats_set_corruptionMeasurements(RTCInboundRtpStreamStats* self, long long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("corruptionMeasurements"), em_Val_from(value));
}


RTCInboundRtpStreamStats RTCInboundRtpStreamStats_new() {
    em_Val obj = em_Val_object();
    return RTCInboundRtpStreamStats_from_val(&obj);
}

