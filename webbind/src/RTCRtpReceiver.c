#include <webbind/RTCRtpReceiver.h>
#include <webbind/MediaStreamTrack.h>
#include <webbind/RTCDtlsTransport.h>
#include <webbind/RTCRtpSender.h>
#include <webbind/RTCStatsReport.h>


DEFINE_EMLITE_TYPE(RTCRtpReceiveParameters, em_Val);

DEFINE_EMLITE_TYPE(RTCRtpContributingSource, em_Val);


jb_Any RTCRtpContributingSource_timestamp(const RTCRtpContributingSource *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "timestamp"));
}


void RTCRtpContributingSource_set_timestamp(RTCRtpContributingSource* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "timestamp", value);
}


unsigned long RTCRtpContributingSource_source(const RTCRtpContributingSource *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "source"));
}


void RTCRtpContributingSource_set_source(RTCRtpContributingSource* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "source", value);
}


double RTCRtpContributingSource_audioLevel(const RTCRtpContributingSource *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "audioLevel"));
}


void RTCRtpContributingSource_set_audioLevel(RTCRtpContributingSource* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "audioLevel", value);
}


unsigned long RTCRtpContributingSource_rtpTimestamp(const RTCRtpContributingSource *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "rtpTimestamp"));
}


void RTCRtpContributingSource_set_rtpTimestamp(RTCRtpContributingSource* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "rtpTimestamp", value);
}

DEFINE_EMLITE_TYPE(RTCRtpSynchronizationSource, em_Val);

DEFINE_EMLITE_TYPE(RTCRtpReceiver, em_Val);


MediaStreamTrack RTCRtpReceiver_track(const RTCRtpReceiver *self) {
    return em_Val_as(MediaStreamTrack, em_Val_get(em_Val_as_val(self->inner), "track"));
}


RTCDtlsTransport RTCRtpReceiver_transport(const RTCRtpReceiver *self) {
    return em_Val_as(RTCDtlsTransport, em_Val_get(em_Val_as_val(self->inner), "transport"));
}


RTCRtpCapabilities RTCRtpReceiver_getCapabilities(RTCRtpReceiver* self , const jb_DOMString* kind) {
    return em_Val_as(RTCRtpCapabilities, em_Val_call(em_Val_global("rtcrtpreceiver"), "getCapabilities", em_Val_from(kind)));
}


RTCRtpReceiveParameters RTCRtpReceiver_getParameters(RTCRtpReceiver* self ) {
    return em_Val_as(RTCRtpReceiveParameters, em_Val_call(em_Val_as_val(self->inner), "getParameters"));
}


jb_Sequence RTCRtpReceiver_getContributingSources(RTCRtpReceiver* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "getContributingSources"));
}


jb_Sequence RTCRtpReceiver_getSynchronizationSources(RTCRtpReceiver* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "getSynchronizationSources"));
}


jb_Promise RTCRtpReceiver_getStats(RTCRtpReceiver* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getStats"));
}


jb_Any RTCRtpReceiver_jitterBufferTarget(const RTCRtpReceiver *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "jitterBufferTarget"));
}


void RTCRtpReceiver_set_jitterBufferTarget(RTCRtpReceiver* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "jitterBufferTarget", value);
}


jb_Any RTCRtpReceiver_transform(const RTCRtpReceiver *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "transform"));
}


void RTCRtpReceiver_set_transform(RTCRtpReceiver* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "transform", value);
}

