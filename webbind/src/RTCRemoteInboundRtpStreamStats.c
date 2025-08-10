#include <webbind/RTCRemoteInboundRtpStreamStats.h>

DEFINE_EMLITE_TYPE(RTCRemoteInboundRtpStreamStats, RTCReceivedRtpStreamStats);


jb_String RTCRemoteInboundRtpStreamStats_localId(const RTCRemoteInboundRtpStreamStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("localId")));
}


void RTCRemoteInboundRtpStreamStats_set_localId(RTCRemoteInboundRtpStreamStats* self, jb_String * value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("localId"), em_Val_from(value));
}


double RTCRemoteInboundRtpStreamStats_roundTripTime(const RTCRemoteInboundRtpStreamStats *self) {
    return em_Val_as(double, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("roundTripTime")));
}


void RTCRemoteInboundRtpStreamStats_set_roundTripTime(RTCRemoteInboundRtpStreamStats* self, double value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("roundTripTime"), em_Val_from(value));
}


double RTCRemoteInboundRtpStreamStats_totalRoundTripTime(const RTCRemoteInboundRtpStreamStats *self) {
    return em_Val_as(double, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("totalRoundTripTime")));
}


void RTCRemoteInboundRtpStreamStats_set_totalRoundTripTime(RTCRemoteInboundRtpStreamStats* self, double value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("totalRoundTripTime"), em_Val_from(value));
}


double RTCRemoteInboundRtpStreamStats_fractionLost(const RTCRemoteInboundRtpStreamStats *self) {
    return em_Val_as(double, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("fractionLost")));
}


void RTCRemoteInboundRtpStreamStats_set_fractionLost(RTCRemoteInboundRtpStreamStats* self, double value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("fractionLost"), em_Val_from(value));
}


long long RTCRemoteInboundRtpStreamStats_roundTripTimeMeasurements(const RTCRemoteInboundRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("roundTripTimeMeasurements")));
}


void RTCRemoteInboundRtpStreamStats_set_roundTripTimeMeasurements(RTCRemoteInboundRtpStreamStats* self, long long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("roundTripTimeMeasurements"), em_Val_from(value));
}


long long RTCRemoteInboundRtpStreamStats_packetsWithBleachedEct1Marking(const RTCRemoteInboundRtpStreamStats *self) {
    return em_Val_as(long long, em_Val_get(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("packetsWithBleachedEct1Marking")));
}


void RTCRemoteInboundRtpStreamStats_set_packetsWithBleachedEct1Marking(RTCRemoteInboundRtpStreamStats* self, long long value) {
    em_Val_set(RTCReceivedRtpStreamStats_as_val(self->inner), em_Val_from("packetsWithBleachedEct1Marking"), em_Val_from(value));
}


RTCRemoteInboundRtpStreamStats RTCRemoteInboundRtpStreamStats_new() {
    em_Val obj = em_Val_object();
    return RTCRemoteInboundRtpStreamStats_from_val(&obj);
}

