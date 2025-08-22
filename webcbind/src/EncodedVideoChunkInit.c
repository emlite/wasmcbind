#include <webcbind/EncodedVideoChunkInit.h>

DEFINE_EMLITE_TYPE(EncodedVideoChunkInit, em_Val);


EncodedVideoChunkType EncodedVideoChunkInit_type(const EncodedVideoChunkInit *self) {
    return em_Val_as(EncodedVideoChunkType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void EncodedVideoChunkInit_set_type(EncodedVideoChunkInit* self, EncodedVideoChunkType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


long long EncodedVideoChunkInit_timestamp(const EncodedVideoChunkInit *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timestamp")));
}


void EncodedVideoChunkInit_set_timestamp(EncodedVideoChunkInit* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("timestamp"), em_Val_from(value));
}


long long EncodedVideoChunkInit_duration(const EncodedVideoChunkInit *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("duration")));
}


void EncodedVideoChunkInit_set_duration(EncodedVideoChunkInit* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("duration"), em_Val_from(value));
}


jb_Any EncodedVideoChunkInit_data(const EncodedVideoChunkInit *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}


void EncodedVideoChunkInit_set_data(EncodedVideoChunkInit* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


jb_Array EncodedVideoChunkInit_transfer(const EncodedVideoChunkInit *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("transfer")));
}


void EncodedVideoChunkInit_set_transfer(EncodedVideoChunkInit* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("transfer"), em_Val_from(value));
}


EncodedVideoChunkInit EncodedVideoChunkInit_new() {
    em_Val obj = em_Val_object();
    return EncodedVideoChunkInit_from_val(&obj);
}

