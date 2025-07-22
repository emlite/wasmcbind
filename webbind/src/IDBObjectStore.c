#include <webbind/IDBObjectStore.h>
#include <webbind/DOMStringList.h>
#include <webbind/IDBTransaction.h>
#include <webbind/IDBRequest.h>
#include <webbind/IDBIndex.h>


DEFINE_EMLITE_TYPE(IDBIndexParameters, em_Val);


bool IDBIndexParameters_unique(const IDBIndexParameters *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "unique"));
}


void IDBIndexParameters_set_unique(IDBIndexParameters* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "unique", value);
}


bool IDBIndexParameters_multiEntry(const IDBIndexParameters *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "multiEntry"));
}


void IDBIndexParameters_set_multiEntry(IDBIndexParameters* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "multiEntry", value);
}

DEFINE_EMLITE_TYPE(IDBObjectStore, em_Val);


jb_DOMString IDBObjectStore_name(const IDBObjectStore *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "name"));
}


void IDBObjectStore_set_name(IDBObjectStore* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "name", value);
}


jb_Any IDBObjectStore_keyPath(const IDBObjectStore *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "keyPath"));
}


DOMStringList IDBObjectStore_indexNames(const IDBObjectStore *self) {
    return em_Val_as(DOMStringList, em_Val_get(em_Val_as_val(self->inner), "indexNames"));
}


IDBTransaction IDBObjectStore_transaction(const IDBObjectStore *self) {
    return em_Val_as(IDBTransaction, em_Val_get(em_Val_as_val(self->inner), "transaction"));
}


bool IDBObjectStore_autoIncrement(const IDBObjectStore *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "autoIncrement"));
}


IDBRequest IDBObjectStore_put(IDBObjectStore* self , const jb_Any* value) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "put", em_Val_from(value)));
}


IDBRequest IDBObjectStore_put(IDBObjectStore* self , const jb_Any* value, const jb_Any* key) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "put", em_Val_from(value), em_Val_from(key)));
}


IDBRequest IDBObjectStore_add(IDBObjectStore* self , const jb_Any* value) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "add", em_Val_from(value)));
}


IDBRequest IDBObjectStore_add(IDBObjectStore* self , const jb_Any* value, const jb_Any* key) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "add", em_Val_from(value), em_Val_from(key)));
}


IDBRequest IDBObjectStore_delete_(IDBObjectStore* self , const jb_Any* query) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "delete", em_Val_from(query)));
}


IDBRequest IDBObjectStore_clear(IDBObjectStore* self ) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "clear"));
}


IDBRequest IDBObjectStore_get(IDBObjectStore* self , const jb_Any* query) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "get", em_Val_from(query)));
}


IDBRequest IDBObjectStore_getKey(IDBObjectStore* self , const jb_Any* query) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "getKey", em_Val_from(query)));
}


IDBRequest IDBObjectStore_getAll(IDBObjectStore* self ) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "getAll"));
}


IDBRequest IDBObjectStore_getAll(IDBObjectStore* self , const jb_Any* query) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "getAll", em_Val_from(query)));
}


IDBRequest IDBObjectStore_getAll(IDBObjectStore* self , const jb_Any* query, unsigned long count) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "getAll", em_Val_from(query), em_Val_from(count)));
}


IDBRequest IDBObjectStore_getAllKeys(IDBObjectStore* self ) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "getAllKeys"));
}


IDBRequest IDBObjectStore_getAllKeys(IDBObjectStore* self , const jb_Any* query) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "getAllKeys", em_Val_from(query)));
}


IDBRequest IDBObjectStore_getAllKeys(IDBObjectStore* self , const jb_Any* query, unsigned long count) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "getAllKeys", em_Val_from(query), em_Val_from(count)));
}


IDBRequest IDBObjectStore_count(IDBObjectStore* self ) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "count"));
}


IDBRequest IDBObjectStore_count(IDBObjectStore* self , const jb_Any* query) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "count", em_Val_from(query)));
}


IDBRequest IDBObjectStore_openCursor(IDBObjectStore* self ) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "openCursor"));
}


IDBRequest IDBObjectStore_openCursor(IDBObjectStore* self , const jb_Any* query) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "openCursor", em_Val_from(query)));
}


IDBRequest IDBObjectStore_openCursor(IDBObjectStore* self , const jb_Any* query, const IDBCursorDirection* direction) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "openCursor", em_Val_from(query), em_Val_from(direction)));
}


IDBRequest IDBObjectStore_openKeyCursor(IDBObjectStore* self ) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "openKeyCursor"));
}


IDBRequest IDBObjectStore_openKeyCursor(IDBObjectStore* self , const jb_Any* query) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "openKeyCursor", em_Val_from(query)));
}


IDBRequest IDBObjectStore_openKeyCursor(IDBObjectStore* self , const jb_Any* query, const IDBCursorDirection* direction) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "openKeyCursor", em_Val_from(query), em_Val_from(direction)));
}


IDBIndex IDBObjectStore_index(IDBObjectStore* self , const jb_DOMString* name) {
    return em_Val_as(IDBIndex, em_Val_call(em_Val_as_val(self->inner), "index", em_Val_from(name)));
}


IDBIndex IDBObjectStore_createIndex(IDBObjectStore* self , const jb_DOMString* name, const jb_Any* keyPath) {
    return em_Val_as(IDBIndex, em_Val_call(em_Val_as_val(self->inner), "createIndex", em_Val_from(name), em_Val_from(keyPath)));
}


IDBIndex IDBObjectStore_createIndex(IDBObjectStore* self , const jb_DOMString* name, const jb_Any* keyPath, const IDBIndexParameters* options) {
    return em_Val_as(IDBIndex, em_Val_call(em_Val_as_val(self->inner), "createIndex", em_Val_from(name), em_Val_from(keyPath), em_Val_from(options)));
}


jb_Undefined IDBObjectStore_deleteIndex(IDBObjectStore* self , const jb_DOMString* name) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "deleteIndex", em_Val_from(name)));
}

