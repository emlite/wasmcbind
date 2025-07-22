#include <webbind/IDBDatabase.h>
#include <webbind/DOMStringList.h>
#include <webbind/IDBTransaction.h>
#include <webbind/IDBObjectStore.h>


DEFINE_EMLITE_TYPE(IDBTransactionOptions, em_Val);


IDBTransactionDurability IDBTransactionOptions_durability(const IDBTransactionOptions *self) {
    return em_Val_as(IDBTransactionDurability, em_Val_get(em_Val_as_val(self->inner), em_Val_from("durability")));
}


void IDBTransactionOptions_set_durability(IDBTransactionOptions* self, IDBTransactionDurability * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("durability"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(IDBObjectStoreParameters, em_Val);


jb_Any IDBObjectStoreParameters_keyPath(const IDBObjectStoreParameters *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("keyPath")));
}


void IDBObjectStoreParameters_set_keyPath(IDBObjectStoreParameters* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("keyPath"), em_Val_from(value));
}


bool IDBObjectStoreParameters_autoIncrement(const IDBObjectStoreParameters *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("autoIncrement")));
}


void IDBObjectStoreParameters_set_autoIncrement(IDBObjectStoreParameters* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("autoIncrement"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(IDBDatabase, EventTarget);


jb_DOMString IDBDatabase_name(const IDBDatabase *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("name")));
}


long long IDBDatabase_version(const IDBDatabase *self) {
    return em_Val_as(long long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("version")));
}


DOMStringList IDBDatabase_objectStoreNames(const IDBDatabase *self) {
    return em_Val_as(DOMStringList, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("objectStoreNames")));
}


IDBTransaction IDBDatabase_transaction0(IDBDatabase* self , jb_Any * storeNames) {
    return em_Val_as(IDBTransaction, em_Val_call(EventTarget_as_val(self->inner), "transaction", em_Val_from(storeNames)));
}


IDBTransaction IDBDatabase_transaction1(IDBDatabase* self , jb_Any * storeNames, IDBTransactionMode * mode) {
    return em_Val_as(IDBTransaction, em_Val_call(EventTarget_as_val(self->inner), "transaction", em_Val_from(storeNames), em_Val_from(mode)));
}


IDBTransaction IDBDatabase_transaction2(IDBDatabase* self , jb_Any * storeNames, IDBTransactionMode * mode, IDBTransactionOptions * options) {
    return em_Val_as(IDBTransaction, em_Val_call(EventTarget_as_val(self->inner), "transaction", em_Val_from(storeNames), em_Val_from(mode), em_Val_from(options)));
}


jb_Undefined IDBDatabase_close(IDBDatabase* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "close"));
}


IDBObjectStore IDBDatabase_createObjectStore0(IDBDatabase* self , jb_DOMString * name) {
    return em_Val_as(IDBObjectStore, em_Val_call(EventTarget_as_val(self->inner), "createObjectStore", em_Val_from(name)));
}


IDBObjectStore IDBDatabase_createObjectStore1(IDBDatabase* self , jb_DOMString * name, IDBObjectStoreParameters * options) {
    return em_Val_as(IDBObjectStore, em_Val_call(EventTarget_as_val(self->inner), "createObjectStore", em_Val_from(name), em_Val_from(options)));
}


jb_Undefined IDBDatabase_deleteObjectStore(IDBDatabase* self , jb_DOMString * name) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "deleteObjectStore", em_Val_from(name)));
}


jb_Any IDBDatabase_onabort(const IDBDatabase *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onabort")));
}


void IDBDatabase_set_onabort(IDBDatabase* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onabort"), em_Val_from(value));
}


jb_Any IDBDatabase_onclose(const IDBDatabase *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onclose")));
}


void IDBDatabase_set_onclose(IDBDatabase* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onclose"), em_Val_from(value));
}


jb_Any IDBDatabase_onerror(const IDBDatabase *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onerror")));
}


void IDBDatabase_set_onerror(IDBDatabase* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onerror"), em_Val_from(value));
}


jb_Any IDBDatabase_onversionchange(const IDBDatabase *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onversionchange")));
}


void IDBDatabase_set_onversionchange(IDBDatabase* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onversionchange"), em_Val_from(value));
}

