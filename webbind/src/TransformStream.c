#include <webbind/TransformStream.h>

#include <webbind/QueuingStrategy.h>
#include <webbind/ReadableStream.h>
#include <webbind/WritableStream.h>

DEFINE_EMLITE_TYPE(TransformStream, em_Val);


TransformStream TransformStream_new0() {
        em_Val vv = em_Val_new(em_Val_global("TransformStream") );
        return TransformStream_from_val(&vv);
      }


TransformStream TransformStream_new1(jb_Object * transformer) {
        em_Val vv = em_Val_new(em_Val_global("TransformStream") , em_Val_from(transformer));
        return TransformStream_from_val(&vv);
      }


TransformStream TransformStream_new2(jb_Object * transformer, QueuingStrategy * writableStrategy) {
        em_Val vv = em_Val_new(em_Val_global("TransformStream") , em_Val_from(transformer), em_Val_from(writableStrategy));
        return TransformStream_from_val(&vv);
      }


TransformStream TransformStream_new3(jb_Object * transformer, QueuingStrategy * writableStrategy, QueuingStrategy * readableStrategy) {
        em_Val vv = em_Val_new(em_Val_global("TransformStream") , em_Val_from(transformer), em_Val_from(writableStrategy), em_Val_from(readableStrategy));
        return TransformStream_from_val(&vv);
      }


ReadableStream TransformStream_readable(const TransformStream *self) {
    return em_Val_as(ReadableStream, em_Val_get(em_Val_as_val(self->inner), em_Val_from("readable")));
}


WritableStream TransformStream_writable(const TransformStream *self) {
    return em_Val_as(WritableStream, em_Val_get(em_Val_as_val(self->inner), em_Val_from("writable")));
}

