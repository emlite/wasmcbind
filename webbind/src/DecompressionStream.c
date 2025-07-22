#include <webbind/DecompressionStream.h>
#include <webbind/ReadableStream.h>
#include <webbind/WritableStream.h>


DEFINE_EMLITE_TYPE(DecompressionStream, em_Val);


DecompressionStream DecompressionStream_new(const CompressionFormat* format) : em_Val(em_Val_global("DecompressionStream").new_(em_Val_from(format))) {
        return DecompressionStream(em_Val_new(em_Val_global("DecompressionStream", em_Val_from(format)));
      }


ReadableStream DecompressionStream_readable(const DecompressionStream *self) {
    return em_Val_as(ReadableStream, em_Val_get(em_Val_as_val(self->inner), "readable"));
}


WritableStream DecompressionStream_writable(const DecompressionStream *self) {
    return em_Val_as(WritableStream, em_Val_get(em_Val_as_val(self->inner), "writable"));
}

