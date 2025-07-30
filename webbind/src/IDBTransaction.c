#include <webbind/IDBTransaction.h>
#include <webbind/DOMStringList.h>
#include <webbind/IDBDatabase.h>
#include <webbind/DOMException.h>
#include <webbind/IDBObjectStore.h>


DEFINE_EMLITE_TYPE(IDBTransaction, EventTarget);


DOMStringList IDBTransaction_objectStoreNames(const IDBTransaction *self) {
    return em_Val_as(DOMStringList, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("objectStoreNames")));
}


IDBTransactionMode IDBTransaction_mode(const IDBTransaction *self) {
    return em_Val_as(IDBTransactionMode, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("mode")));
}


IDBTransactionDurability IDBTransaction_durability(const IDBTransaction *self) {
    return em_Val_as(IDBTransactionDurability, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("durability")));
}


IDBDatabase IDBTransaction_db(const IDBTransaction *self) {
    return em_Val_as(IDBDatabase, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("db")));
}


DOMException IDBTransaction_error(const IDBTransaction *self) {
    return em_Val_as(DOMException, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("error")));
}


IDBObjectStore IDBTransaction_objectStore(IDBTransaction* self , jb_String * name) {
    return em_Val_as(IDBObjectStore, em_Val_call(EventTarget_as_val(self->inner), "objectStore", em_Val_from(name)));
}


jb_Undefined IDBTransaction_commit(IDBTransaction* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "commit"));
}


jb_Undefined IDBTransaction_abort(IDBTransaction* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "abort"));
}


jb_Any IDBTransaction_onabort(const IDBTransaction *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onabort")));
}


void IDBTransaction_set_onabort(IDBTransaction* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onabort"), em_Val_from(value));
}


jb_Any IDBTransaction_oncomplete(const IDBTransaction *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("oncomplete")));
}


void IDBTransaction_set_oncomplete(IDBTransaction* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("oncomplete"), em_Val_from(value));
}


jb_Any IDBTransaction_onerror(const IDBTransaction *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onerror")));
}


void IDBTransaction_set_onerror(IDBTransaction* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onerror"), em_Val_from(value));
}

