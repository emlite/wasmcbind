#include <webcbind/TextDecoderStream.h>

#include <webcbind/TextDecoderOptions.h>
#include <webcbind/ReadableStream.h>
#include <webcbind/WritableStream.h>

DEFINE_EMLITE_TYPE(TextDecoderStream, em_Val);


TextDecoderStream TextDecoderStream_new0() {
        em_Val vv = em_Val_new(em_Val_global("TextDecoderStream") );
        return TextDecoderStream_from_val(&vv);
      }


TextDecoderStream TextDecoderStream_new1(jb_String * label) {
        em_Val vv = em_Val_new(em_Val_global("TextDecoderStream") , em_Val_from(label));
        return TextDecoderStream_from_val(&vv);
      }


TextDecoderStream TextDecoderStream_new2(jb_String * label, TextDecoderOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("TextDecoderStream") , em_Val_from(label), em_Val_from(options));
        return TextDecoderStream_from_val(&vv);
      }


jb_String TextDecoderStream_encoding(const TextDecoderStream *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("encoding")));
}


bool TextDecoderStream_fatal(const TextDecoderStream *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fatal")));
}


bool TextDecoderStream_ignoreBOM(const TextDecoderStream *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ignoreBOM")));
}


ReadableStream TextDecoderStream_readable(const TextDecoderStream *self) {
    return em_Val_as(ReadableStream, em_Val_get(em_Val_as_val(self->inner), em_Val_from("readable")));
}


WritableStream TextDecoderStream_writable(const TextDecoderStream *self) {
    return em_Val_as(WritableStream, em_Val_get(em_Val_as_val(self->inner), em_Val_from("writable")));
}

