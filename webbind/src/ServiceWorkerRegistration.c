#include <webbind/ServiceWorkerRegistration.h>
#include <webbind/ServiceWorker.h>
#include <webbind/NavigationPreloadManager.h>
#include <webbind/BackgroundFetchManager.h>
#include <webbind/SyncManager.h>
#include <webbind/ContentIndex.h>
#include <webbind/CookieStoreManager.h>
#include <webbind/Notification.h>
#include <webbind/PaymentManager.h>
#include <webbind/PeriodicSyncManager.h>
#include <webbind/PushManager.h>


DEFINE_EMLITE_TYPE(NotificationOptions, em_Val);


NotificationDirection NotificationOptions_dir(const NotificationOptions *self) {
    return em_Val_as(NotificationDirection, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dir")));
}


void NotificationOptions_set_dir(NotificationOptions* self, NotificationDirection * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dir"), em_Val_from(value));
}


jb_String NotificationOptions_lang(const NotificationOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lang")));
}


void NotificationOptions_set_lang(NotificationOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("lang"), em_Val_from(value));
}


jb_String NotificationOptions_body(const NotificationOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("body")));
}


void NotificationOptions_set_body(NotificationOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("body"), em_Val_from(value));
}


jb_String NotificationOptions_tag(const NotificationOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("tag")));
}


void NotificationOptions_set_tag(NotificationOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("tag"), em_Val_from(value));
}


jb_String NotificationOptions_image(const NotificationOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("image")));
}


void NotificationOptions_set_image(NotificationOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("image"), em_Val_from(value));
}


jb_String NotificationOptions_icon(const NotificationOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("icon")));
}


void NotificationOptions_set_icon(NotificationOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("icon"), em_Val_from(value));
}


jb_String NotificationOptions_badge(const NotificationOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("badge")));
}


void NotificationOptions_set_badge(NotificationOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("badge"), em_Val_from(value));
}


jb_Any NotificationOptions_vibrate(const NotificationOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("vibrate")));
}


void NotificationOptions_set_vibrate(NotificationOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("vibrate"), em_Val_from(value));
}


jb_Any NotificationOptions_timestamp(const NotificationOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timestamp")));
}


void NotificationOptions_set_timestamp(NotificationOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("timestamp"), em_Val_from(value));
}


bool NotificationOptions_renotify(const NotificationOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("renotify")));
}


void NotificationOptions_set_renotify(NotificationOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("renotify"), em_Val_from(value));
}


bool NotificationOptions_silent(const NotificationOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("silent")));
}


void NotificationOptions_set_silent(NotificationOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("silent"), em_Val_from(value));
}


bool NotificationOptions_requireInteraction(const NotificationOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requireInteraction")));
}


void NotificationOptions_set_requireInteraction(NotificationOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requireInteraction"), em_Val_from(value));
}


jb_Any NotificationOptions_data(const NotificationOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}


void NotificationOptions_set_data(NotificationOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


jb_Array NotificationOptions_actions(const NotificationOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("actions")));
}


void NotificationOptions_set_actions(NotificationOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("actions"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(GetNotificationOptions, em_Val);


jb_String GetNotificationOptions_tag(const GetNotificationOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("tag")));
}


void GetNotificationOptions_set_tag(GetNotificationOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("tag"), em_Val_from(value));
}

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

