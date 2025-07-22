#include <webbind/CompressionStream.h>
#include <webbind/ReadableStream.h>
#include <webbind/WritableStream.h>


DEFINE_EMLITE_TYPE(CompressionStream, em_Val);


CompressionStream CompressionStream_new(const CompressionFormat* format) : em_Val(em_Val_global("CompressionStream").new_(em_Val_from(format))) {
        return CompressionStream(em_Val_new(em_Val_global("CompressionStream", em_Val_from(format)));
      }


ReadableStream CompressionStream_readable(const CompressionStream *self) {
    return em_Val_as(ReadableStream, em_Val_get(em_Val_as_val(self->inner), "readable"));
}


WritableStream CompressionStream_writable(const CompressionStream *self) {
    return em_Val_as(WritableStream, em_Val_get(em_Val_as_val(self->inner), "writable"));
}

