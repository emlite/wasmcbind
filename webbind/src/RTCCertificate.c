#include <webbind/RTCCertificate.h>


DEFINE_EMLITE_TYPE(RTCDtlsFingerprint, em_Val);


jb_String RTCDtlsFingerprint_algorithm(const RTCDtlsFingerprint *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("algorithm")));
}


void RTCDtlsFingerprint_set_algorithm(RTCDtlsFingerprint* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("algorithm"), em_Val_from(value));
}


jb_String RTCDtlsFingerprint_value(const RTCDtlsFingerprint *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("value")));
}


void RTCDtlsFingerprint_set_value(RTCDtlsFingerprint* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(RTCCertificate, em_Val);


jb_Any RTCCertificate_expires(const RTCCertificate *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("expires")));
}


jb_Array RTCCertificate_getFingerprints(RTCCertificate* self ) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "getFingerprints"));
}

