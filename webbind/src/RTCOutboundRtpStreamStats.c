#include <webbind/RTCOutboundRtpStreamStats.h>

DEFINE_EMLITE_TYPE(RTCOutboundRtpStreamStats, RTCSentRtpStreamStats);


jb_String RTCOutboundRtpStreamStats_mid(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("mid")));
}


void RTCOutboundRtpStreamStats_set_mid(RTCOutboundRtpStreamStats* self, jb_String * value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("mid"), em_Val_from(value));
}


jb_String RTCOutboundRtpStreamStats_mediaSourceId(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("mediaSourceId")));
}


void RTCOutboundRtpStreamStats_set_mediaSourceId(RTCOutboundRtpStreamStats* self, jb_String * value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("mediaSourceId"), em_Val_from(value));
}


jb_String RTCOutboundRtpStreamStats_remoteId(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("remoteId")));
}


void RTCOutboundRtpStreamStats_set_remoteId(RTCOutboundRtpStreamStats* self, jb_String * value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("remoteId"), em_Val_from(value));
}


jb_String RTCOutboundRtpStreamStats_rid(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("rid")));
}


void RTCOutboundRtpStreamStats_set_rid(RTCOutboundRtpStreamStats* self, jb_String * value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("rid"), em_Val_from(value));
}


unsigned long RTCOutboundRtpStreamStats_encodingIndex(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("encodingIndex")));
}


void RTCOutboundRtpStreamStats_set_encodingIndex(RTCOutboundRtpStreamStats* self, unsigned long value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("encodingIndex"), em_Val_from(value));
}


long long RTCOutboundRtpStreamStats_headerBytesSent(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("headerBytesSent")));
}


void RTCOutboundRtpStreamStats_set_headerBytesSent(RTCOutboundRtpStreamStats* self, long long value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("headerBytesSent"), em_Val_from(value));
}


long long RTCOutboundRtpStreamStats_retransmittedPacketsSent(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("retransmittedPacketsSent")));
}


void RTCOutboundRtpStreamStats_set_retransmittedPacketsSent(RTCOutboundRtpStreamStats* self, long long value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("retransmittedPacketsSent"), em_Val_from(value));
}


long long RTCOutboundRtpStreamStats_retransmittedBytesSent(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("retransmittedBytesSent")));
}


void RTCOutboundRtpStreamStats_set_retransmittedBytesSent(RTCOutboundRtpStreamStats* self, long long value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("retransmittedBytesSent"), em_Val_from(value));
}


unsigned long RTCOutboundRtpStreamStats_rtxSsrc(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("rtxSsrc")));
}


void RTCOutboundRtpStreamStats_set_rtxSsrc(RTCOutboundRtpStreamStats* self, unsigned long value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("rtxSsrc"), em_Val_from(value));
}


double RTCOutboundRtpStreamStats_targetBitrate(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(double, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("targetBitrate")));
}


void RTCOutboundRtpStreamStats_set_targetBitrate(RTCOutboundRtpStreamStats* self, double value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("targetBitrate"), em_Val_from(value));
}


long long RTCOutboundRtpStreamStats_totalEncodedBytesTarget(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("totalEncodedBytesTarget")));
}


void RTCOutboundRtpStreamStats_set_totalEncodedBytesTarget(RTCOutboundRtpStreamStats* self, long long value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("totalEncodedBytesTarget"), em_Val_from(value));
}


unsigned long RTCOutboundRtpStreamStats_frameWidth(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("frameWidth")));
}


void RTCOutboundRtpStreamStats_set_frameWidth(RTCOutboundRtpStreamStats* self, unsigned long value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("frameWidth"), em_Val_from(value));
}


unsigned long RTCOutboundRtpStreamStats_frameHeight(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("frameHeight")));
}


void RTCOutboundRtpStreamStats_set_frameHeight(RTCOutboundRtpStreamStats* self, unsigned long value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("frameHeight"), em_Val_from(value));
}


double RTCOutboundRtpStreamStats_framesPerSecond(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(double, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("framesPerSecond")));
}


void RTCOutboundRtpStreamStats_set_framesPerSecond(RTCOutboundRtpStreamStats* self, double value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("framesPerSecond"), em_Val_from(value));
}


unsigned long RTCOutboundRtpStreamStats_framesSent(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("framesSent")));
}


void RTCOutboundRtpStreamStats_set_framesSent(RTCOutboundRtpStreamStats* self, unsigned long value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("framesSent"), em_Val_from(value));
}


unsigned long RTCOutboundRtpStreamStats_hugeFramesSent(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("hugeFramesSent")));
}


void RTCOutboundRtpStreamStats_set_hugeFramesSent(RTCOutboundRtpStreamStats* self, unsigned long value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("hugeFramesSent"), em_Val_from(value));
}


unsigned long RTCOutboundRtpStreamStats_framesEncoded(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("framesEncoded")));
}


void RTCOutboundRtpStreamStats_set_framesEncoded(RTCOutboundRtpStreamStats* self, unsigned long value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("framesEncoded"), em_Val_from(value));
}


