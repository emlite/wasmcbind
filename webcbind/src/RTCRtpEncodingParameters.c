#include <webcbind/RTCRtpEncodingParameters.h>

DEFINE_EMLITE_TYPE(RTCRtpEncodingParameters, RTCRtpCodingParameters);


bool RTCRtpEncodingParameters_active(const RTCRtpEncodingParameters *self) {
    return em_Val_as(bool, em_Val_get(RTCRtpCodingParameters_as_val(self->inner), em_Val_from("active")));
}


void RTCRtpEncodingParameters_set_active(RTCRtpEncodingParameters* self, bool value) {
    em_Val_set(RTCRtpCodingParameters_as_val(self->inner), em_Val_from("active"), em_Val_from(value));
}


RTCRtpCodec RTCRtpEncodingParameters_codec(const RTCRtpEncodingParameters *self) {
    return em_Val_as(RTCRtpCodec, em_Val_get(RTCRtpCodingParameters_as_val(self->inner), em_Val_from("codec")));
}


void RTCRtpEncodingParameters_set_codec(RTCRtpEncodingParameters* self, RTCRtpCodec * value) {
    em_Val_set(RTCRtpCodingParameters_as_val(self->inner), em_Val_from("codec"), em_Val_from(value));
}


unsigned long RTCRtpEncodingParameters_maxBitrate(const RTCRtpEncodingParameters *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCRtpCodingParameters_as_val(self->inner), em_Val_from("maxBitrate")));
}


void RTCRtpEncodingParameters_set_maxBitrate(RTCRtpEncodingParameters* self, unsigned long value) {
    em_Val_set(RTCRtpCodingParameters_as_val(self->inner), em_Val_from("maxBitrate"), em_Val_from(value));
}


double RTCRtpEncodingParameters_maxFramerate(const RTCRtpEncodingParameters *self) {
    return em_Val_as(double, em_Val_get(RTCRtpCodingParameters_as_val(self->inner), em_Val_from("maxFramerate")));
}


void RTCRtpEncodingParameters_set_maxFramerate(RTCRtpEncodingParameters* self, double value) {
    em_Val_set(RTCRtpCodingParameters_as_val(self->inner), em_Val_from("maxFramerate"), em_Val_from(value));
}


double RTCRtpEncodingParameters_scaleResolutionDownBy(const RTCRtpEncodingParameters *self) {
    return em_Val_as(double, em_Val_get(RTCRtpCodingParameters_as_val(self->inner), em_Val_from("scaleResolutionDownBy")));
}


void RTCRtpEncodingParameters_set_scaleResolutionDownBy(RTCRtpEncodingParameters* self, double value) {
    em_Val_set(RTCRtpCodingParameters_as_val(self->inner), em_Val_from("scaleResolutionDownBy"), em_Val_from(value));
}


RTCRtpEncodingParameters RTCRtpEncodingParameters_new() {
    em_Val obj = em_Val_object();
    return RTCRtpEncodingParameters_from_val(&obj);
}

