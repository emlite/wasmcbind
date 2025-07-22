#include <webbind/CompressionStream.h>
#include <webbind/ReadableStream.h>
#include <webbind/WritableStream.h>


DEFINE_EMLITE_TYPE(CompressionStream, em_Val);


CompressionStream CompressionStream_new(CompressionFormat * format) {
        em_Val vv = em_Val_new(em_Val_global("CompressionStream") , em_Val_from(format));
        return CompressionStream_from_val(&vv);
      }


ReadableStream CompressionStream_readable(const CompressionStream *self) {
    return em_Val_as(ReadableStream, em_Val_get(em_Val_as_val(self->inner), em_Val_from("readable")));
}


WritableStream CompressionStream_writable(const CompressionStream *self) {
    return em_Val_as(WritableStream, em_Val_get(em_Val_as_val(self->inner), em_Val_from("writable")));
}

