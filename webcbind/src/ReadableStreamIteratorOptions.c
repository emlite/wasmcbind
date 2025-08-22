#include <webcbind/ReadableStreamIteratorOptions.h>

DEFINE_EMLITE_TYPE(ReadableStreamIteratorOptions, em_Val);


bool ReadableStreamIteratorOptions_preventCancel(const ReadableStreamIteratorOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("preventCancel")));
}


void ReadableStreamIteratorOptions_set_preventCancel(ReadableStreamIteratorOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("preventCancel"), em_Val_from(value));
}


ReadableStreamIteratorOptions ReadableStreamIteratorOptions_new() {
    em_Val obj = em_Val_object();
    return ReadableStreamIteratorOptions_from_val(&obj);
}

