#include <webbind/BlobEventInit.h>

#include <webbind/Blob.h>

DEFINE_EMLITE_TYPE(BlobEventInit, EventInit);


Blob BlobEventInit_data(const BlobEventInit *self) {
    return em_Val_as(Blob, em_Val_get(EventInit_as_val(self->inner), em_Val_from("data")));
}


void BlobEventInit_set_data(BlobEventInit* self, Blob * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


jb_Any BlobEventInit_timecode(const BlobEventInit *self) {
    return em_Val_as(jb_Any, em_Val_get(EventInit_as_val(self->inner), em_Val_from("timecode")));
}


void BlobEventInit_set_timecode(BlobEventInit* self, jb_Any * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("timecode"), em_Val_from(value));
}


BlobEventInit BlobEventInit_new() {
    em_Val obj = em_Val_object();
    return BlobEventInit_from_val(&obj);
}

