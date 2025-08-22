#include <webcbind/TextEncoderStream.h>

#include <webcbind/ReadableStream.h>
#include <webcbind/WritableStream.h>

DEFINE_EMLITE_TYPE(TextEncoderStream, em_Val);


TextEncoderStream TextEncoderStream_new() {
        em_Val vv = em_Val_new(em_Val_global("TextEncoderStream") );
        return TextEncoderStream_from_val(&vv);
      }


jb_String TextEncoderStream_encoding(const TextEncoderStream *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("encoding")));
}


ReadableStream TextEncoderStream_readable(const TextEncoderStream *self) {
    return em_Val_as(ReadableStream, em_Val_get(em_Val_as_val(self->inner), em_Val_from("readable")));
}


WritableStream TextEncoderStream_writable(const TextEncoderStream *self) {
    return em_Val_as(WritableStream, em_Val_get(em_Val_as_val(self->inner), em_Val_from("writable")));
}

