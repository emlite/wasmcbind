#include <webbind/TextDecoderOptions.h>

DEFINE_EMLITE_TYPE(TextDecoderOptions, em_Val);


bool TextDecoderOptions_fatal(const TextDecoderOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fatal")));
}


void TextDecoderOptions_set_fatal(TextDecoderOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("fatal"), em_Val_from(value));
}


bool TextDecoderOptions_ignoreBOM(const TextDecoderOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ignoreBOM")));
}


void TextDecoderOptions_set_ignoreBOM(TextDecoderOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ignoreBOM"), em_Val_from(value));
}


TextDecoderOptions TextDecoderOptions_new() {
    em_Val obj = em_Val_object();
    return TextDecoderOptions_from_val(&obj);
}

