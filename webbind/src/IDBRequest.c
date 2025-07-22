#include <webbind/IDBRequest.h>
#include <webbind/DOMException.h>
#include <webbind/IDBTransaction.h>


DEFINE_EMLITE_TYPE(IDBRequest, EventTarget);


jb_Any IDBRequest_result(const IDBRequest *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "result"));
}


DOMException IDBRequest_error(const IDBRequest *self) {
    return em_Val_as(DOMException, em_Val_get(EventTarget_as_val(self->inner), "error"));
}


jb_Any IDBRequest_source(const IDBRequest *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "source"));
}


IDBTransaction IDBRequest_transaction(const IDBRequest *self) {
    return em_Val_as(IDBTransaction, em_Val_get(EventTarget_as_val(self->inner), "transaction"));
}


IDBRequestReadyState IDBRequest_readyState(const IDBRequest *self) {
    return em_Val_as(IDBRequestReadyState, em_Val_get(EventTarget_as_val(self->inner), "readyState"));
}


jb_Any IDBRequest_onsuccess(const IDBRequest *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onsuccess"));
}


void IDBRequest_set_onsuccess(IDBRequest* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onsuccess", value);
}


jb_Any IDBRequest_onerror(const IDBRequest *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onerror"));
}


void IDBRequest_set_onerror(IDBRequest* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onerror", value);
}

