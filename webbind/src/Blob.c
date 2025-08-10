#include <webbind/Blob.h>

#include <webbind/BlobPropertyBag.h>
#include <webbind/ReadableStream.h>

DEFINE_EMLITE_TYPE(Blob, em_Val);


Blob Blob_new0() {
        em_Val vv = em_Val_new(em_Val_global("Blob") );
        return Blob_from_val(&vv);
      }


Blob Blob_new1(jb_Array * blobParts) {
        em_Val vv = em_Val_new(em_Val_global("Blob") , em_Val_from(blobParts));
        return Blob_from_val(&vv);
      }


Blob Blob_new2(jb_Array * blobParts, BlobPropertyBag * options) {
        em_Val vv = em_Val_new(em_Val_global("Blob") , em_Val_from(blobParts), em_Val_from(options));
        return Blob_from_val(&vv);
      }


long long Blob_size(const Blob *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("size")));
}


jb_String Blob_type(const Blob *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


Blob Blob_slice0(Blob* self ) {
    return em_Val_as(Blob, em_Val_call(em_Val_as_val(self->inner), "slice"));
}


Blob Blob_slice1(Blob* self , long long start) {
    return em_Val_as(Blob, em_Val_call(em_Val_as_val(self->inner), "slice", em_Val_from(start)));
}


Blob Blob_slice2(Blob* self , long long start, long long end) {
    return em_Val_as(Blob, em_Val_call(em_Val_as_val(self->inner), "slice", em_Val_from(start), em_Val_from(end)));
}


Blob Blob_slice3(Blob* self , long long start, long long end, jb_String * contentType) {
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

