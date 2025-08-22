#include <webcbind/RTCRtpHeaderExtensionCapability.h>

DEFINE_EMLITE_TYPE(RTCRtpHeaderExtensionCapability, em_Val);


jb_String RTCRtpHeaderExtensionCapability_uri(const RTCRtpHeaderExtensionCapability *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("uri")));
}


void RTCRtpHeaderExtensionCapability_set_uri(RTCRtpHeaderExtensionCapability* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("uri"), em_Val_from(value));
}


RTCRtpHeaderExtensionCapability RTCRtpHeaderExtensionCapability_new() {
    em_Val obj = em_Val_object();
    return RTCRtpHeaderExtensionCapability_from_val(&obj);
}

