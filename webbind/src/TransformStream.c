#include <webbind/TransformStream.h>
#include <webbind/ReadableStream.h>
#include <webbind/WritableStream.h>


DEFINE_EMLITE_TYPE(TransformStream, em_Val);


TransformStream TransformStream_new() : em_Val(em_Val_global("TransformStream").new_()) {
        return TransformStream(em_Val_new(em_Val_global("TransformStream", ));
      }


TransformStream TransformStream_new(const jb_Object* transformer) : em_Val(em_Val_global("TransformStream").new_(em_Val_from(transformer))) {
        return TransformStream(em_Val_new(em_Val_global("TransformStream", em_Val_from(transformer)));
      }


TransformStream TransformStream_new(const jb_Object* transformer, const jb_Any* writableStrategy) : em_Val(em_Val_global("TransformStream").new_(em_Val_from(transformer), em_Val_from(writableStrategy))) {
        return TransformStream(em_Val_new(em_Val_global("TransformStream", em_Val_from(transformer), em_Val_from(writableStrategy)));
      }


TransformStream TransformStream_new(const jb_Object* transformer, const jb_Any* writableStrategy, const jb_Any* readableStrategy) : em_Val(em_Val_global("TransformStream").new_(em_Val_from(transformer), em_Val_from(writableStrategy), em_Val_from(readableStrategy))) {
        return TransformStream(em_Val_new(em_Val_global("TransformStream", em_Val_from(transformer), em_Val_from(writableStrategy), em_Val_from(readableStrategy)));
      }


ReadableStream TransformStream_readable(const TransformStream *self) {
    return em_Val_as(ReadableStream, em_Val_get(em_Val_as_val(self->inner), "readable"));
}


WritableStream TransformStream_writable(const TransformStream *self) {
    return em_Val_as(WritableStream, em_Val_get(em_Val_as_val(self->inner), "writable"));
}

