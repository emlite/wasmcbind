#include <webbind/ReadableStreamReadResult.h>

DEFINE_EMLITE_TYPE(ReadableStreamReadResult, em_Val);


jb_Any ReadableStreamReadResult_value(const ReadableStreamReadResult *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("value")));
}


void ReadableStreamReadResult_set_value(ReadableStreamReadResult* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}


bool ReadableStreamReadResult_done(const ReadableStreamReadResult *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("done")));
}


void ReadableStreamReadResult_set_done(ReadableStreamReadResult* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("done"), em_Val_from(value));
}


ReadableStreamReadResult ReadableStreamReadResult_new() {
    em_Val obj = em_Val_object();
    return ReadableStreamReadResult_from_val(&obj);
}

