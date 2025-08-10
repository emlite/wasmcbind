#include <webbind/ReadableStreamGetReaderOptions.h>

DEFINE_EMLITE_TYPE(ReadableStreamGetReaderOptions, em_Val);


ReadableStreamReaderMode ReadableStreamGetReaderOptions_mode(const ReadableStreamGetReaderOptions *self) {
    return em_Val_as(ReadableStreamReaderMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mode")));
}


void ReadableStreamGetReaderOptions_set_mode(ReadableStreamGetReaderOptions* self, ReadableStreamReaderMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mode"), em_Val_from(value));
}


ReadableStreamGetReaderOptions ReadableStreamGetReaderOptions_new() {
    em_Val obj = em_Val_object();
    return ReadableStreamGetReaderOptions_from_val(&obj);
}

