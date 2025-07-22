#include <webbind/TextEncoder.h>


DEFINE_EMLITE_TYPE(TextEncoderEncodeIntoResult, em_Val);


long long TextEncoderEncodeIntoResult_read(const TextEncoderEncodeIntoResult *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "read"));
}


void TextEncoderEncodeIntoResult_set_read(TextEncoderEncodeIntoResult* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "read", value);
}


long long TextEncoderEncodeIntoResult_written(const TextEncoderEncodeIntoResult *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "written"));
}


void TextEncoderEncodeIntoResult_set_written(TextEncoderEncodeIntoResult* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "written", value);
}

DEFINE_EMLITE_TYPE(TextEncoder, em_Val);


TextEncoder TextEncoder_new() : em_Val(em_Val_global("TextEncoder").new_()) {
        return TextEncoder(em_Val_new(em_Val_global("TextEncoder", ));
      }


jb_Uint8Array TextEncoder_encode(TextEncoder* self ) {
    return em_Val_as(jb_Uint8Array, em_Val_call(em_Val_as_val(self->inner), "encode"));
}


jb_Uint8Array TextEncoder_encode(TextEncoder* self , const jb_USVString* input) {
    return em_Val_as(jb_Uint8Array, em_Val_call(em_Val_as_val(self->inner), "encode", em_Val_from(input)));
}


TextEncoderEncodeIntoResult TextEncoder_encodeInto(TextEncoder* self , const jb_USVString* source, const jb_Uint8Array* destination) {
    return em_Val_as(TextEncoderEncodeIntoResult, em_Val_call(em_Val_as_val(self->inner), "encodeInto", em_Val_from(source), em_Val_from(destination)));
}


jb_DOMString TextEncoder_encoding(const TextEncoder *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "encoding"));
}

