#include <webbind/TextDecoderStream.h>
#include <webbind/ReadableStream.h>
#include <webbind/WritableStream.h>


DEFINE_EMLITE_TYPE(TextDecoderStream, em_Val);


TextDecoderStream TextDecoderStream_new() : em_Val(em_Val_global("TextDecoderStream").new_()) {
        return TextDecoderStream(em_Val_new(em_Val_global("TextDecoderStream", ));
      }


TextDecoderStream TextDecoderStream_new(const jb_DOMString* label) : em_Val(em_Val_global("TextDecoderStream").new_(em_Val_from(label))) {
        return TextDecoderStream(em_Val_new(em_Val_global("TextDecoderStream", em_Val_from(label)));
      }


TextDecoderStream TextDecoderStream_new(const jb_DOMString* label, const jb_Any* options) : em_Val(em_Val_global("TextDecoderStream").new_(em_Val_from(label), em_Val_from(options))) {
        return TextDecoderStream(em_Val_new(em_Val_global("TextDecoderStream", em_Val_from(label), em_Val_from(options)));
      }


jb_DOMString TextDecoderStream_encoding(const TextDecoderStream *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "encoding"));
}


bool TextDecoderStream_fatal(const TextDecoderStream *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "fatal"));
}


bool TextDecoderStream_ignoreBOM(const TextDecoderStream *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "ignoreBOM"));
}


ReadableStream TextDecoderStream_readable(const TextDecoderStream *self) {
    return em_Val_as(ReadableStream, em_Val_get(em_Val_as_val(self->inner), "readable"));
}


WritableStream TextDecoderStream_writable(const TextDecoderStream *self) {
    return em_Val_as(WritableStream, em_Val_get(em_Val_as_val(self->inner), "writable"));
}

