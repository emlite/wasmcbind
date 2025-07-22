#include <webbind/WritableStreamDefaultWriter.h>
#include <webbind/ReadableStream.h>
#include <webbind/WritableStream.h>


DEFINE_EMLITE_TYPE(WritableStreamDefaultWriter, em_Val);


WritableStreamDefaultWriter WritableStreamDefaultWriter_new(const WritableStream* stream) : em_Val(em_Val_global("WritableStreamDefaultWriter").new_(em_Val_from(stream))) {
        return WritableStreamDefaultWriter(em_Val_new(em_Val_global("WritableStreamDefaultWriter", em_Val_from(stream)));
      }


jb_Promise WritableStreamDefaultWriter_closed(const WritableStreamDefaultWriter *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), "closed"));
}


double WritableStreamDefaultWriter_desiredSize(const WritableStreamDefaultWriter *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "desiredSize"));
}


jb_Promise WritableStreamDefaultWriter_ready(const WritableStreamDefaultWriter *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), "ready"));
}


jb_Promise WritableStreamDefaultWriter_abort(WritableStreamDefaultWriter* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "abort"));
}


jb_Promise WritableStreamDefaultWriter_abort(WritableStreamDefaultWriter* self , const jb_Any* reason) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "abort", em_Val_from(reason)));
}


jb_Promise WritableStreamDefaultWriter_close(WritableStreamDefaultWriter* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "close"));
}


jb_Undefined WritableStreamDefaultWriter_releaseLock(WritableStreamDefaultWriter* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "releaseLock"));
}


jb_Promise WritableStreamDefaultWriter_write(WritableStreamDefaultWriter* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "write"));
}


jb_Promise WritableStreamDefaultWriter_write(WritableStreamDefaultWriter* self , const jb_Any* chunk) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "write", em_Val_from(chunk)));
}

