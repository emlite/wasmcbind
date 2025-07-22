#include <webbind/WebTransportSendStream.h>
#include <webbind/WebTransportSendGroup.h>
#include <webbind/WebTransportWriter.h>


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

DEFINE_EMLITE_TYPE(WebTransportSendStream, WritableStream);


WebTransportSendGroup WebTransportSendStream_sendGroup(const WebTransportSendStream *self) {
    return em_Val_as(WebTransportSendGroup, em_Val_get(WritableStream_as_val(self->inner), em_Val_from("sendGroup")));
}


void WebTransportSendStream_set_sendGroup(WebTransportSendStream* self, WebTransportSendGroup * value) {
    em_Val_set(WritableStream_as_val(self->inner), em_Val_from("sendGroup"), em_Val_from(value));
}


long long WebTransportSendStream_sendOrder(const WebTransportSendStream *self) {
    return em_Val_as(long long, em_Val_get(WritableStream_as_val(self->inner), em_Val_from("sendOrder")));
}


void WebTransportSendStream_set_sendOrder(WebTransportSendStream* self, long long value) {
    em_Val_set(WritableStream_as_val(self->inner), em_Val_from("sendOrder"), em_Val_from(value));
}


jb_Promise WebTransportSendStream_getStats(WebTransportSendStream* self ) {
    return em_Val_as(jb_Promise, em_Val_call(WritableStream_as_val(self->inner), "getStats"));
}


WebTransportWriter WebTransportSendStream_getWriter(WebTransportSendStream* self ) {
    return em_Val_as(WebTransportWriter, em_Val_call(WritableStream_as_val(self->inner), "getWriter"));
}

