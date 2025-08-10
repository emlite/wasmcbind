#include <webbind/WebTransportReceiveStream.h>

#include <webbind/WebTransportReceiveStreamStats.h>

DEFINE_EMLITE_TYPE(WebTransportReceiveStream, ReadableStream);


jb_Promise WebTransportReceiveStream_getStats(WebTransportReceiveStream* self ) {
    return em_Val_as(jb_Promise, em_Val_call(ReadableStream_as_val(self->inner), "getStats"));
}

