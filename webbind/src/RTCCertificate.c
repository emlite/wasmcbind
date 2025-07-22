#include <webbind/RTCCertificate.h>


DEFINE_EMLITE_TYPE(RTCDtlsFingerprint, em_Val);


jb_DOMString RTCDtlsFingerprint_algorithm(const RTCDtlsFingerprint *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "algorithm"));
}


void RTCDtlsFingerprint_set_algorithm(RTCDtlsFingerprint* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "algorithm", value);
}


jb_DOMString RTCDtlsFingerprint_value(const RTCDtlsFingerprint *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "value"));
}


void RTCDtlsFingerprint_set_value(RTCDtlsFingerprint* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "value", value);
}

DEFINE_EMLITE_TYPE(RTCCertificate, em_Val);


jb_Any RTCCertificate_expires(const RTCCertificate *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "expires"));
}


jb_Sequence RTCCertificate_getFingerprints(RTCCertificate* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "getFingerprints"));
}

