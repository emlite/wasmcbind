#include <webbind/ReadableStreamBYOBReader.h>
#include <webbind/ReadableStreamDefaultReader.h>
#include <webbind/ReadableStream.h>


DEFINE_EMLITE_TYPE(ReadableStreamBYOBReaderReadOptions, em_Val);


long long ReadableStreamBYOBReaderReadOptions_min(const ReadableStreamBYOBReaderReadOptions *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "min"));
}


void ReadableStreamBYOBReaderReadOptions_set_min(ReadableStreamBYOBReaderReadOptions* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "min", value);
}

DEFINE_EMLITE_TYPE(ReadableStreamBYOBReader, em_Val);


ReadableStreamBYOBReader ReadableStreamBYOBReader_new(const ReadableStream* stream) : em_Val(em_Val_global("ReadableStreamBYOBReader").new_(em_Val_from(stream))) {
        return ReadableStreamBYOBReader(em_Val_new(em_Val_global("ReadableStreamBYOBReader", em_Val_from(stream)));
      }


jb_Promise ReadableStreamBYOBReader_read(ReadableStreamBYOBReader* self , const jb_Any* view) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "read", em_Val_from(view)));
}


jb_Promise ReadableStreamBYOBReader_read(ReadableStreamBYOBReader* self , const jb_Any* view, const ReadableStreamBYOBReaderReadOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "read", em_Val_from(view), em_Val_from(options)));
}


jb_Undefined ReadableStreamBYOBReader_releaseLock(ReadableStreamBYOBReader* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "releaseLock"));
}


jb_Promise ReadableStreamBYOBReader_closed(const ReadableStreamBYOBReader *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), "closed"));
}


jb_Promise ReadableStreamBYOBReader_cancel(ReadableStreamBYOBReader* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "cancel"));
}


jb_Promise ReadableStreamBYOBReader_cancel(ReadableStreamBYOBReader* self , const jb_Any* reason) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "cancel", em_Val_from(reason)));
}

