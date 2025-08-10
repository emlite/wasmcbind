#include <webbind/ReadableStreamBYOBReaderReadOptions.h>

DEFINE_EMLITE_TYPE(ReadableStreamBYOBReaderReadOptions, em_Val);


long long ReadableStreamBYOBReaderReadOptions_min(const ReadableStreamBYOBReaderReadOptions *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("min")));
}


void ReadableStreamBYOBReaderReadOptions_set_min(ReadableStreamBYOBReaderReadOptions* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("min"), em_Val_from(value));
}


ReadableStreamBYOBReaderReadOptions ReadableStreamBYOBReaderReadOptions_new() {
    em_Val obj = em_Val_object();
    return ReadableStreamBYOBReaderReadOptions_from_val(&obj);
}

