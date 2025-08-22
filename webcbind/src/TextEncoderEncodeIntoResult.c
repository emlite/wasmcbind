#include <webcbind/TextEncoderEncodeIntoResult.h>

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


TextEncoderEncodeIntoResult TextEncoderEncodeIntoResult_new() {
    em_Val obj = em_Val_object();
    return TextEncoderEncodeIntoResult_from_val(&obj);
}

