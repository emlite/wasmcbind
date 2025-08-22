#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "RTCSentRtpStreamStats.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCOutboundRtpStreamStats */
DECLARE_EMLITE_TYPE(RTCOutboundRtpStreamStats, RTCSentRtpStreamStats);

/** @brief Getter of the mid property */
jb_String RTCOutboundRtpStreamStats_mid(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the mid property */
void RTCOutboundRtpStreamStats_set_mid(RTCOutboundRtpStreamStats* self, jb_String * value);

/** @brief Getter of the mediaSourceId property */
jb_String RTCOutboundRtpStreamStats_mediaSourceId(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the mediaSourceId property */
void RTCOutboundRtpStreamStats_set_mediaSourceId(RTCOutboundRtpStreamStats* self, jb_String * value);

/** @brief Getter of the remoteId property */
jb_String RTCOutboundRtpStreamStats_remoteId(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the remoteId property */
void RTCOutboundRtpStreamStats_set_remoteId(RTCOutboundRtpStreamStats* self, jb_String * value);

/** @brief Getter of the rid property */
jb_String RTCOutboundRtpStreamStats_rid(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the rid property */
void RTCOutboundRtpStreamStats_set_rid(RTCOutboundRtpStreamStats* self, jb_String * value);

/** @brief Getter of the encodingIndex property */
unsigned long RTCOutboundRtpStreamStats_encodingIndex(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the encodingIndex property */
void RTCOutboundRtpStreamStats_set_encodingIndex(RTCOutboundRtpStreamStats* self, unsigned long value);

/** @brief Getter of the headerBytesSent property */
long long RTCOutboundRtpStreamStats_headerBytesSent(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the headerBytesSent property */
void RTCOutboundRtpStreamStats_set_headerBytesSent(RTCOutboundRtpStreamStats* self, long long value);

/** @brief Getter of the retransmittedPacketsSent property */
long long RTCOutboundRtpStreamStats_retransmittedPacketsSent(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the retransmittedPacketsSent property */
void RTCOutboundRtpStreamStats_set_retransmittedPacketsSent(RTCOutboundRtpStreamStats* self, long long value);

/** @brief Getter of the retransmittedBytesSent property */
long long RTCOutboundRtpStreamStats_retransmittedBytesSent(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the retransmittedBytesSent property */
void RTCOutboundRtpStreamStats_set_retransmittedBytesSent(RTCOutboundRtpStreamStats* self, long long value);

/** @brief Getter of the rtxSsrc property */
unsigned long RTCOutboundRtpStreamStats_rtxSsrc(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the rtxSsrc property */
void RTCOutboundRtpStreamStats_set_rtxSsrc(RTCOutboundRtpStreamStats* self, unsigned long value);

/** @brief Getter of the targetBitrate property */
double RTCOutboundRtpStreamStats_targetBitrate(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the targetBitrate property */
void RTCOutboundRtpStreamStats_set_targetBitrate(RTCOutboundRtpStreamStats* self, double value);

/** @brief Getter of the totalEncodedBytesTarget property */
long long RTCOutboundRtpStreamStats_totalEncodedBytesTarget(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the totalEncodedBytesTarget property */
void RTCOutboundRtpStreamStats_set_totalEncodedBytesTarget(RTCOutboundRtpStreamStats* self, long long value);

/** @brief Getter of the frameWidth property */
unsigned long RTCOutboundRtpStreamStats_frameWidth(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the frameWidth property */
void RTCOutboundRtpStreamStats_set_frameWidth(RTCOutboundRtpStreamStats* self, unsigned long value);

/** @brief Getter of the frameHeight property */
unsigned long RTCOutboundRtpStreamStats_frameHeight(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the frameHeight property */
void RTCOutboundRtpStreamStats_set_frameHeight(RTCOutboundRtpStreamStats* self, unsigned long value);

/** @brief Getter of the framesPerSecond property */
double RTCOutboundRtpStreamStats_framesPerSecond(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the framesPerSecond property */
void RTCOutboundRtpStreamStats_set_framesPerSecond(RTCOutboundRtpStreamStats* self, double value);

/** @brief Getter of the framesSent property */
unsigned long RTCOutboundRtpStreamStats_framesSent(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the framesSent property */
void RTCOutboundRtpStreamStats_set_framesSent(RTCOutboundRtpStreamStats* self, unsigned long value);

/** @brief Getter of the hugeFramesSent property */
unsigned long RTCOutboundRtpStreamStats_hugeFramesSent(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the hugeFramesSent property */
void RTCOutboundRtpStreamStats_set_hugeFramesSent(RTCOutboundRtpStreamStats* self, unsigned long value);

/** @brief Getter of the framesEncoded property */
unsigned long RTCOutboundRtpStreamStats_framesEncoded(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the framesEncoded property */
void RTCOutboundRtpStreamStats_set_framesEncoded(RTCOutboundRtpStreamStats* self, unsigned long value);

/** @brief Getter of the keyFramesEncoded property */
unsigned long RTCOutboundRtpStreamStats_keyFramesEncoded(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the keyFramesEncoded property */
void RTCOutboundRtpStreamStats_set_keyFramesEncoded(RTCOutboundRtpStreamStats* self, unsigned long value);

/** @brief Getter of the qpSum property */
long long RTCOutboundRtpStreamStats_qpSum(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the qpSum property */
void RTCOutboundRtpStreamStats_set_qpSum(RTCOutboundRtpStreamStats* self, long long value);

/** @brief Getter of the psnrSum property */
jb_Object RTCOutboundRtpStreamStats_psnrSum(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the psnrSum property */
void RTCOutboundRtpStreamStats_set_psnrSum(RTCOutboundRtpStreamStats* self, jb_Object * value);

/** @brief Getter of the psnrMeasurements property */
long long RTCOutboundRtpStreamStats_psnrMeasurements(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the psnrMeasurements property */
void RTCOutboundRtpStreamStats_set_psnrMeasurements(RTCOutboundRtpStreamStats* self, long long value);

/** @brief Getter of the totalEncodeTime property */
double RTCOutboundRtpStreamStats_totalEncodeTime(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the totalEncodeTime property */
void RTCOutboundRtpStreamStats_set_totalEncodeTime(RTCOutboundRtpStreamStats* self, double value);

/** @brief Getter of the totalPacketSendDelay property */
double RTCOutboundRtpStreamStats_totalPacketSendDelay(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the totalPacketSendDelay property */
void RTCOutboundRtpStreamStats_set_totalPacketSendDelay(RTCOutboundRtpStreamStats* self, double value);

/** @brief Getter of the qualityLimitationReason property */
RTCQualityLimitationReason RTCOutboundRtpStreamStats_qualityLimitationReason(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the qualityLimitationReason property */
void RTCOutboundRtpStreamStats_set_qualityLimitationReason(RTCOutboundRtpStreamStats* self, RTCQualityLimitationReason * value);

/** @brief Getter of the qualityLimitationDurations property */
jb_Object RTCOutboundRtpStreamStats_qualityLimitationDurations(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the qualityLimitationDurations property */
void RTCOutboundRtpStreamStats_set_qualityLimitationDurations(RTCOutboundRtpStreamStats* self, jb_Object * value);

/** @brief Getter of the qualityLimitationResolutionChanges property */
unsigned long RTCOutboundRtpStreamStats_qualityLimitationResolutionChanges(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the qualityLimitationResolutionChanges property */
void RTCOutboundRtpStreamStats_set_qualityLimitationResolutionChanges(RTCOutboundRtpStreamStats* self, unsigned long value);

/** @brief Getter of the nackCount property */
unsigned long RTCOutboundRtpStreamStats_nackCount(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the nackCount property */
void RTCOutboundRtpStreamStats_set_nackCount(RTCOutboundRtpStreamStats* self, unsigned long value);

/** @brief Getter of the firCount property */
unsigned long RTCOutboundRtpStreamStats_firCount(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the firCount property */
void RTCOutboundRtpStreamStats_set_firCount(RTCOutboundRtpStreamStats* self, unsigned long value);

/** @brief Getter of the pliCount property */
unsigned long RTCOutboundRtpStreamStats_pliCount(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the pliCount property */
void RTCOutboundRtpStreamStats_set_pliCount(RTCOutboundRtpStreamStats* self, unsigned long value);

/** @brief Getter of the encoderImplementation property */
jb_String RTCOutboundRtpStreamStats_encoderImplementation(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the encoderImplementation property */
void RTCOutboundRtpStreamStats_set_encoderImplementation(RTCOutboundRtpStreamStats* self, jb_String * value);

/** @brief Getter of the powerEfficientEncoder property */
bool RTCOutboundRtpStreamStats_powerEfficientEncoder(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the powerEfficientEncoder property */
void RTCOutboundRtpStreamStats_set_powerEfficientEncoder(RTCOutboundRtpStreamStats* self, bool value);

/** @brief Getter of the active property */
bool RTCOutboundRtpStreamStats_active(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the active property */
void RTCOutboundRtpStreamStats_set_active(RTCOutboundRtpStreamStats* self, bool value);

/** @brief Getter of the scalabilityMode property */
jb_String RTCOutboundRtpStreamStats_scalabilityMode(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the scalabilityMode property */
void RTCOutboundRtpStreamStats_set_scalabilityMode(RTCOutboundRtpStreamStats* self, jb_String * value);

/** @brief Getter of the packetsSentWithEct1 property */
long long RTCOutboundRtpStreamStats_packetsSentWithEct1(const RTCOutboundRtpStreamStats *self);

/** @brief Setter of the packetsSentWithEct1 property */
void RTCOutboundRtpStreamStats_set_packetsSentWithEct1(RTCOutboundRtpStreamStats* self, long long value);

/** @brief Constructor of the RTCOutboundRtpStreamStats dictionary type */
RTCOutboundRtpStreamStats RTCOutboundRtpStreamStats_new();

#ifdef __cplusplus
}
#endif
