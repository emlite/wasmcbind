#include <webbind/EncodedAudioChunkInit.h>

DEFINE_EMLITE_TYPE(EncodedAudioChunkInit, em_Val);


EncodedAudioChunkType EncodedAudioChunkInit_type(const EncodedAudioChunkInit *self) {
    return em_Val_as(EncodedAudioChunkType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void EncodedAudioChunkInit_set_type(EncodedAudioChunkInit* self, EncodedAudioChunkType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


long long EncodedAudioChunkInit_timestamp(const EncodedAudioChunkInit *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timestamp")));
}


void EncodedAudioChunkInit_set_timestamp(EncodedAudioChunkInit* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("timestamp"), em_Val_from(value));
}


long long EncodedAudioChunkInit_duration(const EncodedAudioChunkInit *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("duration")));
}


void EncodedAudioChunkInit_set_duration(EncodedAudioChunkInit* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("duration"), em_Val_from(value));
}


jb_Any EncodedAudioChunkInit_data(const EncodedAudioChunkInit *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}


void EncodedAudioChunkInit_set_data(EncodedAudioChunkInit* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


jb_Array EncodedAudioChunkInit_transfer(const EncodedAudioChunkInit *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("transfer")));
}


void EncodedAudioChunkInit_set_transfer(EncodedAudioChunkInit* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("transfer"), em_Val_from(value));
}


EncodedAudioChunkInit EncodedAudioChunkInit_new() {
    em_Val obj = em_Val_object();
    return EncodedAudioChunkInit_from_val(&obj);
}

