#include <webcbind/RTCTransportStats.h>

DEFINE_EMLITE_TYPE(RTCTransportStats, RTCStats);


long long RTCTransportStats_packetsSent(const RTCTransportStats *self) {
    return em_Val_as(long long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("packetsSent")));
}


void RTCTransportStats_set_packetsSent(RTCTransportStats* self, long long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("packetsSent"), em_Val_from(value));
}


long long RTCTransportStats_packetsReceived(const RTCTransportStats *self) {
    return em_Val_as(long long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("packetsReceived")));
}


void RTCTransportStats_set_packetsReceived(RTCTransportStats* self, long long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("packetsReceived"), em_Val_from(value));
}


long long RTCTransportStats_bytesSent(const RTCTransportStats *self) {
    return em_Val_as(long long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("bytesSent")));
}


void RTCTransportStats_set_bytesSent(RTCTransportStats* self, long long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("bytesSent"), em_Val_from(value));
}


long long RTCTransportStats_bytesReceived(const RTCTransportStats *self) {
    return em_Val_as(long long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("bytesReceived")));
}


void RTCTransportStats_set_bytesReceived(RTCTransportStats* self, long long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("bytesReceived"), em_Val_from(value));
}


RTCIceRole RTCTransportStats_iceRole(const RTCTransportStats *self) {
    return em_Val_as(RTCIceRole, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("iceRole")));
}


void RTCTransportStats_set_iceRole(RTCTransportStats* self, RTCIceRole * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("iceRole"), em_Val_from(value));
}


jb_String RTCTransportStats_iceLocalUsernameFragment(const RTCTransportStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("iceLocalUsernameFragment")));
}


void RTCTransportStats_set_iceLocalUsernameFragment(RTCTransportStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("iceLocalUsernameFragment"), em_Val_from(value));
}


RTCDtlsTransportState RTCTransportStats_dtlsState(const RTCTransportStats *self) {
    return em_Val_as(RTCDtlsTransportState, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("dtlsState")));
}


void RTCTransportStats_set_dtlsState(RTCTransportStats* self, RTCDtlsTransportState * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("dtlsState"), em_Val_from(value));
}


RTCIceTransportState RTCTransportStats_iceState(const RTCTransportStats *self) {
    return em_Val_as(RTCIceTransportState, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("iceState")));
}


void RTCTransportStats_set_iceState(RTCTransportStats* self, RTCIceTransportState * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("iceState"), em_Val_from(value));
}


jb_String RTCTransportStats_selectedCandidatePairId(const RTCTransportStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("selectedCandidatePairId")));
}


void RTCTransportStats_set_selectedCandidatePairId(RTCTransportStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("selectedCandidatePairId"), em_Val_from(value));
}


jb_String RTCTransportStats_localCertificateId(const RTCTransportStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("localCertificateId")));
}


void RTCTransportStats_set_localCertificateId(RTCTransportStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("localCertificateId"), em_Val_from(value));
}


jb_String RTCTransportStats_remoteCertificateId(const RTCTransportStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("remoteCertificateId")));
}


void RTCTransportStats_set_remoteCertificateId(RTCTransportStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("remoteCertificateId"), em_Val_from(value));
}


jb_String RTCTransportStats_tlsVersion(const RTCTransportStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("tlsVersion")));
}


void RTCTransportStats_set_tlsVersion(RTCTransportStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("tlsVersion"), em_Val_from(value));
}


jb_String RTCTransportStats_dtlsCipher(const RTCTransportStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("dtlsCipher")));
}


void RTCTransportStats_set_dtlsCipher(RTCTransportStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("dtlsCipher"), em_Val_from(value));
}


RTCDtlsRole RTCTransportStats_dtlsRole(const RTCTransportStats *self) {
    return em_Val_as(RTCDtlsRole, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("dtlsRole")));
}


void RTCTransportStats_set_dtlsRole(RTCTransportStats* self, RTCDtlsRole * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("dtlsRole"), em_Val_from(value));
}


jb_String RTCTransportStats_srtpCipher(const RTCTransportStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("srtpCipher")));
}


void RTCTransportStats_set_srtpCipher(RTCTransportStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("srtpCipher"), em_Val_from(value));
}


unsigned long RTCTransportStats_selectedCandidatePairChanges(const RTCTransportStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("selectedCandidatePairChanges")));
}


void RTCTransportStats_set_selectedCandidatePairChanges(RTCTransportStats* self, unsigned long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("selectedCandidatePairChanges"), em_Val_from(value));
}


unsigned long RTCTransportStats_ccfbMessagesSent(const RTCTransportStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("ccfbMessagesSent")));
}


void RTCTransportStats_set_ccfbMessagesSent(RTCTransportStats* self, unsigned long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("ccfbMessagesSent"), em_Val_from(value));
}


unsigned long RTCTransportStats_ccfbMessagesReceived(const RTCTransportStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("ccfbMessagesReceived")));
}


void RTCTransportStats_set_ccfbMessagesReceived(RTCTransportStats* self, unsigned long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("ccfbMessagesReceived"), em_Val_from(value));
}


RTCTransportStats RTCTransportStats_new() {
    em_Val obj = em_Val_object();
    return RTCTransportStats_from_val(&obj);
}

