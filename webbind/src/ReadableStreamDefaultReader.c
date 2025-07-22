#include <webbind/ReadableStreamDefaultReader.h>
#include <webbind/ReadableStream.h>


DEFINE_EMLITE_TYPE(ReadableStreamReadResult, em_Val);


jb_Any ReadableStreamReadResult_value(const ReadableStreamReadResult *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "value"));
}


void ReadableStreamReadResult_set_value(ReadableStreamReadResult* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "value", value);
}


bool ReadableStreamReadResult_done(const ReadableStreamReadResult *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "done"));
}


void ReadableStreamReadResult_set_done(ReadableStreamReadResult* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "done", value);
}

DEFINE_EMLITE_TYPE(ReadableStreamDefaultReader, em_Val);


ReadableStreamDefaultReader ReadableStreamDefaultReader_new(const ReadableStream* stream) : em_Val(em_Val_global("ReadableStreamDefaultReader").new_(em_Val_from(stream))) {
        return ReadableStreamDefaultReader(em_Val_new(em_Val_global("ReadableStreamDefaultReader", em_Val_from(stream)));
      }


jb_Promise ReadableStreamDefaultReader_read(ReadableStreamDefaultReader* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "read"));
}


jb_Undefined ReadableStreamDefaultReader_releaseLock(ReadableStreamDefaultReader* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "releaseLock"));
}


jb_Promise ReadableStreamDefaultReader_closed(const ReadableStreamDefaultReader *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), "closed"));
}


jb_Promise ReadableStreamDefaultReader_cancel(ReadableStreamDefaultReader* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "cancel"));
}


jb_Promise ReadableStreamDefaultReader_cancel(ReadableStreamDefaultReader* self , const jb_Any* reason) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "cancel", em_Val_from(reason)));
}

