#include <webbind/ReadableStream.h>
#include <webbind/WritableStream.h>
#include <webbind/AbortSignal.h>


DEFINE_EMLITE_TYPE(ReadableStreamGetReaderOptions, em_Val);


ReadableStreamReaderMode ReadableStreamGetReaderOptions_mode(const ReadableStreamGetReaderOptions *self) {
    return em_Val_as(ReadableStreamReaderMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mode")));
}


void ReadableStreamGetReaderOptions_set_mode(ReadableStreamGetReaderOptions* self, ReadableStreamReaderMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mode"), em_Val_from(value));
}

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

DEFINE_EMLITE_TYPE(StreamPipeOptions, em_Val);


bool StreamPipeOptions_preventClose(const StreamPipeOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("preventClose")));
}


void StreamPipeOptions_set_preventClose(StreamPipeOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("preventClose"), em_Val_from(value));
}


bool StreamPipeOptions_preventAbort(const StreamPipeOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("preventAbort")));
}


void StreamPipeOptions_set_preventAbort(StreamPipeOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("preventAbort"), em_Val_from(value));
}


bool StreamPipeOptions_preventCancel(const StreamPipeOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("preventCancel")));
}


void StreamPipeOptions_set_preventCancel(StreamPipeOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("preventCancel"), em_Val_from(value));
}


AbortSignal StreamPipeOptions_signal(const StreamPipeOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void StreamPipeOptions_set_signal(StreamPipeOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(ReadableStream, em_Val);


ReadableStream ReadableStream_new0() {
        em_Val vv = em_Val_new(em_Val_global("ReadableStream") );
        return ReadableStream_from_val(&vv);
      }


ReadableStream ReadableStream_new1(jb_Object * underlyingSource) {
        em_Val vv = em_Val_new(em_Val_global("ReadableStream") , em_Val_from(underlyingSource));
        return ReadableStream_from_val(&vv);
      }


ReadableStream ReadableStream_new2(jb_Object * underlyingSource, jb_Any * strategy) {
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


jb_Sequence ReadableStream_tee(ReadableStream* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "tee"));
}

