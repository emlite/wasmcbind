#include <webbind/ServiceWorkerContainer.h>
#include <webbind/ServiceWorker.h>
#include <webbind/ServiceWorkerRegistration.h>


DEFINE_EMLITE_TYPE(RegistrationOptions, em_Val);


jb_String RegistrationOptions_scope(const RegistrationOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("scope")));
}


void RegistrationOptions_set_scope(RegistrationOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("scope"), em_Val_from(value));
}


WorkerType RegistrationOptions_type(const RegistrationOptions *self) {
    return em_Val_as(WorkerType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void RegistrationOptions_set_type(RegistrationOptions* self, WorkerType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


ServiceWorkerUpdateViaCache RegistrationOptions_updateViaCache(const RegistrationOptions *self) {
    return em_Val_as(ServiceWorkerUpdateViaCache, em_Val_get(em_Val_as_val(self->inner), em_Val_from("updateViaCache")));
}


void RegistrationOptions_set_updateViaCache(RegistrationOptions* self, ServiceWorkerUpdateViaCache * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("updateViaCache"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(ServiceWorkerContainer, EventTarget);


ServiceWorker ServiceWorkerContainer_controller(const ServiceWorkerContainer *self) {
    return em_Val_as(ServiceWorker, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("controller")));
}


jb_Promise ServiceWorkerContainer_ready(const ServiceWorkerContainer *self) {
    return em_Val_as(jb_Promise, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ready")));
}


jb_Promise ServiceWorkerContainer_register_0(ServiceWorkerContainer* self , jb_Any * scriptURL) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "register", em_Val_from(scriptURL)));
}


jb_Promise ServiceWorkerContainer_register_1(ServiceWorkerContainer* self , jb_Any * scriptURL, RegistrationOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "register", em_Val_from(scriptURL), em_Val_from(options)));
}


jb_Promise ServiceWorkerContainer_getRegistration0(ServiceWorkerContainer* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getRegistration"));
}


jb_Promise ServiceWorkerContainer_getRegistration1(ServiceWorkerContainer* self , jb_String * clientURL) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getRegistration", em_Val_from(clientURL)));
}


jb_Promise ServiceWorkerContainer_getRegistrations(ServiceWorkerContainer* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getRegistrations"));
}


jb_Undefined ServiceWorkerContainer_startMessages(ServiceWorkerContainer* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "startMessages"));
}


jb_Any ServiceWorkerContainer_oncontrollerchange(const ServiceWorkerContainer *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("oncontrollerchange")));
}


void ServiceWorkerContainer_set_oncontrollerchange(ServiceWorkerContainer* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("oncontrollerchange"), em_Val_from(value));
}


jb_Any ServiceWorkerContainer_onmessage(const ServiceWorkerContainer *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onmessage")));
}


void ServiceWorkerContainer_set_onmessage(ServiceWorkerContainer* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onmessage"), em_Val_from(value));
}


jb_Any ServiceWorkerContainer_onmessageerror(const ServiceWorkerContainer *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onmessageerror")));
}


void ServiceWorkerContainer_set_onmessageerror(ServiceWorkerContainer* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onmessageerror"), em_Val_from(value));
}

