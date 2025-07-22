#include <webbind/WritableStream.h>
#include <webbind/WritableStreamDefaultWriter.h>


DEFINE_EMLITE_TYPE(WritableStream, em_Val);


WritableStream WritableStream_new() : em_Val(em_Val_global("WritableStream").new_()) {
        return WritableStream(em_Val_new(em_Val_global("WritableStream", ));
      }


WritableStream WritableStream_new(const jb_Object* underlyingSink) : em_Val(em_Val_global("WritableStream").new_(em_Val_from(underlyingSink))) {
        return WritableStream(em_Val_new(em_Val_global("WritableStream", em_Val_from(underlyingSink)));
      }


WritableStream WritableStream_new(const jb_Object* underlyingSink, const jb_Any* strategy) : em_Val(em_Val_global("WritableStream").new_(em_Val_from(underlyingSink), em_Val_from(strategy))) {
        return WritableStream(em_Val_new(em_Val_global("WritableStream", em_Val_from(underlyingSink), em_Val_from(strategy)));
      }


bool WritableStream_locked(const WritableStream *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "locked"));
}


jb_Promise WritableStream_abort(WritableStream* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "abort"));
}


jb_Promise WritableStream_abort(WritableStream* self , const jb_Any* reason) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "abort", em_Val_from(reason)));
}


jb_Promise WritableStream_close(WritableStream* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "close"));
}


WritableStreamDefaultWriter WritableStream_getWriter(WritableStream* self ) {
    return em_Val_as(WritableStreamDefaultWriter, em_Val_call(em_Val_as_val(self->inner), "getWriter"));
}

