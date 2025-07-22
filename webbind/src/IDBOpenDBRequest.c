#include <webbind/IDBOpenDBRequest.h>


DEFINE_EMLITE_TYPE(IDBOpenDBRequest, IDBRequest);


jb_Any IDBOpenDBRequest_onblocked(const IDBOpenDBRequest *self) {
    return em_Val_as(jb_Any, em_Val_get(IDBRequest_as_val(self->inner), em_Val_from("onblocked")));
}


void IDBOpenDBRequest_set_onblocked(IDBOpenDBRequest* self, jb_Any * value) {
    em_Val_set(IDBRequest_as_val(self->inner), em_Val_from("onblocked"), em_Val_from(value));
}


jb_Any IDBOpenDBRequest_onupgradeneeded(const IDBOpenDBRequest *self) {
    return em_Val_as(jb_Any, em_Val_get(IDBRequest_as_val(self->inner), em_Val_from("onupgradeneeded")));
}


void IDBOpenDBRequest_set_onupgradeneeded(IDBOpenDBRequest* self, jb_Any * value) {
    em_Val_set(IDBRequest_as_val(self->inner), em_Val_from("onupgradeneeded"), em_Val_from(value));
}

