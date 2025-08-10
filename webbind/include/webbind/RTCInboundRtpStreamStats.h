#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCReceivedRtpStreamStats.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCInboundRtpStreamStats, RTCReceivedRtpStreamStats);

jb_String RTCInboundRtpStreamStats_trackIdentifier(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_trackIdentifier(RTCInboundRtpStreamStats* self, jb_String * value);

jb_String RTCInboundRtpStreamStats_mid(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_mid(RTCInboundRtpStreamStats* self, jb_String * value);

jb_String RTCInboundRtpStreamStats_remoteId(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_remoteId(RTCInboundRtpStreamStats* self, jb_String * value);

unsigned long RTCInboundRtpStreamStats_framesDecoded(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_framesDecoded(RTCInboundRtpStreamStats* self, unsigned long value);

unsigned long RTCInboundRtpStreamStats_keyFramesDecoded(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_keyFramesDecoded(RTCInboundRtpStreamStats* self, unsigned long value);

unsigned long RTCInboundRtpStreamStats_framesRendered(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_framesRendered(RTCInboundRtpStreamStats* self, unsigned long value);

unsigned long RTCInboundRtpStreamStats_framesDropped(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_framesDropped(RTCInboundRtpStreamStats* self, unsigned long value);

unsigned long RTCInboundRtpStreamStats_frameWidth(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_frameWidth(RTCInboundRtpStreamStats* self, unsigned long value);

unsigned long RTCInboundRtpStreamStats_frameHeight(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_frameHeight(RTCInboundRtpStreamStats* self, unsigned long value);

double RTCInboundRtpStreamStats_framesPerSecond(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_framesPerSecond(RTCInboundRtpStreamStats* self, double value);

long long RTCInboundRtpStreamStats_qpSum(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_qpSum(RTCInboundRtpStreamStats* self, long long value);

double RTCInboundRtpStreamStats_totalDecodeTime(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_totalDecodeTime(RTCInboundRtpStreamStats* self, double value);

double RTCInboundRtpStreamStats_totalInterFrameDelay(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_totalInterFrameDelay(RTCInboundRtpStreamStats* self, double value);

double RTCInboundRtpStreamStats_totalSquaredInterFrameDelay(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_totalSquaredInterFrameDelay(RTCInboundRtpStreamStats* self, double value);

unsigned long RTCInboundRtpStreamStats_pauseCount(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_pauseCount(RTCInboundRtpStreamStats* self, unsigned long value);

double RTCInboundRtpStreamStats_totalPausesDuration(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_totalPausesDuration(RTCInboundRtpStreamStats* self, double value);

unsigned long RTCInboundRtpStreamStats_freezeCount(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_freezeCount(RTCInboundRtpStreamStats* self, unsigned long value);

double RTCInboundRtpStreamStats_totalFreezesDuration(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_totalFreezesDuration(RTCInboundRtpStreamStats* self, double value);

jb_Any RTCInboundRtpStreamStats_lastPacketReceivedTimestamp(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_lastPacketReceivedTimestamp(RTCInboundRtpStreamStats* self, jb_Any * value);

long long RTCInboundRtpStreamStats_headerBytesReceived(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_headerBytesReceived(RTCInboundRtpStreamStats* self, long long value);

long long RTCInboundRtpStreamStats_packetsDiscarded(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_packetsDiscarded(RTCInboundRtpStreamStats* self, long long value);

long long RTCInboundRtpStreamStats_fecBytesReceived(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_fecBytesReceived(RTCInboundRtpStreamStats* self, long long value);

long long RTCInboundRtpStreamStats_fecPacketsReceived(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_fecPacketsReceived(RTCInboundRtpStreamStats* self, long long value);

long long RTCInboundRtpStreamStats_fecPacketsDiscarded(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_fecPacketsDiscarded(RTCInboundRtpStreamStats* self, long long value);

long long RTCInboundRtpStreamStats_bytesReceived(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_bytesReceived(RTCInboundRtpStreamStats* self, long long value);

unsigned long RTCInboundRtpStreamStats_nackCount(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_nackCount(RTCInboundRtpStreamStats* self, unsigned long value);

unsigned long RTCInboundRtpStreamStats_firCount(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_firCount(RTCInboundRtpStreamStats* self, unsigned long value);

unsigned long RTCInboundRtpStreamStats_pliCount(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_pliCount(RTCInboundRtpStreamStats* self, unsigned long value);

double RTCInboundRtpStreamStats_totalProcessingDelay(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_totalProcessingDelay(RTCInboundRtpStreamStats* self, double value);

jb_Any RTCInboundRtpStreamStats_estimatedPlayoutTimestamp(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_estimatedPlayoutTimestamp(RTCInboundRtpStreamStats* self, jb_Any * value);

double RTCInboundRtpStreamStats_jitterBufferDelay(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_jitterBufferDelay(RTCInboundRtpStreamStats* self, double value);

double RTCInboundRtpStreamStats_jitterBufferTargetDelay(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_jitterBufferTargetDelay(RTCInboundRtpStreamStats* self, double value);

long long RTCInboundRtpStreamStats_jitterBufferEmittedCount(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_jitterBufferEmittedCount(RTCInboundRtpStreamStats* self, long long value);

double RTCInboundRtpStreamStats_jitterBufferMinimumDelay(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_jitterBufferMinimumDelay(RTCInboundRtpStreamStats* self, double value);

long long RTCInboundRtpStreamStats_totalSamplesReceived(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_totalSamplesReceived(RTCInboundRtpStreamStats* self, long long value);

long long RTCInboundRtpStreamStats_concealedSamples(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_concealedSamples(RTCInboundRtpStreamStats* self, long long value);

long long RTCInboundRtpStreamStats_silentConcealedSamples(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_silentConcealedSamples(RTCInboundRtpStreamStats* self, long long value);

long long RTCInboundRtpStreamStats_concealmentEvents(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_concealmentEvents(RTCInboundRtpStreamStats* self, long long value);

long long RTCInboundRtpStreamStats_insertedSamplesForDeceleration(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_insertedSamplesForDeceleration(RTCInboundRtpStreamStats* self, long long value);

long long RTCInboundRtpStreamStats_removedSamplesForAcceleration(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_removedSamplesForAcceleration(RTCInboundRtpStreamStats* self, long long value);

double RTCInboundRtpStreamStats_audioLevel(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_audioLevel(RTCInboundRtpStreamStats* self, double value);

double RTCInboundRtpStreamStats_totalAudioEnergy(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_totalAudioEnergy(RTCInboundRtpStreamStats* self, double value);

double RTCInboundRtpStreamStats_totalSamplesDuration(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_totalSamplesDuration(RTCInboundRtpStreamStats* self, double value);

unsigned long RTCInboundRtpStreamStats_framesReceived(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_framesReceived(RTCInboundRtpStreamStats* self, unsigned long value);

jb_String RTCInboundRtpStreamStats_decoderImplementation(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_decoderImplementation(RTCInboundRtpStreamStats* self, jb_String * value);

jb_String RTCInboundRtpStreamStats_playoutId(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_playoutId(RTCInboundRtpStreamStats* self, jb_String * value);

bool RTCInboundRtpStreamStats_powerEfficientDecoder(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_powerEfficientDecoder(RTCInboundRtpStreamStats* self, bool value);

unsigned long RTCInboundRtpStreamStats_framesAssembledFromMultiplePackets(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_framesAssembledFromMultiplePackets(RTCInboundRtpStreamStats* self, unsigned long value);

double RTCInboundRtpStreamStats_totalAssemblyTime(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_totalAssemblyTime(RTCInboundRtpStreamStats* self, double value);

long long RTCInboundRtpStreamStats_retransmittedPacketsReceived(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_retransmittedPacketsReceived(RTCInboundRtpStreamStats* self, long long value);

long long RTCInboundRtpStreamStats_retransmittedBytesReceived(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_retransmittedBytesReceived(RTCInboundRtpStreamStats* self, long long value);

unsigned long RTCInboundRtpStreamStats_rtxSsrc(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_rtxSsrc(RTCInboundRtpStreamStats* self, unsigned long value);

unsigned long RTCInboundRtpStreamStats_fecSsrc(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_fecSsrc(RTCInboundRtpStreamStats* self, unsigned long value);

double RTCInboundRtpStreamStats_totalCorruptionProbability(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_totalCorruptionProbability(RTCInboundRtpStreamStats* self, double value);

double RTCInboundRtpStreamStats_totalSquaredCorruptionProbability(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_totalSquaredCorruptionProbability(RTCInboundRtpStreamStats* self, double value);

long long RTCInboundRtpStreamStats_corruptionMeasurements(const RTCInboundRtpStreamStats *self);

void RTCInboundRtpStreamStats_set_corruptionMeasurements(RTCInboundRtpStreamStats* self, long long value);

RTCInboundRtpStreamStats RTCInboundRtpStreamStats_new();

#ifdef __cplusplus
}
#endif
