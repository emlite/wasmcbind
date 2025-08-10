#include <webbind/TextDecodeOptions.h>

DEFINE_EMLITE_TYPE(TextDecodeOptions, em_Val);


bool TextDecodeOptions_stream(const TextDecodeOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("stream")));
}


void TextDecodeOptions_set_stream(TextDecodeOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("stream"), em_Val_from(value));
}


TextDecodeOptions TextDecodeOptions_new() {
    em_Val obj = em_Val_object();
    return TextDecodeOptions_from_val(&obj);
}

