#include <webbind/RTCRtpSender.h>
#include <webbind/MediaStreamTrack.h>
#include <webbind/RTCDtlsTransport.h>
#include <webbind/MediaStream.h>
#include <webbind/RTCStatsReport.h>
#include <webbind/RTCDTMFSender.h>


DEFINE_EMLITE_TYPE(RTCRtpCapabilities, em_Val);


jb_Sequence RTCRtpCapabilities_codecs(const RTCRtpCapabilities *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "codecs"));
}


void RTCRtpCapabilities_set_codecs(RTCRtpCapabilities* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "codecs", value);
}


jb_Sequence RTCRtpCapabilities_headerExtensions(const RTCRtpCapabilities *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "headerExtensions"));
}


void RTCRtpCapabilities_set_headerExtensions(RTCRtpCapabilities* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "headerExtensions", value);
}

DEFINE_EMLITE_TYPE(RTCRtpSendParameters, em_Val);


jb_DOMString RTCRtpSendParameters_transactionId(const RTCRtpSendParameters *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "transactionId"));
}


void RTCRtpSendParameters_set_transactionId(RTCRtpSendParameters* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "transactionId", value);
}


jb_Sequence RTCRtpSendParameters_encodings(const RTCRtpSendParameters *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "encodings"));
}


void RTCRtpSendParameters_set_encodings(RTCRtpSendParameters* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "encodings", value);
}

DEFINE_EMLITE_TYPE(RTCSetParameterOptions, em_Val);

DEFINE_EMLITE_TYPE(RTCRtpSender, em_Val);


MediaStreamTrack RTCRtpSender_track(const RTCRtpSender *self) {
    return em_Val_as(MediaStreamTrack, em_Val_get(em_Val_as_val(self->inner), "track"));
}


RTCDtlsTransport RTCRtpSender_transport(const RTCRtpSender *self) {
    return em_Val_as(RTCDtlsTransport, em_Val_get(em_Val_as_val(self->inner), "transport"));
}


RTCRtpCapabilities RTCRtpSender_getCapabilities(RTCRtpSender* self , const jb_DOMString* kind) {
    return em_Val_as(RTCRtpCapabilities, em_Val_call(em_Val_global("rtcrtpsender"), "getCapabilities", em_Val_from(kind)));
}


jb_Promise RTCRtpSender_setParameters(RTCRtpSender* self , const RTCRtpSendParameters* parameters) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "setParameters", em_Val_from(parameters)));
}


jb_Promise RTCRtpSender_setParameters(RTCRtpSender* self , const RTCRtpSendParameters* parameters, const RTCSetParameterOptions* setParameterOptions) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "setParameters", em_Val_from(parameters), em_Val_from(setParameterOptions)));
}


RTCRtpSendParameters RTCRtpSender_getParameters(RTCRtpSender* self ) {
    return em_Val_as(RTCRtpSendParameters, em_Val_call(em_Val_as_val(self->inner), "getParameters"));
}


jb_Promise RTCRtpSender_replaceTrack(RTCRtpSender* self , const MediaStreamTrack* withTrack) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "replaceTrack", em_Val_from(withTrack)));
}


jb_Undefined RTCRtpSender_setStreams(RTCRtpSender* self , const MediaStream* streams) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setStreams", em_Val_from(streams)));
}


jb_Promise RTCRtpSender_getStats(RTCRtpSender* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getStats"));
}


jb_Any RTCRtpSender_transform(const RTCRtpSender *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "transform"));
}


void RTCRtpSender_set_transform(RTCRtpSender* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "transform", value);
}


jb_Promise RTCRtpSender_generateKeyFrame(RTCRtpSender* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "generateKeyFrame"));
}


jb_Promise RTCRtpSender_generateKeyFrame(RTCRtpSender* self , const jb_Sequence* rids) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "generateKeyFrame", em_Val_from(rids)));
}


RTCDTMFSender RTCRtpSender_dtmf(const RTCRtpSender *self) {
    return em_Val_as(RTCDTMFSender, em_Val_get(em_Val_as_val(self->inner), "dtmf"));
}

