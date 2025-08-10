#include <webbind/RTCRtpHeaderExtensionParameters.h>

DEFINE_EMLITE_TYPE(RTCRtpHeaderExtensionParameters, em_Val);


jb_String RTCRtpHeaderExtensionParameters_uri(const RTCRtpHeaderExtensionParameters *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("uri")));
}


void RTCRtpHeaderExtensionParameters_set_uri(RTCRtpHeaderExtensionParameters* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("uri"), em_Val_from(value));
}


unsigned short RTCRtpHeaderExtensionParameters_id(const RTCRtpHeaderExtensionParameters *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


void RTCRtpHeaderExtensionParameters_set_id(RTCRtpHeaderExtensionParameters* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


bool RTCRtpHeaderExtensionParameters_encrypted(const RTCRtpHeaderExtensionParameters *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("encrypted")));
}


void RTCRtpHeaderExtensionParameters_set_encrypted(RTCRtpHeaderExtensionParameters* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("encrypted"), em_Val_from(value));
}


RTCRtpHeaderExtensionParameters RTCRtpHeaderExtensionParameters_new() {
    em_Val obj = em_Val_object();
    return RTCRtpHeaderExtensionParameters_from_val(&obj);
}

