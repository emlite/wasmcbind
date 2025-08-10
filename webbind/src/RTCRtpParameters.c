#include <webbind/RTCRtpParameters.h>

DEFINE_EMLITE_TYPE(RTCRtpParameters, em_Val);


jb_Array RTCRtpParameters_headerExtensions(const RTCRtpParameters *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("headerExtensions")));
}


void RTCRtpParameters_set_headerExtensions(RTCRtpParameters* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("headerExtensions"), em_Val_from(value));
}


RTCRtcpParameters RTCRtpParameters_rtcp(const RTCRtpParameters *self) {
    return em_Val_as(RTCRtcpParameters, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rtcp")));
}


void RTCRtpParameters_set_rtcp(RTCRtpParameters* self, RTCRtcpParameters * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rtcp"), em_Val_from(value));
}


jb_Array RTCRtpParameters_codecs(const RTCRtpParameters *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("codecs")));
}


void RTCRtpParameters_set_codecs(RTCRtpParameters* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("codecs"), em_Val_from(value));
}


RTCRtpParameters RTCRtpParameters_new() {
    em_Val obj = em_Val_object();
    return RTCRtpParameters_from_val(&obj);
}

