#include <webbind/TextDecoder.h>


DEFINE_EMLITE_TYPE(TextDecodeOptions, em_Val);


bool TextDecodeOptions_stream(const TextDecodeOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("stream")));
}


void TextDecodeOptions_set_stream(TextDecodeOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("stream"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(TextDecoder, em_Val);


TextDecoder TextDecoder_new0() {
        em_Val vv = em_Val_new(em_Val_global("TextDecoder") );
        return TextDecoder_from_val(&vv);
      }


TextDecoder TextDecoder_new1(jb_DOMString * label) {
        em_Val vv = em_Val_new(em_Val_global("TextDecoder") , em_Val_from(label));
        return TextDecoder_from_val(&vv);
      }


TextDecoder TextDecoder_new2(jb_DOMString * label, jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("TextDecoder") , em_Val_from(label), em_Val_from(options));
        return TextDecoder_from_val(&vv);
      }


jb_USVString TextDecoder_decode0(TextDecoder* self ) {
    return em_Val_as(jb_USVString, em_Val_call(em_Val_as_val(self->inner), "decode"));
}


jb_USVString TextDecoder_decode1(TextDecoder* self , jb_Any * input) {
    return em_Val_as(jb_USVString, em_Val_call(em_Val_as_val(self->inner), "decode", em_Val_from(input)));
}


jb_USVString TextDecoder_decode2(TextDecoder* self , jb_Any * input, TextDecodeOptions * options) {
    return em_Val_as(jb_USVString, em_Val_call(em_Val_as_val(self->inner), "decode", em_Val_from(input), em_Val_from(options)));
}


jb_DOMString TextDecoder_encoding(const TextDecoder *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("encoding")));
}


bool TextDecoder_fatal(const TextDecoder *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fatal")));
}


bool TextDecoder_ignoreBOM(const TextDecoder *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ignoreBOM")));
}

