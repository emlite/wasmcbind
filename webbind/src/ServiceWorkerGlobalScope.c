#include <webbind/ServiceWorkerGlobalScope.h>
#include <webbind/Clients.h>
#include <webbind/ServiceWorkerRegistration.h>
#include <webbind/ServiceWorker.h>
#include <webbind/CookieStore.h>


DEFINE_EMLITE_TYPE(ServiceWorkerGlobalScope, WorkerGlobalScope);


Clients ServiceWorkerGlobalScope_clients(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(Clients, em_Val_get(WorkerGlobalScope_as_val(self->inner), "clients"));
}


ServiceWorkerRegistration ServiceWorkerGlobalScope_registration(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(ServiceWorkerRegistration, em_Val_get(WorkerGlobalScope_as_val(self->inner), "registration"));
}


ServiceWorker ServiceWorkerGlobalScope_serviceWorker(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(ServiceWorker, em_Val_get(WorkerGlobalScope_as_val(self->inner), "serviceWorker"));
}


jb_Promise ServiceWorkerGlobalScope_skipWaiting(ServiceWorkerGlobalScope* self ) {
    return em_Val_as(jb_Promise, em_Val_call(WorkerGlobalScope_as_val(self->inner), "skipWaiting"));
}


jb_Any ServiceWorkerGlobalScope_oninstall(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), "oninstall"));
}


void ServiceWorkerGlobalScope_set_oninstall(ServiceWorkerGlobalScope* self, const jb_Any* value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), "oninstall", value);
}


jb_Any ServiceWorkerGlobalScope_onactivate(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), "onactivate"));
}


void ServiceWorkerGlobalScope_set_onactivate(ServiceWorkerGlobalScope* self, const jb_Any* value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), "onactivate", value);
}


jb_Any ServiceWorkerGlobalScope_onfetch(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), "onfetch"));
}


void ServiceWorkerGlobalScope_set_onfetch(ServiceWorkerGlobalScope* self, const jb_Any* value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), "onfetch", value);
}


jb_Any ServiceWorkerGlobalScope_onmessage(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), "onmessage"));
}


void ServiceWorkerGlobalScope_set_onmessage(ServiceWorkerGlobalScope* self, const jb_Any* value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), "onmessage", value);
}


jb_Any ServiceWorkerGlobalScope_onmessageerror(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), "onmessageerror"));
}


void ServiceWorkerGlobalScope_set_onmessageerror(ServiceWorkerGlobalScope* self, const jb_Any* value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), "onmessageerror", value);
}


jb_Any ServiceWorkerGlobalScope_onbackgroundfetchsuccess(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), "onbackgroundfetchsuccess"));
}


void ServiceWorkerGlobalScope_set_onbackgroundfetchsuccess(ServiceWorkerGlobalScope* self, const jb_Any* value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), "onbackgroundfetchsuccess", value);
}


jb_Any ServiceWorkerGlobalScope_onbackgroundfetchfail(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), "onbackgroundfetchfail"));
}


void ServiceWorkerGlobalScope_set_onbackgroundfetchfail(ServiceWorkerGlobalScope* self, const jb_Any* value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), "onbackgroundfetchfail", value);
}


jb_Any ServiceWorkerGlobalScope_onbackgroundfetchabort(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), "onbackgroundfetchabort"));
}


void ServiceWorkerGlobalScope_set_onbackgroundfetchabort(ServiceWorkerGlobalScope* self, const jb_Any* value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), "onbackgroundfetchabort", value);
}


jb_Any ServiceWorkerGlobalScope_onbackgroundfetchclick(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), "onbackgroundfetchclick"));
}


void ServiceWorkerGlobalScope_set_onbackgroundfetchclick(ServiceWorkerGlobalScope* self, const jb_Any* value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), "onbackgroundfetchclick", value);
}


jb_Any ServiceWorkerGlobalScope_onsync(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), "onsync"));
}


void ServiceWorkerGlobalScope_set_onsync(ServiceWorkerGlobalScope* self, const jb_Any* value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), "onsync", value);
}


jb_Any ServiceWorkerGlobalScope_oncontentdelete(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), "oncontentdelete"));
}


void ServiceWorkerGlobalScope_set_oncontentdelete(ServiceWorkerGlobalScope* self, const jb_Any* value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), "oncontentdelete", value);
}


CookieStore ServiceWorkerGlobalScope_cookieStore(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(CookieStore, em_Val_get(WorkerGlobalScope_as_val(self->inner), "cookieStore"));
}


jb_Any ServiceWorkerGlobalScope_oncookiechange(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), "oncookiechange"));
}


void ServiceWorkerGlobalScope_set_oncookiechange(ServiceWorkerGlobalScope* self, const jb_Any* value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), "oncookiechange", value);
}


jb_Any ServiceWorkerGlobalScope_onnotificationclick(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), "onnotificationclick"));
}


void ServiceWorkerGlobalScope_set_onnotificationclick(ServiceWorkerGlobalScope* self, const jb_Any* value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), "onnotificationclick", value);
}


jb_Any ServiceWorkerGlobalScope_onnotificationclose(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), "onnotificationclose"));
}


void ServiceWorkerGlobalScope_set_onnotificationclose(ServiceWorkerGlobalScope* self, const jb_Any* value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), "onnotificationclose", value);
}


jb_Any ServiceWorkerGlobalScope_oncanmakepayment(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), "oncanmakepayment"));
}


void ServiceWorkerGlobalScope_set_oncanmakepayment(ServiceWorkerGlobalScope* self, const jb_Any* value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), "oncanmakepayment", value);
}


jb_Any ServiceWorkerGlobalScope_onpaymentrequest(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), "onpaymentrequest"));
}


void ServiceWorkerGlobalScope_set_onpaymentrequest(ServiceWorkerGlobalScope* self, const jb_Any* value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), "onpaymentrequest", value);
}


jb_Any ServiceWorkerGlobalScope_onperiodicsync(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), "onperiodicsync"));
}


void ServiceWorkerGlobalScope_set_onperiodicsync(ServiceWorkerGlobalScope* self, const jb_Any* value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), "onperiodicsync", value);
}


jb_Any ServiceWorkerGlobalScope_onpush(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), "onpush"));
}


void ServiceWorkerGlobalScope_set_onpush(ServiceWorkerGlobalScope* self, const jb_Any* value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), "onpush", value);
}


jb_Any ServiceWorkerGlobalScope_onpushsubscriptionchange(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), "onpushsubscriptionchange"));
}


void ServiceWorkerGlobalScope_set_onpushsubscriptionchange(ServiceWorkerGlobalScope* self, const jb_Any* value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), "onpushsubscriptionchange", value);
}

