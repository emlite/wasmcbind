#include <webcbind/WritableStream.h>

#include <webcbind/QueuingStrategy.h>
#include <webcbind/WritableStreamDefaultWriter.h>

DEFINE_EMLITE_TYPE(WritableStream, em_Val);


WritableStream WritableStream_new0() {
        em_Val vv = em_Val_new(em_Val_global("WritableStream") );
        return WritableStream_from_val(&vv);
      }


WritableStream WritableStream_new1(jb_Object * underlyingSink) {
        em_Val vv = em_Val_new(em_Val_global("WritableStream") , em_Val_from(underlyingSink));
        return WritableStream_from_val(&vv);
      }


WritableStream WritableStream_new2(jb_Object * underlyingSink, QueuingStrategy * strategy) {
        em_Val vv = em_Val_new(em_Val_global("WritableStream") , em_Val_from(underlyingSink), em_Val_from(strategy));
        return WritableStream_from_val(&vv);
      }


bool WritableStream_locked(const WritableStream *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("locked")));
}


jb_Promise WritableStream_abort0(WritableStream* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "abort"));
}


jb_Promise WritableStream_abort1(WritableStream* self , jb_Any * reason) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "abort", em_Val_from(reason)));
}


jb_Promise WritableStream_close(WritableStream* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "close"));
}


WritableStreamDefaultWriter WritableStream_getWriter(WritableStream* self ) {
    return em_Val_as(WritableStreamDefaultWriter, em_Val_call(em_Val_as_val(self->inner), "getWriter"));
}

