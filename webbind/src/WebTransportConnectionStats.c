#include <webbind/WebTransportConnectionStats.h>

DEFINE_EMLITE_TYPE(WebTransportConnectionStats, em_Val);


long long WebTransportConnectionStats_bytesSent(const WebTransportConnectionStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bytesSent")));
}


void WebTransportConnectionStats_set_bytesSent(WebTransportConnectionStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bytesSent"), em_Val_from(value));
}


long long WebTransportConnectionStats_packetsSent(const WebTransportConnectionStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("packetsSent")));
}


void WebTransportConnectionStats_set_packetsSent(WebTransportConnectionStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("packetsSent"), em_Val_from(value));
}


long long WebTransportConnectionStats_bytesLost(const WebTransportConnectionStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bytesLost")));
}


void WebTransportConnectionStats_set_bytesLost(WebTransportConnectionStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bytesLost"), em_Val_from(value));
}


long long WebTransportConnectionStats_packetsLost(const WebTransportConnectionStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("packetsLost")));
}


void WebTransportConnectionStats_set_packetsLost(WebTransportConnectionStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("packetsLost"), em_Val_from(value));
}


long long WebTransportConnectionStats_bytesReceived(const WebTransportConnectionStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bytesReceived")));
}


void WebTransportConnectionStats_set_bytesReceived(WebTransportConnectionStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bytesReceived"), em_Val_from(value));
}


long long WebTransportConnectionStats_packetsReceived(const WebTransportConnectionStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("packetsReceived")));
}


void WebTransportConnectionStats_set_packetsReceived(WebTransportConnectionStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("packetsReceived"), em_Val_from(value));
}


jb_Any WebTransportConnectionStats_smoothedRtt(const WebTransportConnectionStats *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("smoothedRtt")));
}


void WebTransportConnectionStats_set_smoothedRtt(WebTransportConnectionStats* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("smoothedRtt"), em_Val_from(value));
}


jb_Any WebTransportConnectionStats_rttVariation(const WebTransportConnectionStats *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rttVariation")));
}


void WebTransportConnectionStats_set_rttVariation(WebTransportConnectionStats* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rttVariation"), em_Val_from(value));
}


jb_Any WebTransportConnectionStats_minRtt(const WebTransportConnectionStats *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("minRtt")));
}


void WebTransportConnectionStats_set_minRtt(WebTransportConnectionStats* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("minRtt"), em_Val_from(value));
}


WebTransportDatagramStats WebTransportConnectionStats_datagrams(const WebTransportConnectionStats *self) {
    return em_Val_as(WebTransportDatagramStats, em_Val_get(em_Val_as_val(self->inner), em_Val_from("datagrams")));
}


void WebTransportConnectionStats_set_datagrams(WebTransportConnectionStats* self, WebTransportDatagramStats * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("datagrams"), em_Val_from(value));
}


long long WebTransportConnectionStats_estimatedSendRate(const WebTransportConnectionStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("estimatedSendRate")));
}


void WebTransportConnectionStats_set_estimatedSendRate(WebTransportConnectionStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("estimatedSendRate"), em_Val_from(value));
}


bool WebTransportConnectionStats_atSendCapacity(const WebTransportConnectionStats *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("atSendCapacity")));
}


void WebTransportConnectionStats_set_atSendCapacity(WebTransportConnectionStats* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("atSendCapacity"), em_Val_from(value));
}


WebTransportConnectionStats WebTransportConnectionStats_new() {
    em_Val obj = em_Val_object();
    return WebTransportConnectionStats_from_val(&obj);
}

