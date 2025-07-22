#include <webbind/ReadableStreamBYOBReader.h>
#include <webbind/ReadableStreamDefaultReader.h>
#include <webbind/ReadableStream.h>


DEFINE_EMLITE_TYPE(ReadableStreamBYOBReaderReadOptions, em_Val);


long long ReadableStreamBYOBReaderReadOptions_min(const ReadableStreamBYOBReaderReadOptions *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("min")));
}


void ReadableStreamBYOBReaderReadOptions_set_min(ReadableStreamBYOBReaderReadOptions* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("min"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(ReadableStreamBYOBReader, em_Val);


ReadableStreamBYOBReader ReadableStreamBYOBReader_new(ReadableStream * stream) {
        em_Val vv = em_Val_new(em_Val_global("ReadableStreamBYOBReader") , em_Val_from(stream));
        return ReadableStreamBYOBReader_from_val(&vv);
      }


jb_Promise ReadableStreamBYOBReader_read0(ReadableStreamBYOBReader* self , jb_Any * view) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "read", em_Val_from(view)));
}


jb_Promise ReadableStreamBYOBReader_read1(ReadableStreamBYOBReader* self , jb_Any * view, ReadableStreamBYOBReaderReadOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "read", em_Val_from(view), em_Val_from(options)));
}


jb_Undefined ReadableStreamBYOBReader_releaseLock(ReadableStreamBYOBReader* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "releaseLock"));
}


jb_Promise ReadableStreamBYOBReader_closed(const ReadableStreamBYOBReader *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), em_Val_from("closed")));
}


jb_Promise ReadableStreamBYOBReader_cancel0(ReadableStreamBYOBReader* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "cancel"));
}


jb_Promise ReadableStreamBYOBReader_cancel1(ReadableStreamBYOBReader* self , jb_Any * reason) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "cancel", em_Val_from(reason)));
}

