#include <webbind/IDBDatabase.h>
#include <webbind/DOMStringList.h>
#include <webbind/IDBTransaction.h>
#include <webbind/IDBObjectStore.h>


DEFINE_EMLITE_TYPE(IDBTransactionOptions, em_Val);


IDBTransactionDurability IDBTransactionOptions_durability(const IDBTransactionOptions *self) {
    return em_Val_as(IDBTransactionDurability, em_Val_get(em_Val_as_val(self->inner), "durability"));
}


void IDBTransactionOptions_set_durability(IDBTransactionOptions* self, const IDBTransactionDurability* value) {
    em_Val_set(em_Val_as_val(self->inner), "durability", value);
}

DEFINE_EMLITE_TYPE(IDBObjectStoreParameters, em_Val);


jb_Any IDBObjectStoreParameters_keyPath(const IDBObjectStoreParameters *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "keyPath"));
}


void IDBObjectStoreParameters_set_keyPath(IDBObjectStoreParameters* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "keyPath", value);
}


bool IDBObjectStoreParameters_autoIncrement(const IDBObjectStoreParameters *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "autoIncrement"));
}


void IDBObjectStoreParameters_set_autoIncrement(IDBObjectStoreParameters* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "autoIncrement", value);
}

DEFINE_EMLITE_TYPE(IDBDatabase, EventTarget);


jb_DOMString IDBDatabase_name(const IDBDatabase *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "name"));
}


long long IDBDatabase_version(const IDBDatabase *self) {
    return em_Val_as(long long, em_Val_get(EventTarget_as_val(self->inner), "version"));
}


DOMStringList IDBDatabase_objectStoreNames(const IDBDatabase *self) {
    return em_Val_as(DOMStringList, em_Val_get(EventTarget_as_val(self->inner), "objectStoreNames"));
}


IDBTransaction IDBDatabase_transaction(IDBDatabase* self , const jb_Any* storeNames) {
    return em_Val_as(IDBTransaction, em_Val_call(EventTarget_as_val(self->inner), "transaction", em_Val_from(storeNames)));
}


IDBTransaction IDBDatabase_transaction(IDBDatabase* self , const jb_Any* storeNames, const IDBTransactionMode* mode) {
    return em_Val_as(IDBTransaction, em_Val_call(EventTarget_as_val(self->inner), "transaction", em_Val_from(storeNames), em_Val_from(mode)));
}


IDBTransaction IDBDatabase_transaction(IDBDatabase* self , const jb_Any* storeNames, const IDBTransactionMode* mode, const IDBTransactionOptions* options) {
    return em_Val_as(IDBTransaction, em_Val_call(EventTarget_as_val(self->inner), "transaction", em_Val_from(storeNames), em_Val_from(mode), em_Val_from(options)));
}


jb_Undefined IDBDatabase_close(IDBDatabase* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "close"));
}


IDBObjectStore IDBDatabase_createObjectStore(IDBDatabase* self , const jb_DOMString* name) {
    return em_Val_as(IDBObjectStore, em_Val_call(EventTarget_as_val(self->inner), "createObjectStore", em_Val_from(name)));
}


IDBObjectStore IDBDatabase_createObjectStore(IDBDatabase* self , const jb_DOMString* name, const IDBObjectStoreParameters* options) {
    return em_Val_as(IDBObjectStore, em_Val_call(EventTarget_as_val(self->inner), "createObjectStore", em_Val_from(name), em_Val_from(options)));
}


jb_Undefined IDBDatabase_deleteObjectStore(IDBDatabase* self , const jb_DOMString* name) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "deleteObjectStore", em_Val_from(name)));
}


jb_Any IDBDatabase_onabort(const IDBDatabase *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onabort"));
}


void IDBDatabase_set_onabort(IDBDatabase* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onabort", value);
}


jb_Any IDBDatabase_onclose(const IDBDatabase *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onclose"));
}


void IDBDatabase_set_onclose(IDBDatabase* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onclose", value);
}


jb_Any IDBDatabase_onerror(const IDBDatabase *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onerror"));
}


void IDBDatabase_set_onerror(IDBDatabase* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onerror", value);
}


jb_Any IDBDatabase_onversionchange(const IDBDatabase *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onversionchange"));
}


void IDBDatabase_set_onversionchange(IDBDatabase* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onversionchange", value);
}

