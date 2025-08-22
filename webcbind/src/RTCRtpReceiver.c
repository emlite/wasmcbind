#include <webcbind/RTCRtpReceiver.h>

#include <webcbind/MediaStreamTrack.h>
#include <webcbind/RTCDtlsTransport.h>
#include <webcbind/RTCRtpCapabilities.h>
#include <webcbind/RTCRtpReceiveParameters.h>
#include <webcbind/RTCRtpContributingSource.h>
#include <webcbind/RTCRtpSynchronizationSource.h>
#include <webcbind/RTCStatsReport.h>

DEFINE_EMLITE_TYPE(RTCRtpReceiver, em_Val);


MediaStreamTrack RTCRtpReceiver_track(const RTCRtpReceiver *self) {
    return em_Val_as(MediaStreamTrack, em_Val_get(em_Val_as_val(self->inner), em_Val_from("track")));
}


RTCDtlsTransport RTCRtpReceiver_transport(const RTCRtpReceiver *self) {
    return em_Val_as(RTCDtlsTransport, em_Val_get(em_Val_as_val(self->inner), em_Val_from("transport")));
}


RTCRtpCapabilities RTCRtpReceiver_getCapabilities(RTCRtpReceiver* self , jb_String * kind) {
    return em_Val_as(RTCRtpCapabilities, em_Val_call(em_Val_global("rtcrtpreceiver"), "getCapabilities", em_Val_from(kind)));
}


RTCRtpReceiveParameters RTCRtpReceiver_getParameters(RTCRtpReceiver* self ) {
    return em_Val_as(RTCRtpReceiveParameters, em_Val_call(em_Val_as_val(self->inner), "getParameters"));
}


jb_Array RTCRtpReceiver_getContributingSources(RTCRtpReceiver* self ) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "getContributingSources"));
}


jb_Array RTCRtpReceiver_getSynchronizationSources(RTCRtpReceiver* self ) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "getSynchronizationSources"));
}


jb_Promise RTCRtpReceiver_getStats(RTCRtpReceiver* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getStats"));
}


jb_Any RTCRtpReceiver_jitterBufferTarget(const RTCRtpReceiver *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("jitterBufferTarget")));
}


void RTCRtpReceiver_set_jitterBufferTarget(RTCRtpReceiver* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("jitterBufferTarget"), em_Val_from(value));
}


jb_Any RTCRtpReceiver_transform(const RTCRtpReceiver *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("transform")));
}


void RTCRtpReceiver_set_transform(RTCRtpReceiver* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("transform"), em_Val_from(value));
}

