#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCSentRtpStreamStats.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCOutboundRtpStreamStats, RTCSentRtpStreamStats);

jb_String RTCOutboundRtpStreamStats_mid(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_mid(RTCOutboundRtpStreamStats* self, jb_String * value);

jb_String RTCOutboundRtpStreamStats_mediaSourceId(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_mediaSourceId(RTCOutboundRtpStreamStats* self, jb_String * value);

jb_String RTCOutboundRtpStreamStats_remoteId(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_remoteId(RTCOutboundRtpStreamStats* self, jb_String * value);

jb_String RTCOutboundRtpStreamStats_rid(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_rid(RTCOutboundRtpStreamStats* self, jb_String * value);

unsigned long RTCOutboundRtpStreamStats_encodingIndex(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_encodingIndex(RTCOutboundRtpStreamStats* self, unsigned long value);

long long RTCOutboundRtpStreamStats_headerBytesSent(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_headerBytesSent(RTCOutboundRtpStreamStats* self, long long value);

long long RTCOutboundRtpStreamStats_retransmittedPacketsSent(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_retransmittedPacketsSent(RTCOutboundRtpStreamStats* self, long long value);

long long RTCOutboundRtpStreamStats_retransmittedBytesSent(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_retransmittedBytesSent(RTCOutboundRtpStreamStats* self, long long value);

unsigned long RTCOutboundRtpStreamStats_rtxSsrc(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_rtxSsrc(RTCOutboundRtpStreamStats* self, unsigned long value);

double RTCOutboundRtpStreamStats_targetBitrate(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_targetBitrate(RTCOutboundRtpStreamStats* self, double value);

long long RTCOutboundRtpStreamStats_totalEncodedBytesTarget(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_totalEncodedBytesTarget(RTCOutboundRtpStreamStats* self, long long value);

unsigned long RTCOutboundRtpStreamStats_frameWidth(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_frameWidth(RTCOutboundRtpStreamStats* self, unsigned long value);

unsigned long RTCOutboundRtpStreamStats_frameHeight(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_frameHeight(RTCOutboundRtpStreamStats* self, unsigned long value);

double RTCOutboundRtpStreamStats_framesPerSecond(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_framesPerSecond(RTCOutboundRtpStreamStats* self, double value);

unsigned long RTCOutboundRtpStreamStats_framesSent(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_framesSent(RTCOutboundRtpStreamStats* self, unsigned long value);

unsigned long RTCOutboundRtpStreamStats_hugeFramesSent(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_hugeFramesSent(RTCOutboundRtpStreamStats* self, unsigned long value);

unsigned long RTCOutboundRtpStreamStats_framesEncoded(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_framesEncoded(RTCOutboundRtpStreamStats* self, unsigned long value);

unsigned long RTCOutboundRtpStreamStats_keyFramesEncoded(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_keyFramesEncoded(RTCOutboundRtpStreamStats* self, unsigned long value);

long long RTCOutboundRtpStreamStats_qpSum(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_qpSum(RTCOutboundRtpStreamStats* self, long long value);

jb_Object RTCOutboundRtpStreamStats_psnrSum(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_psnrSum(RTCOutboundRtpStreamStats* self, jb_Object * value);

long long RTCOutboundRtpStreamStats_psnrMeasurements(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_psnrMeasurements(RTCOutboundRtpStreamStats* self, long long value);

double RTCOutboundRtpStreamStats_totalEncodeTime(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_totalEncodeTime(RTCOutboundRtpStreamStats* self, double value);

double RTCOutboundRtpStreamStats_totalPacketSendDelay(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_totalPacketSendDelay(RTCOutboundRtpStreamStats* self, double value);

RTCQualityLimitationReason RTCOutboundRtpStreamStats_qualityLimitationReason(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_qualityLimitationReason(RTCOutboundRtpStreamStats* self, RTCQualityLimitationReason * value);

jb_Object RTCOutboundRtpStreamStats_qualityLimitationDurations(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_qualityLimitationDurations(RTCOutboundRtpStreamStats* self, jb_Object * value);

unsigned long RTCOutboundRtpStreamStats_qualityLimitationResolutionChanges(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_qualityLimitationResolutionChanges(RTCOutboundRtpStreamStats* self, unsigned long value);

unsigned long RTCOutboundRtpStreamStats_nackCount(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_nackCount(RTCOutboundRtpStreamStats* self, unsigned long value);

unsigned long RTCOutboundRtpStreamStats_firCount(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_firCount(RTCOutboundRtpStreamStats* self, unsigned long value);

unsigned long RTCOutboundRtpStreamStats_pliCount(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_pliCount(RTCOutboundRtpStreamStats* self, unsigned long value);

jb_String RTCOutboundRtpStreamStats_encoderImplementation(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_encoderImplementation(RTCOutboundRtpStreamStats* self, jb_String * value);

bool RTCOutboundRtpStreamStats_powerEfficientEncoder(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_powerEfficientEncoder(RTCOutboundRtpStreamStats* self, bool value);

bool RTCOutboundRtpStreamStats_active(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_active(RTCOutboundRtpStreamStats* self, bool value);

jb_String RTCOutboundRtpStreamStats_scalabilityMode(const RTCOutboundRtpStreamStats *self);

void RTCOutboundRtpStreamStats_set_scalabilityMode(RTCOutboundRtpStreamStats* self, jb_String * value);

RTCOutboundRtpStreamStats RTCOutboundRtpStreamStats_new();

#ifdef __cplusplus
}
#endif
