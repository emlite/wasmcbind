#include <webbind/DedicatedWorkerGlobalScope.h>
#include <webbind/MessagePort.h>


DEFINE_EMLITE_TYPE(DedicatedWorkerGlobalScope, WorkerGlobalScope);


jb_DOMString DedicatedWorkerGlobalScope_name(const DedicatedWorkerGlobalScope *self) {
    return em_Val_as(jb_DOMString, em_Val_get(WorkerGlobalScope_as_val(self->inner), em_Val_from("name")));
}


jb_Undefined DedicatedWorkerGlobalScope_postMessage0(DedicatedWorkerGlobalScope* self , jb_Any * message) {
    return em_Val_as(jb_Undefined, em_Val_call(WorkerGlobalScope_as_val(self->inner), "postMessage", em_Val_from(message)));
}


jb_Undefined DedicatedWorkerGlobalScope_postMessage1(DedicatedWorkerGlobalScope* self , jb_Any * message, StructuredSerializeOptions * options) {
    return em_Val_as(jb_Undefined, em_Val_call(WorkerGlobalScope_as_val(self->inner), "postMessage", em_Val_from(message), em_Val_from(options)));
}


jb_Undefined DedicatedWorkerGlobalScope_close(DedicatedWorkerGlobalScope* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(WorkerGlobalScope_as_val(self->inner), "close"));
}


jb_Any DedicatedWorkerGlobalScope_onrtctransform(const DedicatedWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), em_Val_from("onrtctransform")));
}


void DedicatedWorkerGlobalScope_set_onrtctransform(DedicatedWorkerGlobalScope* self, jb_Any * value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), em_Val_from("onrtctransform"), em_Val_from(value));
}


unsigned long DedicatedWorkerGlobalScope_requestAnimationFrame(DedicatedWorkerGlobalScope* self , jb_Function * callback) {
    return em_Val_as(unsigned long, em_Val_call(WorkerGlobalScope_as_val(self->inner), "requestAnimationFrame", em_Val_from(callback)));
}


jb_Undefined DedicatedWorkerGlobalScope_cancelAnimationFrame(DedicatedWorkerGlobalScope* self , unsigned long handle) {
    return em_Val_as(jb_Undefined, em_Val_call(WorkerGlobalScope_as_val(self->inner), "cancelAnimationFrame", em_Val_from(handle)));
}


jb_Any DedicatedWorkerGlobalScope_onmessage(const DedicatedWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), em_Val_from("onmessage")));
}


void DedicatedWorkerGlobalScope_set_onmessage(DedicatedWorkerGlobalScope* self, jb_Any * value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), em_Val_from("onmessage"), em_Val_from(value));
}


jb_Any DedicatedWorkerGlobalScope_onmessageerror(const DedicatedWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), em_Val_from("onmessageerror")));
}


void DedicatedWorkerGlobalScope_set_onmessageerror(DedicatedWorkerGlobalScope* self, jb_Any * value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), em_Val_from("onmessageerror"), em_Val_from(value));
}

