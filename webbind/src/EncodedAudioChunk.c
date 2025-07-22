#include <webbind/EncodedAudioChunk.h>


DEFINE_EMLITE_TYPE(EncodedAudioChunk, em_Val);


EncodedAudioChunk EncodedAudioChunk_new(const jb_Any* init) : em_Val(em_Val_global("EncodedAudioChunk").new_(em_Val_from(init))) {
        return EncodedAudioChunk(em_Val_new(em_Val_global("EncodedAudioChunk", em_Val_from(init)));
      }


EncodedAudioChunkType EncodedAudioChunk_type(const EncodedAudioChunk *self) {
    return em_Val_as(EncodedAudioChunkType, em_Val_get(em_Val_as_val(self->inner), "type"));
}


long long EncodedAudioChunk_timestamp(const EncodedAudioChunk *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "timestamp"));
}


long long EncodedAudioChunk_duration(const EncodedAudioChunk *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "duration"));
}


unsigned long EncodedAudioChunk_byteLength(const EncodedAudioChunk *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "byteLength"));
}


jb_Undefined EncodedAudioChunk_copyTo(EncodedAudioChunk* self , const jb_Any* destination) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "copyTo", em_Val_from(destination)));
}

