#include <webbind/SharedWorkerGlobalScope.h>


DEFINE_EMLITE_TYPE(SharedWorkerGlobalScope, WorkerGlobalScope);


jb_DOMString SharedWorkerGlobalScope_name(const SharedWorkerGlobalScope *self) {
    return em_Val_as(jb_DOMString, em_Val_get(WorkerGlobalScope_as_val(self->inner), em_Val_from("name")));
}


jb_Undefined SharedWorkerGlobalScope_close(SharedWorkerGlobalScope* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(WorkerGlobalScope_as_val(self->inner), "close"));
}


jb_Any SharedWorkerGlobalScope_onconnect(const SharedWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), em_Val_from("onconnect")));
}


void SharedWorkerGlobalScope_set_onconnect(SharedWorkerGlobalScope* self, jb_Any * value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), em_Val_from("onconnect"), em_Val_from(value));
}

