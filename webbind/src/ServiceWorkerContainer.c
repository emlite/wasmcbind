#include <webbind/ServiceWorkerContainer.h>
#include <webbind/ServiceWorker.h>
#include <webbind/ServiceWorkerRegistration.h>


DEFINE_EMLITE_TYPE(RegistrationOptions, em_Val);


jb_USVString RegistrationOptions_scope(const RegistrationOptions *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "scope"));
}


void RegistrationOptions_set_scope(RegistrationOptions* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "scope", value);
}


WorkerType RegistrationOptions_type(const RegistrationOptions *self) {
    return em_Val_as(WorkerType, em_Val_get(em_Val_as_val(self->inner), "type"));
}


void RegistrationOptions_set_type(RegistrationOptions* self, const WorkerType* value) {
    em_Val_set(em_Val_as_val(self->inner), "type", value);
}


ServiceWorkerUpdateViaCache RegistrationOptions_updateViaCache(const RegistrationOptions *self) {
    return em_Val_as(ServiceWorkerUpdateViaCache, em_Val_get(em_Val_as_val(self->inner), "updateViaCache"));
}


void RegistrationOptions_set_updateViaCache(RegistrationOptions* self, const ServiceWorkerUpdateViaCache* value) {
    em_Val_set(em_Val_as_val(self->inner), "updateViaCache", value);
}

DEFINE_EMLITE_TYPE(ServiceWorkerContainer, EventTarget);


ServiceWorker ServiceWorkerContainer_controller(const ServiceWorkerContainer *self) {
    return em_Val_as(ServiceWorker, em_Val_get(EventTarget_as_val(self->inner), "controller"));
}


jb_Promise ServiceWorkerContainer_ready(const ServiceWorkerContainer *self) {
    return em_Val_as(jb_Promise, em_Val_get(EventTarget_as_val(self->inner), "ready"));
}


jb_Promise ServiceWorkerContainer_register_(ServiceWorkerContainer* self , const jb_Any* scriptURL) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "register", em_Val_from(scriptURL)));
}


jb_Promise ServiceWorkerContainer_register_(ServiceWorkerContainer* self , const jb_Any* scriptURL, const RegistrationOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "register", em_Val_from(scriptURL), em_Val_from(options)));
}


jb_Promise ServiceWorkerContainer_getRegistration(ServiceWorkerContainer* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getRegistration"));
}


jb_Promise ServiceWorkerContainer_getRegistration(ServiceWorkerContainer* self , const jb_USVString* clientURL) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getRegistration", em_Val_from(clientURL)));
}


jb_Promise ServiceWorkerContainer_getRegistrations(ServiceWorkerContainer* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getRegistrations"));
}


jb_Undefined ServiceWorkerContainer_startMessages(ServiceWorkerContainer* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "startMessages"));
}


jb_Any ServiceWorkerContainer_oncontrollerchange(const ServiceWorkerContainer *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "oncontrollerchange"));
}


void ServiceWorkerContainer_set_oncontrollerchange(ServiceWorkerContainer* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "oncontrollerchange", value);
}


jb_Any ServiceWorkerContainer_onmessage(const ServiceWorkerContainer *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onmessage"));
}


void ServiceWorkerContainer_set_onmessage(ServiceWorkerContainer* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onmessage", value);
}


jb_Any ServiceWorkerContainer_onmessageerror(const ServiceWorkerContainer *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onmessageerror"));
}


void ServiceWorkerContainer_set_onmessageerror(ServiceWorkerContainer* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onmessageerror", value);
}

