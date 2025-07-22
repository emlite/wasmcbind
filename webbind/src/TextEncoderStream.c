#include <webbind/TextEncoderStream.h>
#include <webbind/ReadableStream.h>
#include <webbind/WritableStream.h>


DEFINE_EMLITE_TYPE(TextEncoderStream, em_Val);


TextEncoderStream TextEncoderStream_new() : em_Val(em_Val_global("TextEncoderStream").new_()) {
        return TextEncoderStream(em_Val_new(em_Val_global("TextEncoderStream", ));
      }


jb_DOMString TextEncoderStream_encoding(const TextEncoderStream *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "encoding"));
}


ReadableStream TextEncoderStream_readable(const TextEncoderStream *self) {
    return em_Val_as(ReadableStream, em_Val_get(em_Val_as_val(self->inner), "readable"));
}


WritableStream TextEncoderStream_writable(const TextEncoderStream *self) {
    return em_Val_as(WritableStream, em_Val_get(em_Val_as_val(self->inner), "writable"));
}

