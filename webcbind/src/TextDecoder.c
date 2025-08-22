#include <webcbind/TextDecoder.h>

#include <webcbind/TextDecoderOptions.h>
#include <webcbind/TextDecodeOptions.h>

DEFINE_EMLITE_TYPE(TextDecoder, em_Val);


TextDecoder TextDecoder_new0() {
        em_Val vv = em_Val_new(em_Val_global("TextDecoder") );
        return TextDecoder_from_val(&vv);
      }


TextDecoder TextDecoder_new1(jb_String * label) {
        em_Val vv = em_Val_new(em_Val_global("TextDecoder") , em_Val_from(label));
        return TextDecoder_from_val(&vv);
      }


TextDecoder TextDecoder_new2(jb_String * label, TextDecoderOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("TextDecoder") , em_Val_from(label), em_Val_from(options));
        return TextDecoder_from_val(&vv);
      }


jb_String TextDecoder_decode0(TextDecoder* self ) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "decode"));
}


jb_String TextDecoder_decode1(TextDecoder* self , jb_Any * input) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "decode", em_Val_from(input)));
}


jb_String TextDecoder_decode2(TextDecoder* self , jb_Any * input, TextDecodeOptions * options) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "decode", em_Val_from(input), em_Val_from(options)));
}


jb_String TextDecoder_encoding(const TextDecoder *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("encoding")));
}


bool TextDecoder_fatal(const TextDecoder *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fatal")));
}


bool TextDecoder_ignoreBOM(const TextDecoder *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ignoreBOM")));
}

