#include <webbind/WebTransportReceiveStream.h>


DEFINE_EMLITE_TYPE(WebTransportReceiveStreamStats, em_Val);


long long WebTransportReceiveStreamStats_bytesReceived(const WebTransportReceiveStreamStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "bytesReceived"));
}


void WebTransportReceiveStreamStats_set_bytesReceived(WebTransportReceiveStreamStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "bytesReceived", value);
}


long long WebTransportReceiveStreamStats_bytesRead(const WebTransportReceiveStreamStats *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "bytesRead"));
}


void WebTransportReceiveStreamStats_set_bytesRead(WebTransportReceiveStreamStats* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "bytesRead", value);
}

DEFINE_EMLITE_TYPE(WebTransportReceiveStream, ReadableStream);


jb_Promise WebTransportReceiveStream_getStats(WebTransportReceiveStream* self ) {
    return em_Val_as(jb_Promise, em_Val_call(ReadableStream_as_val(self->inner), "getStats"));
}

