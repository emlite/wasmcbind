#include <webbind/IDBOpenDBRequest.h>


DEFINE_EMLITE_TYPE(IDBOpenDBRequest, IDBRequest);


jb_Any IDBOpenDBRequest_onblocked(const IDBOpenDBRequest *self) {
    return em_Val_as(jb_Any, em_Val_get(IDBRequest_as_val(self->inner), "onblocked"));
}


void IDBOpenDBRequest_set_onblocked(IDBOpenDBRequest* self, const jb_Any* value) {
    em_Val_set(IDBRequest_as_val(self->inner), "onblocked", value);
}


jb_Any IDBOpenDBRequest_onupgradeneeded(const IDBOpenDBRequest *self) {
    return em_Val_as(jb_Any, em_Val_get(IDBRequest_as_val(self->inner), "onupgradeneeded"));
}


void IDBOpenDBRequest_set_onupgradeneeded(IDBOpenDBRequest* self, const jb_Any* value) {
    em_Val_set(IDBRequest_as_val(self->inner), "onupgradeneeded", value);
}

