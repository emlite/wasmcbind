#include <webbind/RTCRtpCodec.h>

DEFINE_EMLITE_TYPE(RTCRtpCodec, em_Val);


jb_String RTCRtpCodec_mimeType(const RTCRtpCodec *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mimeType")));
}


void RTCRtpCodec_set_mimeType(RTCRtpCodec* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mimeType"), em_Val_from(value));
}


unsigned long RTCRtpCodec_clockRate(const RTCRtpCodec *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("clockRate")));
}


void RTCRtpCodec_set_clockRate(RTCRtpCodec* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("clockRate"), em_Val_from(value));
}


unsigned short RTCRtpCodec_channels(const RTCRtpCodec *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("channels")));
}


void RTCRtpCodec_set_channels(RTCRtpCodec* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("channels"), em_Val_from(value));
}


jb_String RTCRtpCodec_sdpFmtpLine(const RTCRtpCodec *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sdpFmtpLine")));
}


void RTCRtpCodec_set_sdpFmtpLine(RTCRtpCodec* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sdpFmtpLine"), em_Val_from(value));
}


RTCRtpCodec RTCRtpCodec_new() {
    em_Val obj = em_Val_object();
    return RTCRtpCodec_from_val(&obj);
}

