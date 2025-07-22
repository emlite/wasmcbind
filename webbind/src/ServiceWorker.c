#include <webbind/ServiceWorker.h>
#include <webbind/MessagePort.h>


DEFINE_EMLITE_TYPE(ServiceWorker, EventTarget);


jb_USVString ServiceWorker_scriptURL(const ServiceWorker *self) {
    return em_Val_as(jb_USVString, em_Val_get(EventTarget_as_val(self->inner), "scriptURL"));
}


ServiceWorkerState ServiceWorker_state(const ServiceWorker *self) {
    return em_Val_as(ServiceWorkerState, em_Val_get(EventTarget_as_val(self->inner), "state"));
}


jb_Undefined ServiceWorker_postMessage(ServiceWorker* self , const jb_Any* message) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "postMessage", em_Val_from(message)));
}


jb_Undefined ServiceWorker_postMessage(ServiceWorker* self , const jb_Any* message, const StructuredSerializeOptions* options) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "postMessage", em_Val_from(message), em_Val_from(options)));
}


jb_Any ServiceWorker_onstatechange(const ServiceWorker *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onstatechange"));
}


void ServiceWorker_set_onstatechange(ServiceWorker* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onstatechange", value);
}


jb_Any ServiceWorker_onerror(const ServiceWorker *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onerror"));
}


void ServiceWorker_set_onerror(ServiceWorker* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onerror", value);
}

