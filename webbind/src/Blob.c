#include <webbind/Blob.h>
#include <webbind/ReadableStream.h>


DEFINE_EMLITE_TYPE(Blob, em_Val);


Blob Blob_new() : em_Val(em_Val_global("Blob").new_()) {
        return Blob(em_Val_new(em_Val_global("Blob", ));
      }


Blob Blob_new(const jb_Sequence* blobParts) : em_Val(em_Val_global("Blob").new_(em_Val_from(blobParts))) {
        return Blob(em_Val_new(em_Val_global("Blob", em_Val_from(blobParts)));
      }


Blob Blob_new(const jb_Sequence* blobParts, const jb_Any* options) : em_Val(em_Val_global("Blob").new_(em_Val_from(blobParts), em_Val_from(options))) {
        return Blob(em_Val_new(em_Val_global("Blob", em_Val_from(blobParts), em_Val_from(options)));
      }


long long Blob_size(const Blob *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "size"));
}


jb_DOMString Blob_type(const Blob *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "type"));
}


Blob Blob_slice(Blob* self ) {
    return em_Val_as(Blob, em_Val_call(em_Val_as_val(self->inner), "slice"));
}


Blob Blob_slice(Blob* self , long long start) {
    return em_Val_as(Blob, em_Val_call(em_Val_as_val(self->inner), "slice", em_Val_from(start)));
}


Blob Blob_slice(Blob* self , long long start, long long end) {
    return em_Val_as(Blob, em_Val_call(em_Val_as_val(self->inner), "slice", em_Val_from(start), em_Val_from(end)));
}


Blob Blob_slice(Blob* self , long long start, long long end, const jb_DOMString* contentType) {
    return em_Val_as(Blob, em_Val_call(em_Val_as_val(self->inner), "slice", em_Val_from(start), em_Val_from(end), em_Val_from(contentType)));
}


ReadableStream Blob_stream(Blob* self ) {
    return em_Val_as(ReadableStream, em_Val_call(em_Val_as_val(self->inner), "stream"));
}


jb_Promise Blob_text(Blob* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "text"));
}


jb_Promise Blob_arrayBuffer(Blob* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "arrayBuffer"));
}


jb_Promise Blob_bytes(Blob* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "bytes"));
}

