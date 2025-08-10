#include <webbind/RTCCertificateExpiration.h>

DEFINE_EMLITE_TYPE(RTCCertificateExpiration, em_Val);


long long RTCCertificateExpiration_expires(const RTCCertificateExpiration *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("expires")));
}


void RTCCertificateExpiration_set_expires(RTCCertificateExpiration* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("expires"), em_Val_from(value));
}


RTCCertificateExpiration RTCCertificateExpiration_new() {
    em_Val obj = em_Val_object();
    return RTCCertificateExpiration_from_val(&obj);
}

