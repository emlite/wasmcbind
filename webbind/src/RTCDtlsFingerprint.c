#include <webbind/RTCDtlsFingerprint.h>

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


RTCDtlsFingerprint RTCDtlsFingerprint_new() {
    em_Val obj = em_Val_object();
    return RTCDtlsFingerprint_from_val(&obj);
}

