#include <webbind/ReadableStream.h>

#include <webbind/QueuingStrategy.h>
#include <webbind/ReadableStreamGetReaderOptions.h>
#include <webbind/ReadableWritablePair.h>
#include <webbind/StreamPipeOptions.h>
#include <webbind/WritableStream.h>

DEFINE_EMLITE_TYPE(ReadableStream, em_Val);


ReadableStream ReadableStream_new0() {
        em_Val vv = em_Val_new(em_Val_global("ReadableStream") );
        return ReadableStream_from_val(&vv);
      }


ReadableStream ReadableStream_new1(jb_Object * underlyingSource) {
        em_Val vv = em_Val_new(em_Val_global("ReadableStream") , em_Val_from(underlyingSource));
        return ReadableStream_from_val(&vv);
      }


ReadableStream ReadableStream_new2(jb_Object * underlyingSource, QueuingStrategy * strategy) {
        em_Val vv = em_Val_new(em_Val_global("ReadableStream") , em_Val_from(underlyingSource), em_Val_from(strategy));
        return ReadableStream_from_val(&vv);
      }


ReadableStream ReadableStream_from(ReadableStream* self , jb_Any * asyncIterable) {
    return em_Val_as(ReadableStream, em_Val_call(em_Val_global("readablestream"), "from", em_Val_from(asyncIterable)));
}


bool ReadableStream_locked(const ReadableStream *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("locked")));
}


jb_Promise ReadableStream_cancel0(ReadableStream* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "cancel"));
}


jb_Promise ReadableStream_cancel1(ReadableStream* self , jb_Any * reason) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "cancel", em_Val_from(reason)));
}


jb_Any ReadableStream_getReader0(ReadableStream* self ) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getReader"));
}


jb_Any ReadableStream_getReader1(ReadableStream* self , ReadableStreamGetReaderOptions * options) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getReader", em_Val_from(options)));
}


ReadableStream ReadableStream_pipeThrough0(ReadableStream* self , ReadableWritablePair * transform) {
    return em_Val_as(ReadableStream, em_Val_call(em_Val_as_val(self->inner), "pipeThrough", em_Val_from(transform)));
}


ReadableStream ReadableStream_pipeThrough1(ReadableStream* self , ReadableWritablePair * transform, StreamPipeOptions * options) {
    return em_Val_as(ReadableStream, em_Val_call(em_Val_as_val(self->inner), "pipeThrough", em_Val_from(transform), em_Val_from(options)));
}


jb_Promise ReadableStream_pipeTo0(ReadableStream* self , WritableStream * destination) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "pipeTo", em_Val_from(destination)));
}


jb_Promise ReadableStream_pipeTo1(ReadableStream* self , WritableStream * destination, StreamPipeOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "pipeTo", em_Val_from(destination), em_Val_from(options)));
}


jb_Array ReadableStream_tee(ReadableStream* self ) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "tee"));
}

