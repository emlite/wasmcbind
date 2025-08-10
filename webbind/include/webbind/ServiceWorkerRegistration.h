#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ServiceWorker ServiceWorker;
typedef struct NavigationPreloadManager NavigationPreloadManager;
typedef struct BackgroundFetchManager BackgroundFetchManager;
typedef struct SyncManager SyncManager;
typedef struct ContentIndex ContentIndex;
typedef struct CookieStoreManager CookieStoreManager;
typedef struct NotificationOptions NotificationOptions;
typedef struct Notification Notification;
typedef struct GetNotificationOptions GetNotificationOptions;
typedef struct PaymentManager PaymentManager;
typedef struct PeriodicSyncManager PeriodicSyncManager;
typedef struct PushManager PushManager;

DECLARE_EMLITE_TYPE(ServiceWorkerRegistration, EventTarget);

ServiceWorker ServiceWorkerRegistration_installing(const ServiceWorkerRegistration *self);

ServiceWorker ServiceWorkerRegistration_waiting(const ServiceWorkerRegistration *self);

ServiceWorker ServiceWorkerRegistration_active(const ServiceWorkerRegistration *self);

NavigationPreloadManager ServiceWorkerRegistration_navigationPreload(const ServiceWorkerRegistration *self);

jb_String ServiceWorkerRegistration_scope(const ServiceWorkerRegistration *self);

ServiceWorkerUpdateViaCache ServiceWorkerRegistration_updateViaCache(const ServiceWorkerRegistration *self);

jb_Promise ServiceWorkerRegistration_update(ServiceWorkerRegistration* self );

jb_Promise ServiceWorkerRegistration_unregister(ServiceWorkerRegistration* self );

jb_Any ServiceWorkerRegistration_onupdatefound(const ServiceWorkerRegistration *self);

void ServiceWorkerRegistration_set_onupdatefound(ServiceWorkerRegistration* self, jb_Any * value);

BackgroundFetchManager ServiceWorkerRegistration_backgroundFetch(const ServiceWorkerRegistration *self);

SyncManager ServiceWorkerRegistration_sync(const ServiceWorkerRegistration *self);

ContentIndex ServiceWorkerRegistration_index(const ServiceWorkerRegistration *self);

CookieStoreManager ServiceWorkerRegistration_cookies(const ServiceWorkerRegistration *self);

jb_Promise ServiceWorkerRegistration_showNotification0(ServiceWorkerRegistration* self , jb_String * title);

jb_Promise ServiceWorkerRegistration_showNotification1(ServiceWorkerRegistration* self , jb_String * title, NotificationOptions * options);

jb_Promise ServiceWorkerRegistration_getNotifications0(ServiceWorkerRegistration* self );

jb_Promise ServiceWorkerRegistration_getNotifications1(ServiceWorkerRegistration* self , GetNotificationOptions * filter);

PaymentManager ServiceWorkerRegistration_paymentManager(const ServiceWorkerRegistration *self);

PeriodicSyncManager ServiceWorkerRegistration_periodicSync(const ServiceWorkerRegistration *self);

PushManager ServiceWorkerRegistration_pushManager(const ServiceWorkerRegistration *self);

#ifdef __cplusplus
}
#endif
