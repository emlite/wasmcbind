#include <webcbind/WebTransportBidirectionalStream.h>

#include <webcbind/WebTransportReceiveStream.h>
#include <webcbind/WebTransportSendStream.h>

DEFINE_EMLITE_TYPE(WebTransportBidirectionalStream, em_Val);


WebTransportReceiveStream WebTransportBidirectionalStream_readable(const WebTransportBidirectionalStream *self) {
    return em_Val_as(WebTransportReceiveStream, em_Val_get(em_Val_as_val(self->inner), em_Val_from("readable")));
}


WebTransportSendStream WebTransportBidirectionalStream_writable(const WebTransportBidirectionalStream *self) {
    return em_Val_as(WebTransportSendStream, em_Val_get(em_Val_as_val(self->inner), em_Val_from("writable")));
}

