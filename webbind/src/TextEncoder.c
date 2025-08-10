#include <webbind/TextEncoder.h>

#include <webbind/TextEncoderEncodeIntoResult.h>

DEFINE_EMLITE_TYPE(TextEncoder, em_Val);


TextEncoder TextEncoder_new() {
        em_Val vv = em_Val_new(em_Val_global("TextEncoder") );
        return TextEncoder_from_val(&vv);
      }


jb_Uint8Array TextEncoder_encode0(TextEncoder* self ) {
    return em_Val_as(jb_Uint8Array, em_Val_call(em_Val_as_val(self->inner), "encode"));
}


jb_Uint8Array TextEncoder_encode1(TextEncoder* self , jb_String * input) {
    return em_Val_as(jb_Uint8Array, em_Val_call(em_Val_as_val(self->inner), "encode", em_Val_from(input)));
}


TextEncoderEncodeIntoResult TextEncoder_encodeInto(TextEncoder* self , jb_String * source, jb_Uint8Array * destination) {
    return em_Val_as(TextEncoderEncodeIntoResult, em_Val_call(em_Val_as_val(self->inner), "encodeInto", em_Val_from(source), em_Val_from(destination)));
}


jb_String TextEncoder_encoding(const TextEncoder *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("encoding")));
}

