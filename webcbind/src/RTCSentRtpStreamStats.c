#include <webcbind/RTCSentRtpStreamStats.h>

DEFINE_EMLITE_TYPE(RTCSentRtpStreamStats, RTCRtpStreamStats);


long long RTCSentRtpStreamStats_packetsSent(const RTCSentRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCRtpStreamStats_as_val(self->inner), em_Val_from("packetsSent")));
}


void RTCSentRtpStreamStats_set_packetsSent(RTCSentRtpStreamStats* self, long long value) {
    em_Val_set(RTCRtpStreamStats_as_val(self->inner), em_Val_from("packetsSent"), em_Val_from(value));
}


long long RTCSentRtpStreamStats_bytesSent(const RTCSentRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCRtpStreamStats_as_val(self->inner), em_Val_from("bytesSent")));
}


void RTCSentRtpStreamStats_set_bytesSent(RTCSentRtpStreamStats* self, long long value) {
    em_Val_set(RTCRtpStreamStats_as_val(self->inner), em_Val_from("bytesSent"), em_Val_from(value));
}


RTCSentRtpStreamStats RTCSentRtpStreamStats_new() {
    em_Val obj = em_Val_object();
    return RTCSentRtpStreamStats_from_val(&obj);
}

