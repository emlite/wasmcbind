#include <webcbind/RTCRtpCodecParameters.h>

DEFINE_EMLITE_TYPE(RTCRtpCodecParameters, RTCRtpCodec);


unsigned char RTCRtpCodecParameters_payloadType(const RTCRtpCodecParameters *self) {
    return em_Val_as(unsigned char, em_Val_get(RTCRtpCodec_as_val(self->inner), em_Val_from("payloadType")));
}


void RTCRtpCodecParameters_set_payloadType(RTCRtpCodecParameters* self, unsigned char value) {
    em_Val_set(RTCRtpCodec_as_val(self->inner), em_Val_from("payloadType"), em_Val_from(value));
}


RTCRtpCodecParameters RTCRtpCodecParameters_new() {
    em_Val obj = em_Val_object();
    return RTCRtpCodecParameters_from_val(&obj);
}

