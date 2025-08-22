#include <webcbind/StorageAccessTypes.h>

DEFINE_EMLITE_TYPE(StorageAccessTypes, em_Val);


bool StorageAccessTypes_all(const StorageAccessTypes *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("all")));
}


void StorageAccessTypes_set_all(StorageAccessTypes* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("all"), em_Val_from(value));
}


bool StorageAccessTypes_cookies(const StorageAccessTypes *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("cookies")));
}


void StorageAccessTypes_set_cookies(StorageAccessTypes* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("cookies"), em_Val_from(value));
}


bool StorageAccessTypes_sessionStorage(const StorageAccessTypes *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sessionStorage")));
}


void StorageAccessTypes_set_sessionStorage(StorageAccessTypes* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sessionStorage"), em_Val_from(value));
}


bool StorageAccessTypes_localStorage(const StorageAccessTypes *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("localStorage")));
}


void StorageAccessTypes_set_localStorage(StorageAccessTypes* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("localStorage"), em_Val_from(value));
}


bool StorageAccessTypes_indexedDB(const StorageAccessTypes *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("indexedDB")));
}


void StorageAccessTypes_set_indexedDB(StorageAccessTypes* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("indexedDB"), em_Val_from(value));
}


bool StorageAccessTypes_locks(const StorageAccessTypes *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("locks")));
}


void StorageAccessTypes_set_locks(StorageAccessTypes* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("locks"), em_Val_from(value));
}


bool StorageAccessTypes_caches(const StorageAccessTypes *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("caches")));
}


void StorageAccessTypes_set_caches(StorageAccessTypes* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("caches"), em_Val_from(value));
}


bool StorageAccessTypes_getDirectory(const StorageAccessTypes *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("getDirectory")));
}


void StorageAccessTypes_set_getDirectory(StorageAccessTypes* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("getDirectory"), em_Val_from(value));
}


bool StorageAccessTypes_estimate(const StorageAccessTypes *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("estimate")));
}


void StorageAccessTypes_set_estimate(StorageAccessTypes* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("estimate"), em_Val_from(value));
}


bool StorageAccessTypes_createObjectURL(const StorageAccessTypes *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("createObjectURL")));
}


void StorageAccessTypes_set_createObjectURL(StorageAccessTypes* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("createObjectURL"), em_Val_from(value));
}


bool StorageAccessTypes_revokeObjectURL(const StorageAccessTypes *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("revokeObjectURL")));
}


void StorageAccessTypes_set_revokeObjectURL(StorageAccessTypes* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("revokeObjectURL"), em_Val_from(value));
}


bool StorageAccessTypes_BroadcastChannel_(const StorageAccessTypes *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("BroadcastChannel")));
}


void StorageAccessTypes_set_BroadcastChannel_(StorageAccessTypes* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("BroadcastChannel"), em_Val_from(value));
}


bool StorageAccessTypes_SharedWorker_(const StorageAccessTypes *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("SharedWorker")));
}


void StorageAccessTypes_set_SharedWorker_(StorageAccessTypes* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("SharedWorker"), em_Val_from(value));
}


StorageAccessTypes StorageAccessTypes_new() {
    em_Val obj = em_Val_object();
    return StorageAccessTypes_from_val(&obj);
}

