#include <webbind/RTCCertificate.h>

#include <webbind/RTCDtlsFingerprint.h>

DEFINE_EMLITE_TYPE(RTCCertificate, em_Val);


jb_Any RTCCertificate_expires(const RTCCertificate *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("expires")));
}


jb_Array RTCCertificate_getFingerprints(RTCCertificate* self ) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "getFingerprints"));
}

