#include <webcbind/RTCReceivedRtpStreamStats.h>

DEFINE_EMLITE_TYPE(RTCReceivedRtpStreamStats, RTCRtpStreamStats);


long long RTCReceivedRtpStreamStats_packetsReceived(const RTCReceivedRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCRtpStreamStats_as_val(self->inner), em_Val_from("packetsReceived")));
}


void RTCReceivedRtpStreamStats_set_packetsReceived(RTCReceivedRtpStreamStats* self, long long value) {
    em_Val_set(RTCRtpStreamStats_as_val(self->inner), em_Val_from("packetsReceived"), em_Val_from(value));
}


long long RTCReceivedRtpStreamStats_packetsReceivedWithEct1(const RTCReceivedRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCRtpStreamStats_as_val(self->inner), em_Val_from("packetsReceivedWithEct1")));
}


void RTCReceivedRtpStreamStats_set_packetsReceivedWithEct1(RTCReceivedRtpStreamStats* self, long long value) {
    em_Val_set(RTCRtpStreamStats_as_val(self->inner), em_Val_from("packetsReceivedWithEct1"), em_Val_from(value));
}


long long RTCReceivedRtpStreamStats_packetsReceivedWithCe(const RTCReceivedRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCRtpStreamStats_as_val(self->inner), em_Val_from("packetsReceivedWithCe")));
}


void RTCReceivedRtpStreamStats_set_packetsReceivedWithCe(RTCReceivedRtpStreamStats* self, long long value) {
    em_Val_set(RTCRtpStreamStats_as_val(self->inner), em_Val_from("packetsReceivedWithCe"), em_Val_from(value));
}


long long RTCReceivedRtpStreamStats_packetsReportedAsLost(const RTCReceivedRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCRtpStreamStats_as_val(self->inner), em_Val_from("packetsReportedAsLost")));
}


void RTCReceivedRtpStreamStats_set_packetsReportedAsLost(RTCReceivedRtpStreamStats* self, long long value) {
    em_Val_set(RTCRtpStreamStats_as_val(self->inner), em_Val_from("packetsReportedAsLost"), em_Val_from(value));
}


long long RTCReceivedRtpStreamStats_packetsReportedAsLostButRecovered(const RTCReceivedRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCRtpStreamStats_as_val(self->inner), em_Val_from("packetsReportedAsLostButRecovered")));
}


void RTCReceivedRtpStreamStats_set_packetsReportedAsLostButRecovered(RTCReceivedRtpStreamStats* self, long long value) {
    em_Val_set(RTCRtpStreamStats_as_val(self->inner), em_Val_from("packetsReportedAsLostButRecovered"), em_Val_from(value));
}


long long RTCReceivedRtpStreamStats_packetsLost(const RTCReceivedRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCRtpStreamStats_as_val(self->inner), em_Val_from("packetsLost")));
}


void RTCReceivedRtpStreamStats_set_packetsLost(RTCReceivedRtpStreamStats* self, long long value) {
    em_Val_set(RTCRtpStreamStats_as_val(self->inner), em_Val_from("packetsLost"), em_Val_from(value));
}


double RTCReceivedRtpStreamStats_jitter(const RTCReceivedRtpStreamStats *self) {
    return em_Val_as(double, em_Val_get(RTCRtpStreamStats_as_val(self->inner), em_Val_from("jitter")));
}


void RTCReceivedRtpStreamStats_set_jitter(RTCReceivedRtpStreamStats* self, double value) {
    em_Val_set(RTCRtpStreamStats_as_val(self->inner), em_Val_from("jitter"), em_Val_from(value));
}


RTCReceivedRtpStreamStats RTCReceivedRtpStreamStats_new() {
    em_Val obj = em_Val_object();
    return RTCReceivedRtpStreamStats_from_val(&obj);
}

