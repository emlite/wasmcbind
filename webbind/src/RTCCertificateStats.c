#include <webbind/RTCCertificateStats.h>

DEFINE_EMLITE_TYPE(RTCCertificateStats, RTCStats);


jb_String RTCCertificateStats_fingerprint(const RTCCertificateStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("fingerprint")));
}


void RTCCertificateStats_set_fingerprint(RTCCertificateStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("fingerprint"), em_Val_from(value));
}


jb_String RTCCertificateStats_fingerprintAlgorithm(const RTCCertificateStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("fingerprintAlgorithm")));
}


void RTCCertificateStats_set_fingerprintAlgorithm(RTCCertificateStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("fingerprintAlgorithm"), em_Val_from(value));
}


jb_String RTCCertificateStats_base64Certificate(const RTCCertificateStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("base64Certificate")));
}


void RTCCertificateStats_set_base64Certificate(RTCCertificateStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("base64Certificate"), em_Val_from(value));
}


jb_String RTCCertificateStats_issuerCertificateId(const RTCCertificateStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("issuerCertificateId")));
}


void RTCCertificateStats_set_issuerCertificateId(RTCCertificateStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("issuerCertificateId"), em_Val_from(value));
}


RTCCertificateStats RTCCertificateStats_new() {
    em_Val obj = em_Val_object();
    return RTCCertificateStats_from_val(&obj);
}

