#include <webbind/ReadableStream.h>
#include <webbind/WritableStream.h>
#include <webbind/AbortSignal.h>


DEFINE_EMLITE_TYPE(ReadableStreamGetReaderOptions, em_Val);


ReadableStreamReaderMode ReadableStreamGetReaderOptions_mode(const ReadableStreamGetReaderOptions *self) {
    return em_Val_as(ReadableStreamReaderMode, em_Val_get(em_Val_as_val(self->inner), "mode"));
}


void ReadableStreamGetReaderOptions_set_mode(ReadableStreamGetReaderOptions* self, const ReadableStreamReaderMode* value) {
    em_Val_set(em_Val_as_val(self->inner), "mode", value);
}

DEFINE_EMLITE_TYPE(ReadableWritablePair, em_Val);


ReadableStream ReadableWritablePair_readable(const ReadableWritablePair *self) {
    return em_Val_as(ReadableStream, em_Val_get(em_Val_as_val(self->inner), "readable"));
}


void ReadableWritablePair_set_readable(ReadableWritablePair* self, const ReadableStream* value) {
    em_Val_set(em_Val_as_val(self->inner), "readable", value);
}


WritableStream ReadableWritablePair_writable(const ReadableWritablePair *self) {
    return em_Val_as(WritableStream, em_Val_get(em_Val_as_val(self->inner), "writable"));
}


void ReadableWritablePair_set_writable(ReadableWritablePair* self, const WritableStream* value) {
    em_Val_set(em_Val_as_val(self->inner), "writable", value);
}

DEFINE_EMLITE_TYPE(StreamPipeOptions, em_Val);


bool StreamPipeOptions_preventClose(const StreamPipeOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "preventClose"));
}


void StreamPipeOptions_set_preventClose(StreamPipeOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "preventClose", value);
}


bool StreamPipeOptions_preventAbort(const StreamPipeOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "preventAbort"));
}


void StreamPipeOptions_set_preventAbort(StreamPipeOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "preventAbort", value);
}


bool StreamPipeOptions_preventCancel(const StreamPipeOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "preventCancel"));
}


void StreamPipeOptions_set_preventCancel(StreamPipeOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "preventCancel", value);
}


AbortSignal StreamPipeOptions_signal(const StreamPipeOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), "signal"));
}


void StreamPipeOptions_set_signal(StreamPipeOptions* self, const AbortSignal* value) {
    em_Val_set(em_Val_as_val(self->inner), "signal", value);
}

DEFINE_EMLITE_TYPE(ReadableStream, em_Val);


ReadableStream ReadableStream_new() : em_Val(em_Val_global("ReadableStream").new_()) {
        return ReadableStream(em_Val_new(em_Val_global("ReadableStream", ));
      }


ReadableStream ReadableStream_new(const jb_Object* underlyingSource) : em_Val(em_Val_global("ReadableStream").new_(em_Val_from(underlyingSource))) {
        return ReadableStream(em_Val_new(em_Val_global("ReadableStream", em_Val_from(underlyingSource)));
      }


ReadableStream ReadableStream_new(const jb_Object* underlyingSource, const jb_Any* strategy) : em_Val(em_Val_global("ReadableStream").new_(em_Val_from(underlyingSource), em_Val_from(strategy))) {
        return ReadableStream(em_Val_new(em_Val_global("ReadableStream", em_Val_from(underlyingSource), em_Val_from(strategy)));
      }


ReadableStream ReadableStream_from(ReadableStream* self , const jb_Any* asyncIterable) {
    return em_Val_as(ReadableStream, em_Val_call(em_Val_global("readablestream"), "from", em_Val_from(asyncIterable)));
}


bool ReadableStream_locked(const ReadableStream *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "locked"));
}


jb_Promise ReadableStream_cancel(ReadableStream* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "cancel"));
}


jb_Promise ReadableStream_cancel(ReadableStream* self , const jb_Any* reason) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "cancel", em_Val_from(reason)));
}


jb_Any ReadableStream_getReader(ReadableStream* self ) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getReader"));
}


jb_Any ReadableStream_getReader(ReadableStream* self , const ReadableStreamGetReaderOptions* options) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getReader", em_Val_from(options)));
}


ReadableStream ReadableStream_pipeThrough(ReadableStream* self , const ReadableWritablePair* transform) {
    return em_Val_as(ReadableStream, em_Val_call(em_Val_as_val(self->inner), "pipeThrough", em_Val_from(transform)));
}


ReadableStream ReadableStream_pipeThrough(ReadableStream* self , const ReadableWritablePair* transform, const StreamPipeOptions* options) {
    return em_Val_as(ReadableStream, em_Val_call(em_Val_as_val(self->inner), "pipeThrough", em_Val_from(transform), em_Val_from(options)));
}


jb_Promise ReadableStream_pipeTo(ReadableStream* self , const WritableStream* destination) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "pipeTo", em_Val_from(destination)));
}


jb_Promise ReadableStream_pipeTo(ReadableStream* self , const WritableStream* destination, const StreamPipeOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "pipeTo", em_Val_from(destination), em_Val_from(options)));
}


jb_Sequence ReadableStream_tee(ReadableStream* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "tee"));
}

