#include <webcbind/WebTransportDatagramDuplexStream.h>

#include <webcbind/WebTransportDatagramsWritable.h>
#include <webcbind/WebTransportSendOptions.h>
#include <webcbind/ReadableStream.h>

DEFINE_EMLITE_TYPE(WebTransportDatagramDuplexStream, em_Val);


WebTransportDatagramsWritable WebTransportDatagramDuplexStream_createWritable0(WebTransportDatagramDuplexStream* self ) {
    return em_Val_as(WebTransportDatagramsWritable, em_Val_call(em_Val_as_val(self->inner), "createWritable"));
}


WebTransportDatagramsWritable WebTransportDatagramDuplexStream_createWritable1(WebTransportDatagramDuplexStream* self , WebTransportSendOptions * options) {
    return em_Val_as(WebTransportDatagramsWritable, em_Val_call(em_Val_as_val(self->inner), "createWritable", em_Val_from(options)));
}


ReadableStream WebTransportDatagramDuplexStream_readable(const WebTransportDatagramDuplexStream *self) {
    return em_Val_as(ReadableStream, em_Val_get(em_Val_as_val(self->inner), em_Val_from("readable")));
}


unsigned long WebTransportDatagramDuplexStream_maxDatagramSize(const WebTransportDatagramDuplexStream *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxDatagramSize")));
}


double WebTransportDatagramDuplexStream_incomingMaxAge(const WebTransportDatagramDuplexStream *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("incomingMaxAge")));
}


void WebTransportDatagramDuplexStream_set_incomingMaxAge(WebTransportDatagramDuplexStream* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("incomingMaxAge"), em_Val_from(value));
}


double WebTransportDatagramDuplexStream_outgoingMaxAge(const WebTransportDatagramDuplexStream *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("outgoingMaxAge")));
}


void WebTransportDatagramDuplexStream_set_outgoingMaxAge(WebTransportDatagramDuplexStream* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("outgoingMaxAge"), em_Val_from(value));
}


double WebTransportDatagramDuplexStream_incomingHighWaterMark(const WebTransportDatagramDuplexStream *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("incomingHighWaterMark")));
}


void WebTransportDatagramDuplexStream_set_incomingHighWaterMark(WebTransportDatagramDuplexStream* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("incomingHighWaterMark"), em_Val_from(value));
}


double WebTransportDatagramDuplexStream_outgoingHighWaterMark(const WebTransportDatagramDuplexStream *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("outgoingHighWaterMark")));
}


void WebTransportDatagramDuplexStream_set_outgoingHighWaterMark(WebTransportDatagramDuplexStream* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("outgoingHighWaterMark"), em_Val_from(value));
}

