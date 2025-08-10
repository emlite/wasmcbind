#include <webbind/RTCRtpSender.h>

#include <webbind/MediaStreamTrack.h>
#include <webbind/RTCDtlsTransport.h>
#include <webbind/RTCRtpCapabilities.h>
#include <webbind/RTCRtpSendParameters.h>
#include <webbind/RTCSetParameterOptions.h>
#include <webbind/MediaStream.h>
#include <webbind/RTCStatsReport.h>
#include <webbind/RTCDTMFSender.h>

DEFINE_EMLITE_TYPE(RTCRtpSender, em_Val);


MediaStreamTrack RTCRtpSender_track(const RTCRtpSender *self) {
    return em_Val_as(MediaStreamTrack, em_Val_get(em_Val_as_val(self->inner), em_Val_from("track")));
}


RTCDtlsTransport RTCRtpSender_transport(const RTCRtpSender *self) {
    return em_Val_as(RTCDtlsTransport, em_Val_get(em_Val_as_val(self->inner), em_Val_from("transport")));
}


RTCRtpCapabilities RTCRtpSender_getCapabilities(RTCRtpSender* self , jb_String * kind) {
    return em_Val_as(RTCRtpCapabilities, em_Val_call(em_Val_global("rtcrtpsender"), "getCapabilities", em_Val_from(kind)));
}


jb_Promise RTCRtpSender_setParameters0(RTCRtpSender* self , RTCRtpSendParameters * parameters) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "setParameters", em_Val_from(parameters)));
}


jb_Promise RTCRtpSender_setParameters1(RTCRtpSender* self , RTCRtpSendParameters * parameters, RTCSetParameterOptions * setParameterOptions) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "setParameters", em_Val_from(parameters), em_Val_from(setParameterOptions)));
}


RTCRtpSendParameters RTCRtpSender_getParameters(RTCRtpSender* self ) {
    return em_Val_as(RTCRtpSendParameters, em_Val_call(em_Val_as_val(self->inner), "getParameters"));
}


jb_Promise RTCRtpSender_replaceTrack(RTCRtpSender* self , MediaStreamTrack * withTrack) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "replaceTrack", em_Val_from(withTrack)));
}


jb_Undefined RTCRtpSender_setStreams(RTCRtpSender* self , MediaStream * streams) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setStreams", em_Val_from(streams)));
}


jb_Promise RTCRtpSender_getStats(RTCRtpSender* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getStats"));
}


jb_Any RTCRtpSender_transform(const RTCRtpSender *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("transform")));
}


void RTCRtpSender_set_transform(RTCRtpSender* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("transform"), em_Val_from(value));
}


jb_Promise RTCRtpSender_generateKeyFrame0(RTCRtpSender* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "generateKeyFrame"));
}


jb_Promise RTCRtpSender_generateKeyFrame1(RTCRtpSender* self , jb_Array * rids) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "generateKeyFrame", em_Val_from(rids)));
}


RTCDTMFSender RTCRtpSender_dtmf(const RTCRtpSender *self) {
    return em_Val_as(RTCDTMFSender, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dtmf")));
}

