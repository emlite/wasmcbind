#include <webbind/WebTransportSendStream.h>
#include <webbind/WebTransportSendGroup.h>
#include <webbind/WebTransportWriter.h>


DEFINE_EMLITE_TYPE(WebTransportSendStreamStats, em_Val);


long long WebTransportSendStreamStats_bytesWritten(const WebTransportSendStreamStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "bytesWritten"));
}


void WebTransportSendStreamStats_set_bytesWritten(WebTransportSendStreamStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "bytesWritten", value);
}


long long WebTransportSendStreamStats_bytesSent(const WebTransportSendStreamStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "bytesSent"));
}


void WebTransportSendStreamStats_set_bytesSent(WebTransportSendStreamStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "bytesSent", value);
}


long long WebTransportSendStreamStats_bytesAcknowledged(const WebTransportSendStreamStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "bytesAcknowledged"));
}


void WebTransportSendStreamStats_set_bytesAcknowledged(WebTransportSendStreamStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "bytesAcknowledged", value);
}

DEFINE_EMLITE_TYPE(WebTransportSendStream, WritableStream);


WebTransportSendGroup WebTransportSendStream_sendGroup(const WebTransportSendStream *self) {
    return em_Val_as(WebTransportSendGroup, em_Val_get(WritableStream_as_val(self->inner), "sendGroup"));
}


void WebTransportSendStream_set_sendGroup(WebTransportSendStream* self, const WebTransportSendGroup* value) {
    em_Val_set(WritableStream_as_val(self->inner), "sendGroup", value);
}


long long WebTransportSendStream_sendOrder(const WebTransportSendStream *self) {
    return em_Val_as(long long, em_Val_get(WritableStream_as_val(self->inner), "sendOrder"));
}


void WebTransportSendStream_set_sendOrder(WebTransportSendStream* self, long long value) {
    em_Val_set(WritableStream_as_val(self->inner), "sendOrder", value);
}


jb_Promise WebTransportSendStream_getStats(WebTransportSendStream* self ) {
    return em_Val_as(jb_Promise, em_Val_call(WritableStream_as_val(self->inner), "getStats"));
}


WebTransportWriter WebTransportSendStream_getWriter(WebTransportSendStream* self ) {
    return em_Val_as(WebTransportWriter, em_Val_call(WritableStream_as_val(self->inner), "getWriter"));
}

