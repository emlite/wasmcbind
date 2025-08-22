#include <webcbind/StorageEventInit.h>

#include <webcbind/Storage.h>

DEFINE_EMLITE_TYPE(StorageEventInit, EventInit);


jb_String StorageEventInit_key(const StorageEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("key")));
}


void StorageEventInit_set_key(StorageEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("key"), em_Val_from(value));
}


jb_String StorageEventInit_oldValue(const StorageEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("oldValue")));
}


void StorageEventInit_set_oldValue(StorageEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("oldValue"), em_Val_from(value));
}


jb_String StorageEventInit_newValue(const StorageEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("newValue")));
}


void StorageEventInit_set_newValue(StorageEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("newValue"), em_Val_from(value));
}


jb_String StorageEventInit_url(const StorageEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("url")));
}


void StorageEventInit_set_url(StorageEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("url"), em_Val_from(value));
}


Storage StorageEventInit_storageArea(const StorageEventInit *self) {
    return em_Val_as(Storage, em_Val_get(EventInit_as_val(self->inner), em_Val_from("storageArea")));
}


void StorageEventInit_set_storageArea(StorageEventInit* self, Storage * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("storageArea"), em_Val_from(value));
}


StorageEventInit StorageEventInit_new() {
    em_Val obj = em_Val_object();
    return StorageEventInit_from_val(&obj);
}

