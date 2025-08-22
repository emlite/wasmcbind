#include <webcbind/DecompressionStream.h>

#include <webcbind/ReadableStream.h>
#include <webcbind/WritableStream.h>

DEFINE_EMLITE_TYPE(DecompressionStream, em_Val);


DecompressionStream DecompressionStream_new(CompressionFormat * format) {
        em_Val vv = em_Val_new(em_Val_global("DecompressionStream") , em_Val_from(format));
        return DecompressionStream_from_val(&vv);
      }


ReadableStream DecompressionStream_readable(const DecompressionStream *self) {
    return em_Val_as(ReadableStream, em_Val_get(em_Val_as_val(self->inner), em_Val_from("readable")));
}


WritableStream DecompressionStream_writable(const DecompressionStream *self) {
    return em_Val_as(WritableStream, em_Val_get(em_Val_as_val(self->inner), em_Val_from("writable")));
}

