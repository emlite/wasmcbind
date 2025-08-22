#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "RTCReceivedRtpStreamStats.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCInboundRtpStreamStats */
DECLARE_EMLITE_TYPE(RTCInboundRtpStreamStats, RTCReceivedRtpStreamStats);

/** @brief Getter of the trackIdentifier property */
jb_String RTCInboundRtpStreamStats_trackIdentifier(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the trackIdentifier property */
void RTCInboundRtpStreamStats_set_trackIdentifier(RTCInboundRtpStreamStats* self, jb_String * value);

/** @brief Getter of the mid property */
jb_String RTCInboundRtpStreamStats_mid(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the mid property */
void RTCInboundRtpStreamStats_set_mid(RTCInboundRtpStreamStats* self, jb_String * value);

/** @brief Getter of the remoteId property */
jb_String RTCInboundRtpStreamStats_remoteId(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the remoteId property */
void RTCInboundRtpStreamStats_set_remoteId(RTCInboundRtpStreamStats* self, jb_String * value);

/** @brief Getter of the framesDecoded property */
unsigned long RTCInboundRtpStreamStats_framesDecoded(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the framesDecoded property */
void RTCInboundRtpStreamStats_set_framesDecoded(RTCInboundRtpStreamStats* self, unsigned long value);

/** @brief Getter of the keyFramesDecoded property */
unsigned long RTCInboundRtpStreamStats_keyFramesDecoded(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the keyFramesDecoded property */
void RTCInboundRtpStreamStats_set_keyFramesDecoded(RTCInboundRtpStreamStats* self, unsigned long value);

/** @brief Getter of the framesRendered property */
unsigned long RTCInboundRtpStreamStats_framesRendered(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the framesRendered property */
void RTCInboundRtpStreamStats_set_framesRendered(RTCInboundRtpStreamStats* self, unsigned long value);

/** @brief Getter of the framesDropped property */
unsigned long RTCInboundRtpStreamStats_framesDropped(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the framesDropped property */
void RTCInboundRtpStreamStats_set_framesDropped(RTCInboundRtpStreamStats* self, unsigned long value);

/** @brief Getter of the frameWidth property */
unsigned long RTCInboundRtpStreamStats_frameWidth(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the frameWidth property */
void RTCInboundRtpStreamStats_set_frameWidth(RTCInboundRtpStreamStats* self, unsigned long value);

/** @brief Getter of the frameHeight property */
unsigned long RTCInboundRtpStreamStats_frameHeight(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the frameHeight property */
void RTCInboundRtpStreamStats_set_frameHeight(RTCInboundRtpStreamStats* self, unsigned long value);

/** @brief Getter of the framesPerSecond property */
double RTCInboundRtpStreamStats_framesPerSecond(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the framesPerSecond property */
void RTCInboundRtpStreamStats_set_framesPerSecond(RTCInboundRtpStreamStats* self, double value);

/** @brief Getter of the qpSum property */
long long RTCInboundRtpStreamStats_qpSum(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the qpSum property */
void RTCInboundRtpStreamStats_set_qpSum(RTCInboundRtpStreamStats* self, long long value);

/** @brief Getter of the totalDecodeTime property */
double RTCInboundRtpStreamStats_totalDecodeTime(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the totalDecodeTime property */
void RTCInboundRtpStreamStats_set_totalDecodeTime(RTCInboundRtpStreamStats* self, double value);

/** @brief Getter of the totalInterFrameDelay property */
double RTCInboundRtpStreamStats_totalInterFrameDelay(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the totalInterFrameDelay property */
void RTCInboundRtpStreamStats_set_totalInterFrameDelay(RTCInboundRtpStreamStats* self, double value);

/** @brief Getter of the totalSquaredInterFrameDelay property */
double RTCInboundRtpStreamStats_totalSquaredInterFrameDelay(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the totalSquaredInterFrameDelay property */
void RTCInboundRtpStreamStats_set_totalSquaredInterFrameDelay(RTCInboundRtpStreamStats* self, double value);

/** @brief Getter of the pauseCount property */
unsigned long RTCInboundRtpStreamStats_pauseCount(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the pauseCount property */
void RTCInboundRtpStreamStats_set_pauseCount(RTCInboundRtpStreamStats* self, unsigned long value);

/** @brief Getter of the totalPausesDuration property */
double RTCInboundRtpStreamStats_totalPausesDuration(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the totalPausesDuration property */
void RTCInboundRtpStreamStats_set_totalPausesDuration(RTCInboundRtpStreamStats* self, double value);

/** @brief Getter of the freezeCount property */
unsigned long RTCInboundRtpStreamStats_freezeCount(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the freezeCount property */
void RTCInboundRtpStreamStats_set_freezeCount(RTCInboundRtpStreamStats* self, unsigned long value);

/** @brief Getter of the totalFreezesDuration property */
double RTCInboundRtpStreamStats_totalFreezesDuration(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the totalFreezesDuration property */
void RTCInboundRtpStreamStats_set_totalFreezesDuration(RTCInboundRtpStreamStats* self, double value);

/** @brief Getter of the lastPacketReceivedTimestamp property */
jb_Any RTCInboundRtpStreamStats_lastPacketReceivedTimestamp(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the lastPacketReceivedTimestamp property */
void RTCInboundRtpStreamStats_set_lastPacketReceivedTimestamp(RTCInboundRtpStreamStats* self, jb_Any * value);

/** @brief Getter of the headerBytesReceived property */
long long RTCInboundRtpStreamStats_headerBytesReceived(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the headerBytesReceived property */
void RTCInboundRtpStreamStats_set_headerBytesReceived(RTCInboundRtpStreamStats* self, long long value);

/** @brief Getter of the packetsDiscarded property */
long long RTCInboundRtpStreamStats_packetsDiscarded(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the packetsDiscarded property */
void RTCInboundRtpStreamStats_set_packetsDiscarded(RTCInboundRtpStreamStats* self, long long value);

/** @brief Getter of the fecBytesReceived property */
long long RTCInboundRtpStreamStats_fecBytesReceived(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the fecBytesReceived property */
void RTCInboundRtpStreamStats_set_fecBytesReceived(RTCInboundRtpStreamStats* self, long long value);

/** @brief Getter of the fecPacketsReceived property */
long long RTCInboundRtpStreamStats_fecPacketsReceived(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the fecPacketsReceived property */
void RTCInboundRtpStreamStats_set_fecPacketsReceived(RTCInboundRtpStreamStats* self, long long value);

/** @brief Getter of the fecPacketsDiscarded property */
long long RTCInboundRtpStreamStats_fecPacketsDiscarded(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the fecPacketsDiscarded property */
void RTCInboundRtpStreamStats_set_fecPacketsDiscarded(RTCInboundRtpStreamStats* self, long long value);

/** @brief Getter of the bytesReceived property */
long long RTCInboundRtpStreamStats_bytesReceived(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the bytesReceived property */
void RTCInboundRtpStreamStats_set_bytesReceived(RTCInboundRtpStreamStats* self, long long value);

/** @brief Getter of the nackCount property */
unsigned long RTCInboundRtpStreamStats_nackCount(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the nackCount property */
void RTCInboundRtpStreamStats_set_nackCount(RTCInboundRtpStreamStats* self, unsigned long value);

/** @brief Getter of the firCount property */
unsigned long RTCInboundRtpStreamStats_firCount(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the firCount property */
void RTCInboundRtpStreamStats_set_firCount(RTCInboundRtpStreamStats* self, unsigned long value);

/** @brief Getter of the pliCount property */
unsigned long RTCInboundRtpStreamStats_pliCount(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the pliCount property */
void RTCInboundRtpStreamStats_set_pliCount(RTCInboundRtpStreamStats* self, unsigned long value);

/** @brief Getter of the totalProcessingDelay property */
double RTCInboundRtpStreamStats_totalProcessingDelay(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the totalProcessingDelay property */
void RTCInboundRtpStreamStats_set_totalProcessingDelay(RTCInboundRtpStreamStats* self, double value);

/** @brief Getter of the estimatedPlayoutTimestamp property */
jb_Any RTCInboundRtpStreamStats_estimatedPlayoutTimestamp(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the estimatedPlayoutTimestamp property */
void RTCInboundRtpStreamStats_set_estimatedPlayoutTimestamp(RTCInboundRtpStreamStats* self, jb_Any * value);

/** @brief Getter of the jitterBufferDelay property */
double RTCInboundRtpStreamStats_jitterBufferDelay(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the jitterBufferDelay property */
void RTCInboundRtpStreamStats_set_jitterBufferDelay(RTCInboundRtpStreamStats* self, double value);

/** @brief Getter of the jitterBufferTargetDelay property */
double RTCInboundRtpStreamStats_jitterBufferTargetDelay(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the jitterBufferTargetDelay property */
void RTCInboundRtpStreamStats_set_jitterBufferTargetDelay(RTCInboundRtpStreamStats* self, double value);

/** @brief Getter of the jitterBufferEmittedCount property */
long long RTCInboundRtpStreamStats_jitterBufferEmittedCount(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the jitterBufferEmittedCount property */
void RTCInboundRtpStreamStats_set_jitterBufferEmittedCount(RTCInboundRtpStreamStats* self, long long value);

/** @brief Getter of the jitterBufferMinimumDelay property */
double RTCInboundRtpStreamStats_jitterBufferMinimumDelay(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the jitterBufferMinimumDelay property */
void RTCInboundRtpStreamStats_set_jitterBufferMinimumDelay(RTCInboundRtpStreamStats* self, double value);

/** @brief Getter of the totalSamplesReceived property */
long long RTCInboundRtpStreamStats_totalSamplesReceived(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the totalSamplesReceived property */
void RTCInboundRtpStreamStats_set_totalSamplesReceived(RTCInboundRtpStreamStats* self, long long value);

/** @brief Getter of the concealedSamples property */
long long RTCInboundRtpStreamStats_concealedSamples(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the concealedSamples property */
void RTCInboundRtpStreamStats_set_concealedSamples(RTCInboundRtpStreamStats* self, long long value);

/** @brief Getter of the silentConcealedSamples property */
long long RTCInboundRtpStreamStats_silentConcealedSamples(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the silentConcealedSamples property */
void RTCInboundRtpStreamStats_set_silentConcealedSamples(RTCInboundRtpStreamStats* self, long long value);

/** @brief Getter of the concealmentEvents property */
long long RTCInboundRtpStreamStats_concealmentEvents(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the concealmentEvents property */
void RTCInboundRtpStreamStats_set_concealmentEvents(RTCInboundRtpStreamStats* self, long long value);

/** @brief Getter of the insertedSamplesForDeceleration property */
long long RTCInboundRtpStreamStats_insertedSamplesForDeceleration(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the insertedSamplesForDeceleration property */
void RTCInboundRtpStreamStats_set_insertedSamplesForDeceleration(RTCInboundRtpStreamStats* self, long long value);

/** @brief Getter of the removedSamplesForAcceleration property */
long long RTCInboundRtpStreamStats_removedSamplesForAcceleration(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the removedSamplesForAcceleration property */
void RTCInboundRtpStreamStats_set_removedSamplesForAcceleration(RTCInboundRtpStreamStats* self, long long value);

/** @brief Getter of the audioLevel property */
double RTCInboundRtpStreamStats_audioLevel(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the audioLevel property */
void RTCInboundRtpStreamStats_set_audioLevel(RTCInboundRtpStreamStats* self, double value);

/** @brief Getter of the totalAudioEnergy property */
double RTCInboundRtpStreamStats_totalAudioEnergy(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the totalAudioEnergy property */
void RTCInboundRtpStreamStats_set_totalAudioEnergy(RTCInboundRtpStreamStats* self, double value);

/** @brief Getter of the totalSamplesDuration property */
double RTCInboundRtpStreamStats_totalSamplesDuration(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the totalSamplesDuration property */
void RTCInboundRtpStreamStats_set_totalSamplesDuration(RTCInboundRtpStreamStats* self, double value);

/** @brief Getter of the framesReceived property */
unsigned long RTCInboundRtpStreamStats_framesReceived(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the framesReceived property */
void RTCInboundRtpStreamStats_set_framesReceived(RTCInboundRtpStreamStats* self, unsigned long value);

/** @brief Getter of the decoderImplementation property */
jb_String RTCInboundRtpStreamStats_decoderImplementation(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the decoderImplementation property */
void RTCInboundRtpStreamStats_set_decoderImplementation(RTCInboundRtpStreamStats* self, jb_String * value);

/** @brief Getter of the playoutId property */
jb_String RTCInboundRtpStreamStats_playoutId(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the playoutId property */
void RTCInboundRtpStreamStats_set_playoutId(RTCInboundRtpStreamStats* self, jb_String * value);

/** @brief Getter of the powerEfficientDecoder property */
bool RTCInboundRtpStreamStats_powerEfficientDecoder(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the powerEfficientDecoder property */
void RTCInboundRtpStreamStats_set_powerEfficientDecoder(RTCInboundRtpStreamStats* self, bool value);

/** @brief Getter of the framesAssembledFromMultiplePackets property */
unsigned long RTCInboundRtpStreamStats_framesAssembledFromMultiplePackets(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the framesAssembledFromMultiplePackets property */
void RTCInboundRtpStreamStats_set_framesAssembledFromMultiplePackets(RTCInboundRtpStreamStats* self, unsigned long value);

/** @brief Getter of the totalAssemblyTime property */
double RTCInboundRtpStreamStats_totalAssemblyTime(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the totalAssemblyTime property */
void RTCInboundRtpStreamStats_set_totalAssemblyTime(RTCInboundRtpStreamStats* self, double value);

/** @brief Getter of the retransmittedPacketsReceived property */
long long RTCInboundRtpStreamStats_retransmittedPacketsReceived(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the retransmittedPacketsReceived property */
void RTCInboundRtpStreamStats_set_retransmittedPacketsReceived(RTCInboundRtpStreamStats* self, long long value);

/** @brief Getter of the retransmittedBytesReceived property */
long long RTCInboundRtpStreamStats_retransmittedBytesReceived(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the retransmittedBytesReceived property */
void RTCInboundRtpStreamStats_set_retransmittedBytesReceived(RTCInboundRtpStreamStats* self, long long value);

/** @brief Getter of the rtxSsrc property */
unsigned long RTCInboundRtpStreamStats_rtxSsrc(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the rtxSsrc property */
void RTCInboundRtpStreamStats_set_rtxSsrc(RTCInboundRtpStreamStats* self, unsigned long value);

/** @brief Getter of the fecSsrc property */
unsigned long RTCInboundRtpStreamStats_fecSsrc(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the fecSsrc property */
void RTCInboundRtpStreamStats_set_fecSsrc(RTCInboundRtpStreamStats* self, unsigned long value);

/** @brief Getter of the totalCorruptionProbability property */
double RTCInboundRtpStreamStats_totalCorruptionProbability(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the totalCorruptionProbability property */
void RTCInboundRtpStreamStats_set_totalCorruptionProbability(RTCInboundRtpStreamStats* self, double value);

/** @brief Getter of the totalSquaredCorruptionProbability property */
double RTCInboundRtpStreamStats_totalSquaredCorruptionProbability(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the totalSquaredCorruptionProbability property */
void RTCInboundRtpStreamStats_set_totalSquaredCorruptionProbability(RTCInboundRtpStreamStats* self, double value);

/** @brief Getter of the corruptionMeasurements property */
long long RTCInboundRtpStreamStats_corruptionMeasurements(const RTCInboundRtpStreamStats *self);

/** @brief Setter of the corruptionMeasurements property */
void RTCInboundRtpStreamStats_set_corruptionMeasurements(RTCInboundRtpStreamStats* self, long long value);

/** @brief Constructor of the RTCInboundRtpStreamStats dictionary type */
RTCInboundRtpStreamStats RTCInboundRtpStreamStats_new();

#ifdef __cplusplus
}
#endif