unsigned long RTCOutboundRtpStreamStats_keyFramesEncoded(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("keyFramesEncoded")));
}


void RTCOutboundRtpStreamStats_set_keyFramesEncoded(RTCOutboundRtpStreamStats* self, unsigned long value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("keyFramesEncoded"), em_Val_from(value));
}


long long RTCOutboundRtpStreamStats_qpSum(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("qpSum")));
}


void RTCOutboundRtpStreamStats_set_qpSum(RTCOutboundRtpStreamStats* self, long long value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("qpSum"), em_Val_from(value));
}


jb_Object RTCOutboundRtpStreamStats_psnrSum(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(jb_Object, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("psnrSum")));
}


void RTCOutboundRtpStreamStats_set_psnrSum(RTCOutboundRtpStreamStats* self, jb_Object * value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("psnrSum"), em_Val_from(value));
}


long long RTCOutboundRtpStreamStats_psnrMeasurements(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("psnrMeasurements")));
}


void RTCOutboundRtpStreamStats_set_psnrMeasurements(RTCOutboundRtpStreamStats* self, long long value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("psnrMeasurements"), em_Val_from(value));
}


double RTCOutboundRtpStreamStats_totalEncodeTime(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(double, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("totalEncodeTime")));
}


void RTCOutboundRtpStreamStats_set_totalEncodeTime(RTCOutboundRtpStreamStats* self, double value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("totalEncodeTime"), em_Val_from(value));
}


double RTCOutboundRtpStreamStats_totalPacketSendDelay(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(double, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("totalPacketSendDelay")));
}


void RTCOutboundRtpStreamStats_set_totalPacketSendDelay(RTCOutboundRtpStreamStats* self, double value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("totalPacketSendDelay"), em_Val_from(value));
}


RTCQualityLimitationReason RTCOutboundRtpStreamStats_qualityLimitationReason(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(RTCQualityLimitationReason, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("qualityLimitationReason")));
}


void RTCOutboundRtpStreamStats_set_qualityLimitationReason(RTCOutboundRtpStreamStats* self, RTCQualityLimitationReason * value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("qualityLimitationReason"), em_Val_from(value));
}


jb_Object RTCOutboundRtpStreamStats_qualityLimitationDurations(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(jb_Object, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("qualityLimitationDurations")));
}


void RTCOutboundRtpStreamStats_set_qualityLimitationDurations(RTCOutboundRtpStreamStats* self, jb_Object * value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("qualityLimitationDurations"), em_Val_from(value));
}


unsigned long RTCOutboundRtpStreamStats_qualityLimitationResolutionChanges(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("qualityLimitationResolutionChanges")));
}


void RTCOutboundRtpStreamStats_set_qualityLimitationResolutionChanges(RTCOutboundRtpStreamStats* self, unsigned long value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("qualityLimitationResolutionChanges"), em_Val_from(value));
}


unsigned long RTCOutboundRtpStreamStats_nackCount(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("nackCount")));
}


void RTCOutboundRtpStreamStats_set_nackCount(RTCOutboundRtpStreamStats* self, unsigned long value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("nackCount"), em_Val_from(value));
}


unsigned long RTCOutboundRtpStreamStats_firCount(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("firCount")));
}


void RTCOutboundRtpStreamStats_set_firCount(RTCOutboundRtpStreamStats* self, unsigned long value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("firCount"), em_Val_from(value));
}


unsigned long RTCOutboundRtpStreamStats_pliCount(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("pliCount")));
}


void RTCOutboundRtpStreamStats_set_pliCount(RTCOutboundRtpStreamStats* self, unsigned long value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("pliCount"), em_Val_from(value));
}


jb_String RTCOutboundRtpStreamStats_encoderImplementation(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("encoderImplementation")));
}


void RTCOutboundRtpStreamStats_set_encoderImplementation(RTCOutboundRtpStreamStats* self, jb_String * value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("encoderImplementation"), em_Val_from(value));
}


bool RTCOutboundRtpStreamStats_powerEfficientEncoder(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(bool, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("powerEfficientEncoder")));
}


void RTCOutboundRtpStreamStats_set_powerEfficientEncoder(RTCOutboundRtpStreamStats* self, bool value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("powerEfficientEncoder"), em_Val_from(value));
}


bool RTCOutboundRtpStreamStats_active(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(bool, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("active")));
}


void RTCOutboundRtpStreamStats_set_active(RTCOutboundRtpStreamStats* self, bool value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("active"), em_Val_from(value));
}


jb_String RTCOutboundRtpStreamStats_scalabilityMode(const RTCOutboundRtpStreamStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("scalabilityMode")));
}


void RTCOutboundRtpStreamStats_set_scalabilityMode(RTCOutboundRtpStreamStats* self, jb_String * value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("scalabilityMode"), em_Val_from(value));
}


RTCOutboundRtpStreamStats RTCOutboundRtpStreamStats_new() {
    em_Val obj = em_Val_object();
    return RTCOutboundRtpStreamStats_from_val(&obj);
}

