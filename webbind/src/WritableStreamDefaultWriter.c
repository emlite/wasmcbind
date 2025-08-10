#include <webbind/WritableStreamDefaultWriter.h>

#include <webbind/WritableStream.h>

DEFINE_EMLITE_TYPE(WritableStreamDefaultWriter, em_Val);


WritableStreamDefaultWriter WritableStreamDefaultWriter_new(WritableStream * stream) {
        em_Val vv = em_Val_new(em_Val_global("WritableStreamDefaultWriter") , em_Val_from(stream));
        return WritableStreamDefaultWriter_from_val(&vv);
      }


jb_Promise WritableStreamDefaultWriter_closed(const WritableStreamDefaultWriter *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), em_Val_from("closed")));
}


double WritableStreamDefaultWriter_desiredSize(const WritableStreamDefaultWriter *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("desiredSize")));
}


jb_Promise WritableStreamDefaultWriter_ready(const WritableStreamDefaultWriter *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ready")));
}


jb_Promise WritableStreamDefaultWriter_abort0(WritableStreamDefaultWriter* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "abort"));
}


jb_Promise WritableStreamDefaultWriter_abort1(WritableStreamDefaultWriter* self , jb_Any * reason) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "abort", em_Val_from(reason)));
}


jb_Promise WritableStreamDefaultWriter_close(WritableStreamDefaultWriter* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "close"));
}


jb_Undefined WritableStreamDefaultWriter_releaseLock(WritableStreamDefaultWriter* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "releaseLock"));
}


jb_Promise WritableStreamDefaultWriter_write0(WritableStreamDefaultWriter* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "write"));
}


jb_Promise WritableStreamDefaultWriter_write1(WritableStreamDefaultWriter* self , jb_Any * chunk) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "write", em_Val_from(chunk)));
}

