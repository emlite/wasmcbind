#include <webcbind/RTCRtpCapabilities.h>

DEFINE_EMLITE_TYPE(RTCRtpCapabilities, em_Val);


jb_Array RTCRtpCapabilities_codecs(const RTCRtpCapabilities *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("codecs")));
}


void RTCRtpCapabilities_set_codecs(RTCRtpCapabilities* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("codecs"), em_Val_from(value));
}


jb_Array RTCRtpCapabilities_headerExtensions(const RTCRtpCapabilities *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("headerExtensions")));
}


void RTCRtpCapabilities_set_headerExtensions(RTCRtpCapabilities* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("headerExtensions"), em_Val_from(value));
}


RTCRtpCapabilities RTCRtpCapabilities_new() {
    em_Val obj = em_Val_object();
    return RTCRtpCapabilities_from_val(&obj);
}

