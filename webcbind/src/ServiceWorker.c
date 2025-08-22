#include <webcbind/ServiceWorker.h>

#include <webcbind/StructuredSerializeOptions.h>

DEFINE_EMLITE_TYPE(ServiceWorker, EventTarget);


jb_String ServiceWorker_scriptURL(const ServiceWorker *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("scriptURL")));
}


ServiceWorkerState ServiceWorker_state(const ServiceWorker *self) {
    return em_Val_as(ServiceWorkerState, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("state")));
}


jb_Undefined ServiceWorker_postMessage0(ServiceWorker* self , jb_Any * message) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "postMessage", em_Val_from(message)));
}


jb_Undefined ServiceWorker_postMessage1(ServiceWorker* self , jb_Any * message, StructuredSerializeOptions * options) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "postMessage", em_Val_from(message), em_Val_from(options)));
}


jb_Any ServiceWorker_onstatechange(const ServiceWorker *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onstatechange")));
}


void ServiceWorker_set_onstatechange(ServiceWorker* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onstatechange"), em_Val_from(value));
}


jb_Any ServiceWorker_onerror(const ServiceWorker *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onerror")));
}


void ServiceWorker_set_onerror(ServiceWorker* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onerror"), em_Val_from(value));
}

