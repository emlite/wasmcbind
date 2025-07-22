#include <webbind/IDBIndex.h>
#include <webbind/IDBObjectStore.h>
#include <webbind/IDBRequest.h>


DEFINE_EMLITE_TYPE(IDBIndex, em_Val);


jb_DOMString IDBIndex_name(const IDBIndex *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "name"));
}


void IDBIndex_set_name(IDBIndex* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "name", value);
}


IDBObjectStore IDBIndex_objectStore(const IDBIndex *self) {
    return em_Val_as(IDBObjectStore, em_Val_get(em_Val_as_val(self->inner), "objectStore"));
}


jb_Any IDBIndex_keyPath(const IDBIndex *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "keyPath"));
}


bool IDBIndex_multiEntry(const IDBIndex *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "multiEntry"));
}


bool IDBIndex_unique(const IDBIndex *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "unique"));
}


IDBRequest IDBIndex_get(IDBIndex* self , const jb_Any* query) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "get", em_Val_from(query)));
}


IDBRequest IDBIndex_getKey(IDBIndex* self , const jb_Any* query) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "getKey", em_Val_from(query)));
}


IDBRequest IDBIndex_getAll(IDBIndex* self ) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "getAll"));
}


IDBRequest IDBIndex_getAll(IDBIndex* self , const jb_Any* query) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "getAll", em_Val_from(query)));
}


IDBRequest IDBIndex_getAll(IDBIndex* self , const jb_Any* query, unsigned long count) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "getAll", em_Val_from(query), em_Val_from(count)));
}


IDBRequest IDBIndex_getAllKeys(IDBIndex* self ) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "getAllKeys"));
}


IDBRequest IDBIndex_getAllKeys(IDBIndex* self , const jb_Any* query) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "getAllKeys", em_Val_from(query)));
}


IDBRequest IDBIndex_getAllKeys(IDBIndex* self , const jb_Any* query, unsigned long count) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "getAllKeys", em_Val_from(query), em_Val_from(count)));
}


IDBRequest IDBIndex_count(IDBIndex* self ) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "count"));
}


IDBRequest IDBIndex_count(IDBIndex* self , const jb_Any* query) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "count", em_Val_from(query)));
}


IDBRequest IDBIndex_openCursor(IDBIndex* self ) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "openCursor"));
}


IDBRequest IDBIndex_openCursor(IDBIndex* self , const jb_Any* query) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "openCursor", em_Val_from(query)));
}


IDBRequest IDBIndex_openCursor(IDBIndex* self , const jb_Any* query, const IDBCursorDirection* direction) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "openCursor", em_Val_from(query), em_Val_from(direction)));
}


IDBRequest IDBIndex_openKeyCursor(IDBIndex* self ) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "openKeyCursor"));
}


IDBRequest IDBIndex_openKeyCursor(IDBIndex* self , const jb_Any* query) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "openKeyCursor", em_Val_from(query)));
}


IDBRequest IDBIndex_openKeyCursor(IDBIndex* self , const jb_Any* query, const IDBCursorDirection* direction) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "openKeyCursor", em_Val_from(query), em_Val_from(direction)));
}

