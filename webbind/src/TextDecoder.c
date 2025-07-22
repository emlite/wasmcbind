#include <webbind/TextDecoder.h>


DEFINE_EMLITE_TYPE(TextDecodeOptions, em_Val);


bool TextDecodeOptions_stream(const TextDecodeOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "stream"));
}


void TextDecodeOptions_set_stream(TextDecodeOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "stream", value);
}

DEFINE_EMLITE_TYPE(TextDecoder, em_Val);


TextDecoder TextDecoder_new() : em_Val(em_Val_global("TextDecoder").new_()) {
        return TextDecoder(em_Val_new(em_Val_global("TextDecoder", ));
      }


TextDecoder TextDecoder_new(const jb_DOMString* label) : em_Val(em_Val_global("TextDecoder").new_(em_Val_from(label))) {
        return TextDecoder(em_Val_new(em_Val_global("TextDecoder", em_Val_from(label)));
      }


TextDecoder TextDecoder_new(const jb_DOMString* label, const jb_Any* options) : em_Val(em_Val_global("TextDecoder").new_(em_Val_from(label), em_Val_from(options))) {
        return TextDecoder(em_Val_new(em_Val_global("TextDecoder", em_Val_from(label), em_Val_from(options)));
      }


jb_USVString TextDecoder_decode(TextDecoder* self ) {
    return em_Val_as(jb_USVString, em_Val_call(em_Val_as_val(self->inner), "decode"));
}


jb_USVString TextDecoder_decode(TextDecoder* self , const jb_Any* input) {
    return em_Val_as(jb_USVString, em_Val_call(em_Val_as_val(self->inner), "decode", em_Val_from(input)));
}


jb_USVString TextDecoder_decode(TextDecoder* self , const jb_Any* input, const TextDecodeOptions* options) {
    return em_Val_as(jb_USVString, em_Val_call(em_Val_as_val(self->inner), "decode", em_Val_from(input), em_Val_from(options)));
}


jb_DOMString TextDecoder_encoding(const TextDecoder *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "encoding"));
}


bool TextDecoder_fatal(const TextDecoder *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "fatal"));
}


bool TextDecoder_ignoreBOM(const TextDecoder *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "ignoreBOM"));
}

