#include <webbind/TextEncoder.h>


DEFINE_EMLITE_TYPE(TextEncoderEncodeIntoResult, em_Val);


long long TextEncoderEncodeIntoResult_read(const TextEncoderEncodeIntoResult *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("read")));
}


void TextEncoderEncodeIntoResult_set_read(TextEncoderEncodeIntoResult* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("read"), em_Val_from(value));
}


long long TextEncoderEncodeIntoResult_written(const TextEncoderEncodeIntoResult *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("written")));
}


void TextEncoderEncodeIntoResult_set_written(TextEncoderEncodeIntoResult* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("written"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(TextEncoder, em_Val);


TextEncoder TextEncoder_new() {
        em_Val vv = em_Val_new(em_Val_global("TextEncoder") );
        return TextEncoder_from_val(&vv);
      }


jb_Uint8Array TextEncoder_encode0(TextEncoder* self ) {
    return em_Val_as(jb_Uint8Array, em_Val_call(em_Val_as_val(self->inner), "encode"));
}


jb_Uint8Array TextEncoder_encode1(TextEncoder* self , jb_USVString * input) {
    return em_Val_as(jb_Uint8Array, em_Val_call(em_Val_as_val(self->inner), "encode", em_Val_from(input)));
}


TextEncoderEncodeIntoResult TextEncoder_encodeInto(TextEncoder* self , jb_USVString * source, jb_Uint8Array * destination) {
    return em_Val_as(TextEncoderEncodeIntoResult, em_Val_call(em_Val_as_val(self->inner), "encodeInto", em_Val_from(source), em_Val_from(destination)));
}


jb_DOMString TextEncoder_encoding(const TextEncoder *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("encoding")));
}

