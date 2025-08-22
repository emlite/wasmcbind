#include <webcbind/ReadableWritablePair.h>

#include <webcbind/ReadableStream.h>
#include <webcbind/WritableStream.h>

DEFINE_EMLITE_TYPE(ReadableWritablePair, em_Val);


ReadableStream ReadableWritablePair_readable(const ReadableWritablePair *self) {
    return em_Val_as(ReadableStream, em_Val_get(em_Val_as_val(self->inner), em_Val_from("readable")));
}


void ReadableWritablePair_set_readable(ReadableWritablePair* self, ReadableStream * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("readable"), em_Val_from(value));
}


WritableStream ReadableWritablePair_writable(const ReadableWritablePair *self) {
    return em_Val_as(WritableStream, em_Val_get(em_Val_as_val(self->inner), em_Val_from("writable")));
}


void ReadableWritablePair_set_writable(ReadableWritablePair* self, WritableStream * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("writable"), em_Val_from(value));
}


ReadableWritablePair ReadableWritablePair_new() {
    em_Val obj = em_Val_object();
    return ReadableWritablePair_from_val(&obj);
}

