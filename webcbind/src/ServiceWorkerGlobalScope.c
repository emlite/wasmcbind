#include <webcbind/ServiceWorkerGlobalScope.h>

#include <webcbind/Clients.h>
#include <webcbind/ServiceWorkerRegistration.h>
#include <webcbind/ServiceWorker.h>
#include <webcbind/CookieStore.h>

DEFINE_EMLITE_TYPE(ServiceWorkerGlobalScope, WorkerGlobalScope);


Clients ServiceWorkerGlobalScope_clients(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(Clients, em_Val_get(WorkerGlobalScope_as_val(self->inner), em_Val_from("clients")));
}


ServiceWorkerRegistration ServiceWorkerGlobalScope_registration(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(ServiceWorkerRegistration, em_Val_get(WorkerGlobalScope_as_val(self->inner), em_Val_from("registration")));
}


ServiceWorker ServiceWorkerGlobalScope_serviceWorker(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(ServiceWorker, em_Val_get(WorkerGlobalScope_as_val(self->inner), em_Val_from("serviceWorker")));
}


jb_Promise ServiceWorkerGlobalScope_skipWaiting(ServiceWorkerGlobalScope* self ) {
    return em_Val_as(jb_Promise, em_Val_call(WorkerGlobalScope_as_val(self->inner), "skipWaiting"));
}


jb_Any ServiceWorkerGlobalScope_oninstall(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), em_Val_from("oninstall")));
}


void ServiceWorkerGlobalScope_set_oninstall(ServiceWorkerGlobalScope* self, jb_Any * value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), em_Val_from("oninstall"), em_Val_from(value));
}


jb_Any ServiceWorkerGlobalScope_onactivate(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), em_Val_from("onactivate")));
}


void ServiceWorkerGlobalScope_set_onactivate(ServiceWorkerGlobalScope* self, jb_Any * value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), em_Val_from("onactivate"), em_Val_from(value));
}


jb_Any ServiceWorkerGlobalScope_onfetch(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), em_Val_from("onfetch")));
}


void ServiceWorkerGlobalScope_set_onfetch(ServiceWorkerGlobalScope* self, jb_Any * value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), em_Val_from("onfetch"), em_Val_from(value));
}


jb_Any ServiceWorkerGlobalScope_onmessage(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), em_Val_from("onmessage")));
}


void ServiceWorkerGlobalScope_set_onmessage(ServiceWorkerGlobalScope* self, jb_Any * value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), em_Val_from("onmessage"), em_Val_from(value));
}


jb_Any ServiceWorkerGlobalScope_onmessageerror(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), em_Val_from("onmessageerror")));
}


void ServiceWorkerGlobalScope_set_onmessageerror(ServiceWorkerGlobalScope* self, jb_Any * value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), em_Val_from("onmessageerror"), em_Val_from(value));
}


jb_Any ServiceWorkerGlobalScope_onbackgroundfetchsuccess(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), em_Val_from("onbackgroundfetchsuccess")));
}


void ServiceWorkerGlobalScope_set_onbackgroundfetchsuccess(ServiceWorkerGlobalScope* self, jb_Any * value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), em_Val_from("onbackgroundfetchsuccess"), em_Val_from(value));
}


jb_Any ServiceWorkerGlobalScope_onbackgroundfetchfail(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), em_Val_from("onbackgroundfetchfail")));
}


void ServiceWorkerGlobalScope_set_onbackgroundfetchfail(ServiceWorkerGlobalScope* self, jb_Any * value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), em_Val_from("onbackgroundfetchfail"), em_Val_from(value));
}


jb_Any ServiceWorkerGlobalScope_onbackgroundfetchabort(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), em_Val_from("onbackgroundfetchabort")));
}


void ServiceWorkerGlobalScope_set_onbackgroundfetchabort(ServiceWorkerGlobalScope* self, jb_Any * value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), em_Val_from("onbackgroundfetchabort"), em_Val_from(value));
}


