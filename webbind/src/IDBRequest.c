#include <webbind/IDBRequest.h>

#include <webbind/DOMException.h>
#include <webbind/IDBTransaction.h>

DEFINE_EMLITE_TYPE(IDBRequest, EventTarget);


jb_Any IDBRequest_result(const IDBRequest *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("result")));
}


DOMException IDBRequest_error(const IDBRequest *self) {
    return em_Val_as(DOMException, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("error")));
}


jb_Any IDBRequest_source(const IDBRequest *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("source")));
}


IDBTransaction IDBRequest_transaction(const IDBRequest *self) {
    return em_Val_as(IDBTransaction, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("transaction")));
}


IDBRequestReadyState IDBRequest_readyState(const IDBRequest *self) {
    return em_Val_as(IDBRequestReadyState, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("readyState")));
}


jb_Any IDBRequest_onsuccess(const IDBRequest *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onsuccess")));
}


void IDBRequest_set_onsuccess(IDBRequest* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onsuccess"), em_Val_from(value));
}


jb_Any IDBRequest_onerror(const IDBRequest *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onerror")));
}


void IDBRequest_set_onerror(IDBRequest* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onerror"), em_Val_from(value));
}

