#include <webcbind/ServiceWorkerRegistration.h>

#include <webcbind/ServiceWorker.h>
#include <webcbind/NavigationPreloadManager.h>
#include <webcbind/BackgroundFetchManager.h>
#include <webcbind/SyncManager.h>
#include <webcbind/ContentIndex.h>
#include <webcbind/CookieStoreManager.h>
#include <webcbind/NotificationOptions.h>
#include <webcbind/Notification.h>
#include <webcbind/GetNotificationOptions.h>
#include <webcbind/PaymentManager.h>
#include <webcbind/PeriodicSyncManager.h>
#include <webcbind/PushManager.h>

DEFINE_EMLITE_TYPE(ServiceWorkerRegistration, EventTarget);


ServiceWorker ServiceWorkerRegistration_installing(const ServiceWorkerRegistration *self) {
    return em_Val_as(ServiceWorker, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("installing")));
}


ServiceWorker ServiceWorkerRegistration_waiting(const ServiceWorkerRegistration *self) {
    return em_Val_as(ServiceWorker, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("waiting")));
}


ServiceWorker ServiceWorkerRegistration_active(const ServiceWorkerRegistration *self) {
    return em_Val_as(ServiceWorker, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("active")));
}


NavigationPreloadManager ServiceWorkerRegistration_navigationPreload(const ServiceWorkerRegistration *self) {
    return em_Val_as(NavigationPreloadManager, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("navigationPreload")));
}


jb_String ServiceWorkerRegistration_scope(const ServiceWorkerRegistration *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("scope")));
}


ServiceWorkerUpdateViaCache ServiceWorkerRegistration_updateViaCache(const ServiceWorkerRegistration *self) {
    return em_Val_as(ServiceWorkerUpdateViaCache, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("updateViaCache")));
}


jb_Promise ServiceWorkerRegistration_update(ServiceWorkerRegistration* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "update"));
}


jb_Promise ServiceWorkerRegistration_unregister(ServiceWorkerRegistration* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "unregister"));
}


jb_Any ServiceWorkerRegistration_onupdatefound(const ServiceWorkerRegistration *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onupdatefound")));
}


void ServiceWorkerRegistration_set_onupdatefound(ServiceWorkerRegistration* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onupdatefound"), em_Val_from(value));
}


BackgroundFetchManager ServiceWorkerRegistration_backgroundFetch(const ServiceWorkerRegistration *self) {
    return em_Val_as(BackgroundFetchManager, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("backgroundFetch")));
}


SyncManager ServiceWorkerRegistration_sync(const ServiceWorkerRegistration *self) {
    return em_Val_as(SyncManager, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("sync")));
}


ContentIndex ServiceWorkerRegistration_index(const ServiceWorkerRegistration *self) {
    return em_Val_as(ContentIndex, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("index")));
}


CookieStoreManager ServiceWorkerRegistration_cookies(const ServiceWorkerRegistration *self) {
    return em_Val_as(CookieStoreManager, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("cookies")));
}


jb_Promise ServiceWorkerRegistration_showNotification0(ServiceWorkerRegistration* self , jb_String * title) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "showNotification", em_Val_from(title)));
}


jb_Promise ServiceWorkerRegistration_showNotification1(ServiceWorkerRegistration* self , jb_String * title, NotificationOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "showNotification", em_Val_from(title), em_Val_from(options)));
}


jb_Promise ServiceWorkerRegistration_getNotifications0(ServiceWorkerRegistration* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getNotifications"));
}


jb_Promise ServiceWorkerRegistration_getNotifications1(ServiceWorkerRegistration* self , GetNotificationOptions * filter) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getNotifications", em_Val_from(filter)));
}


PaymentManager ServiceWorkerRegistration_paymentManager(const ServiceWorkerRegistration *self) {
    return em_Val_as(PaymentManager, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("paymentManager")));
}


PeriodicSyncManager ServiceWorkerRegistration_periodicSync(const ServiceWorkerRegistration *self) {
    return em_Val_as(PeriodicSyncManager, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("periodicSync")));
}


PushManager ServiceWorkerRegistration_pushManager(const ServiceWorkerRegistration *self) {
    return em_Val_as(PushManager, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("pushManager")));
}

