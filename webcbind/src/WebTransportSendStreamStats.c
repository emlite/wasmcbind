#include <webcbind/WebTransportSendStreamStats.h>

DEFINE_EMLITE_TYPE(WebTransportSendStreamStats, em_Val);


long long WebTransportSendStreamStats_bytesWritten(const WebTransportSendStreamStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bytesWritten")));
}


void WebTransportSendStreamStats_set_bytesWritten(WebTransportSendStreamStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bytesWritten"), em_Val_from(value));
}


long long WebTransportSendStreamStats_bytesSent(const WebTransportSendStreamStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bytesSent")));
}


void WebTransportSendStreamStats_set_bytesSent(WebTransportSendStreamStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bytesSent"), em_Val_from(value));
}


long long WebTransportSendStreamStats_bytesAcknowledged(const WebTransportSendStreamStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bytesAcknowledged")));
}


void WebTransportSendStreamStats_set_bytesAcknowledged(WebTransportSendStreamStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bytesAcknowledged"), em_Val_from(value));
}


WebTransportSendStreamStats WebTransportSendStreamStats_new() {
    em_Val obj = em_Val_object();
    return WebTransportSendStreamStats_from_val(&obj);
}

