#include <webcbind/RTCRemoteOutboundRtpStreamStats.h>

DEFINE_EMLITE_TYPE(RTCRemoteOutboundRtpStreamStats, RTCSentRtpStreamStats);


jb_String RTCRemoteOutboundRtpStreamStats_localId(const RTCRemoteOutboundRtpStreamStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("localId")));
}


void RTCRemoteOutboundRtpStreamStats_set_localId(RTCRemoteOutboundRtpStreamStats* self, jb_String * value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("localId"), em_Val_from(value));
}


jb_Any RTCRemoteOutboundRtpStreamStats_remoteTimestamp(const RTCRemoteOutboundRtpStreamStats *self) {
    return em_Val_as(jb_Any, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("remoteTimestamp")));
}


void RTCRemoteOutboundRtpStreamStats_set_remoteTimestamp(RTCRemoteOutboundRtpStreamStats* self, jb_Any * value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("remoteTimestamp"), em_Val_from(value));
}


long long RTCRemoteOutboundRtpStreamStats_reportsSent(const RTCRemoteOutboundRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("reportsSent")));
}


void RTCRemoteOutboundRtpStreamStats_set_reportsSent(RTCRemoteOutboundRtpStreamStats* self, long long value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("reportsSent"), em_Val_from(value));
}


double RTCRemoteOutboundRtpStreamStats_roundTripTime(const RTCRemoteOutboundRtpStreamStats *self) {
    return em_Val_as(double, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("roundTripTime")));
}


void RTCRemoteOutboundRtpStreamStats_set_roundTripTime(RTCRemoteOutboundRtpStreamStats* self, double value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("roundTripTime"), em_Val_from(value));
}


double RTCRemoteOutboundRtpStreamStats_totalRoundTripTime(const RTCRemoteOutboundRtpStreamStats *self) {
    return em_Val_as(double, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("totalRoundTripTime")));
}


void RTCRemoteOutboundRtpStreamStats_set_totalRoundTripTime(RTCRemoteOutboundRtpStreamStats* self, double value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("totalRoundTripTime"), em_Val_from(value));
}


long long RTCRemoteOutboundRtpStreamStats_roundTripTimeMeasurements(const RTCRemoteOutboundRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("roundTripTimeMeasurements")));
}


void RTCRemoteOutboundRtpStreamStats_set_roundTripTimeMeasurements(RTCRemoteOutboundRtpStreamStats* self, long long value) {
    em_Val_set(RTCSentRtpStreamStats_as_val(self->inner), em_Val_from("roundTripTimeMeasurements"), em_Val_from(value));
}


RTCRemoteOutboundRtpStreamStats RTCRemoteOutboundRtpStreamStats_new() {
    em_Val obj = em_Val_object();
    return RTCRemoteOutboundRtpStreamStats_from_val(&obj);
}

