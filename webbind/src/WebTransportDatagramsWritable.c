#include <webbind/WebTransportDatagramsWritable.h>
#include <webbind/WebTransportSendGroup.h>


DEFINE_EMLITE_TYPE(WebTransportDatagramsWritable, WritableStream);


WebTransportSendGroup WebTransportDatagramsWritable_sendGroup(const WebTransportDatagramsWritable *self) {
    return em_Val_as(WebTransportSendGroup, em_Val_get(WritableStream_as_val(self->inner), "sendGroup"));
}


void WebTransportDatagramsWritable_set_sendGroup(WebTransportDatagramsWritable* self, const WebTransportSendGroup* value) {
    em_Val_set(WritableStream_as_val(self->inner), "sendGroup", value);
}


long long WebTransportDatagramsWritable_sendOrder(const WebTransportDatagramsWritable *self) {
    return em_Val_as(long long, em_Val_get(WritableStream_as_val(self->inner), "sendOrder"));
}


void WebTransportDatagramsWritable_set_sendOrder(WebTransportDatagramsWritable* self, long long value) {
    em_Val_set(WritableStream_as_val(self->inner), "sendOrder", value);
}

