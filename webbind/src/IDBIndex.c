#include <webbind/IDBIndex.h>

#include <webbind/IDBObjectStore.h>
#include <webbind/IDBRequest.h>

DEFINE_EMLITE_TYPE(IDBIndex, em_Val);


jb_String IDBIndex_name(const IDBIndex *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void IDBIndex_set_name(IDBIndex* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


IDBObjectStore IDBIndex_objectStore(const IDBIndex *self) {
    return em_Val_as(IDBObjectStore, em_Val_get(em_Val_as_val(self->inner), em_Val_from("objectStore")));
}


jb_Any IDBIndex_keyPath(const IDBIndex *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("keyPath")));
}


bool IDBIndex_multiEntry(const IDBIndex *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("multiEntry")));
}


bool IDBIndex_unique(const IDBIndex *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("unique")));
}


IDBRequest IDBIndex_get(IDBIndex* self , jb_Any * query) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "get", em_Val_from(query)));
}


IDBRequest IDBIndex_getKey(IDBIndex* self , jb_Any * query) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "getKey", em_Val_from(query)));
}


IDBRequest IDBIndex_getAll0(IDBIndex* self ) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "getAll"));
}


IDBRequest IDBIndex_getAll1(IDBIndex* self , jb_Any * query) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "getAll", em_Val_from(query)));
}


IDBRequest IDBIndex_getAll2(IDBIndex* self , jb_Any * query, unsigned long count) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "getAll", em_Val_from(query), em_Val_from(count)));
}


IDBRequest IDBIndex_getAllKeys0(IDBIndex* self ) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "getAllKeys"));
}


IDBRequest IDBIndex_getAllKeys1(IDBIndex* self , jb_Any * query) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "getAllKeys", em_Val_from(query)));
}


IDBRequest IDBIndex_getAllKeys2(IDBIndex* self , jb_Any * query, unsigned long count) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "getAllKeys", em_Val_from(query), em_Val_from(count)));
}


IDBRequest IDBIndex_count0(IDBIndex* self ) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "count"));
}


IDBRequest IDBIndex_count1(IDBIndex* self , jb_Any * query) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "count", em_Val_from(query)));
}


IDBRequest IDBIndex_openCursor0(IDBIndex* self ) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "openCursor"));
}


IDBRequest IDBIndex_openCursor1(IDBIndex* self , jb_Any * query) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "openCursor", em_Val_from(query)));
}


IDBRequest IDBIndex_openCursor2(IDBIndex* self , jb_Any * query, IDBCursorDirection * direction) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "openCursor", em_Val_from(query), em_Val_from(direction)));
}


IDBRequest IDBIndex_openKeyCursor0(IDBIndex* self ) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "openKeyCursor"));
}


IDBRequest IDBIndex_openKeyCursor1(IDBIndex* self , jb_Any * query) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "openKeyCursor", em_Val_from(query)));
}


IDBRequest IDBIndex_openKeyCursor2(IDBIndex* self , jb_Any * query, IDBCursorDirection * direction) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "openKeyCursor", em_Val_from(query), em_Val_from(direction)));
}

