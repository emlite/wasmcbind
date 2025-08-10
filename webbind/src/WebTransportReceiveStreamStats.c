#include <webbind/WebTransportReceiveStreamStats.h>

DEFINE_EMLITE_TYPE(WebTransportReceiveStreamStats, em_Val);


long long WebTransportReceiveStreamStats_bytesReceived(const WebTransportReceiveStreamStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bytesReceived")));
}


void WebTransportReceiveStreamStats_set_bytesReceived(WebTransportReceiveStreamStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bytesReceived"), em_Val_from(value));
}


long long WebTransportReceiveStreamStats_bytesRead(const WebTransportReceiveStreamStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bytesRead")));
}


void WebTransportReceiveStreamStats_set_bytesRead(WebTransportReceiveStreamStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bytesRead"), em_Val_from(value));
}


WebTransportReceiveStreamStats WebTransportReceiveStreamStats_new() {
    em_Val obj = em_Val_object();
    return WebTransportReceiveStreamStats_from_val(&obj);
}

