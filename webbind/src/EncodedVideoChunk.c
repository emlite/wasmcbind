#include <webbind/EncodedVideoChunk.h>


DEFINE_EMLITE_TYPE(EncodedVideoChunk, em_Val);


EncodedVideoChunk EncodedVideoChunk_new(jb_Any * init) {
        em_Val vv = em_Val_new(em_Val_global("EncodedVideoChunk") , em_Val_from(init));
        return EncodedVideoChunk_from_val(&vv);
      }


EncodedVideoChunkType EncodedVideoChunk_type(const EncodedVideoChunk *self) {
    return em_Val_as(EncodedVideoChunkType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


long long EncodedVideoChunk_timestamp(const EncodedVideoChunk *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timestamp")));
}


long long EncodedVideoChunk_duration(const EncodedVideoChunk *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("duration")));
}


unsigned long EncodedVideoChunk_byteLength(const EncodedVideoChunk *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("byteLength")));
}


jb_Undefined EncodedVideoChunk_copyTo(EncodedVideoChunk* self , jb_Any * destination) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "copyTo", em_Val_from(destination)));
}