jb_Any ServiceWorkerGlobalScope_onbackgroundfetchclick(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), em_Val_from("onbackgroundfetchclick")));
}


void ServiceWorkerGlobalScope_set_onbackgroundfetchclick(ServiceWorkerGlobalScope* self, jb_Any * value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), em_Val_from("onbackgroundfetchclick"), em_Val_from(value));
}


jb_Any ServiceWorkerGlobalScope_onsync(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), em_Val_from("onsync")));
}


void ServiceWorkerGlobalScope_set_onsync(ServiceWorkerGlobalScope* self, jb_Any * value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), em_Val_from("onsync"), em_Val_from(value));
}


jb_Any ServiceWorkerGlobalScope_oncontentdelete(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), em_Val_from("oncontentdelete")));
}


void ServiceWorkerGlobalScope_set_oncontentdelete(ServiceWorkerGlobalScope* self, jb_Any * value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), em_Val_from("oncontentdelete"), em_Val_from(value));
}


CookieStore ServiceWorkerGlobalScope_cookieStore(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(CookieStore, em_Val_get(WorkerGlobalScope_as_val(self->inner), em_Val_from("cookieStore")));
}


jb_Any ServiceWorkerGlobalScope_oncookiechange(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), em_Val_from("oncookiechange")));
}


void ServiceWorkerGlobalScope_set_oncookiechange(ServiceWorkerGlobalScope* self, jb_Any * value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), em_Val_from("oncookiechange"), em_Val_from(value));
}


jb_Any ServiceWorkerGlobalScope_onnotificationclick(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), em_Val_from("onnotificationclick")));
}


void ServiceWorkerGlobalScope_set_onnotificationclick(ServiceWorkerGlobalScope* self, jb_Any * value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), em_Val_from("onnotificationclick"), em_Val_from(value));
}


jb_Any ServiceWorkerGlobalScope_onnotificationclose(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), em_Val_from("onnotificationclose")));
}


void ServiceWorkerGlobalScope_set_onnotificationclose(ServiceWorkerGlobalScope* self, jb_Any * value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), em_Val_from("onnotificationclose"), em_Val_from(value));
}


jb_Any ServiceWorkerGlobalScope_oncanmakepayment(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), em_Val_from("oncanmakepayment")));
}


void ServiceWorkerGlobalScope_set_oncanmakepayment(ServiceWorkerGlobalScope* self, jb_Any * value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), em_Val_from("oncanmakepayment"), em_Val_from(value));
}


jb_Any ServiceWorkerGlobalScope_onpaymentrequest(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), em_Val_from("onpaymentrequest")));
}


void ServiceWorkerGlobalScope_set_onpaymentrequest(ServiceWorkerGlobalScope* self, jb_Any * value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), em_Val_from("onpaymentrequest"), em_Val_from(value));
}


jb_Any ServiceWorkerGlobalScope_onperiodicsync(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), em_Val_from("onperiodicsync")));
}


void ServiceWorkerGlobalScope_set_onperiodicsync(ServiceWorkerGlobalScope* self, jb_Any * value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), em_Val_from("onperiodicsync"), em_Val_from(value));
}


jb_Any ServiceWorkerGlobalScope_onpush(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), em_Val_from("onpush")));
}


void ServiceWorkerGlobalScope_set_onpush(ServiceWorkerGlobalScope* self, jb_Any * value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), em_Val_from("onpush"), em_Val_from(value));
}


jb_Any ServiceWorkerGlobalScope_onpushsubscriptionchange(const ServiceWorkerGlobalScope *self) {
    return em_Val_as(jb_Any, em_Val_get(WorkerGlobalScope_as_val(self->inner), em_Val_from("onpushsubscriptionchange")));
}


void ServiceWorkerGlobalScope_set_onpushsubscriptionchange(ServiceWorkerGlobalScope* self, jb_Any * value) {
    em_Val_set(WorkerGlobalScope_as_val(self->inner), em_Val_from("onpushsubscriptionchange"), em_Val_from(value));
}

