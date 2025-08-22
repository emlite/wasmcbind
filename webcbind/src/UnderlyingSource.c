#include <webcbind/UnderlyingSource.h>

DEFINE_EMLITE_TYPE(UnderlyingSource, em_Val);


jb_Function UnderlyingSource_start(const UnderlyingSource *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("start")));
}


void UnderlyingSource_set_start(UnderlyingSource* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("start"), em_Val_from(value));
}


jb_Function UnderlyingSource_pull(const UnderlyingSource *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("pull")));
}


void UnderlyingSource_set_pull(UnderlyingSource* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("pull"), em_Val_from(value));
}


jb_Function UnderlyingSource_cancel(const UnderlyingSource *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("cancel")));
}


void UnderlyingSource_set_cancel(UnderlyingSource* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("cancel"), em_Val_from(value));
}


ReadableStreamType UnderlyingSource_type(const UnderlyingSource *self) {
    return em_Val_as(ReadableStreamType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void UnderlyingSource_set_type(UnderlyingSource* self, ReadableStreamType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


long long UnderlyingSource_autoAllocateChunkSize(const UnderlyingSource *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("autoAllocateChunkSize")));
}


void UnderlyingSource_set_autoAllocateChunkSize(UnderlyingSource* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("autoAllocateChunkSize"), em_Val_from(value));
}


UnderlyingSource UnderlyingSource_new() {
    em_Val obj = em_Val_object();
    return UnderlyingSource_from_val(&obj);
}

