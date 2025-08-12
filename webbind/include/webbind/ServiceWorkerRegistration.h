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


/**
 * @brief Interface ServiceWorkerRegistration
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration)
 */
DECLARE_EMLITE_TYPE(ServiceWorkerRegistration, EventTarget);

/**
 * @brief Gets the `installing` property. 
*/
ServiceWorker ServiceWorkerRegistration_installing(const ServiceWorkerRegistration *self);

/**
 * @brief Gets the `waiting` property. 
*/
ServiceWorker ServiceWorkerRegistration_waiting(const ServiceWorkerRegistration *self);

/**
 * @brief Gets the `active` property. 
*/
ServiceWorker ServiceWorkerRegistration_active(const ServiceWorkerRegistration *self);

/**
 * @brief Gets the `navigationPreload` property. 
*/
NavigationPreloadManager ServiceWorkerRegistration_navigationPreload(const ServiceWorkerRegistration *self);

/**
 * @brief Gets the `scope` property. 
*/
jb_String ServiceWorkerRegistration_scope(const ServiceWorkerRegistration *self);

/**
 * @brief Gets the `updateViaCache` property. 
*/
ServiceWorkerUpdateViaCache ServiceWorkerRegistration_updateViaCache(const ServiceWorkerRegistration *self);

/**
 * @brief Calls the `update` method. 
*/
jb_Promise ServiceWorkerRegistration_update(ServiceWorkerRegistration* self );

/**
 * @brief Calls the `unregister` method. 
*/
jb_Promise ServiceWorkerRegistration_unregister(ServiceWorkerRegistration* self );

/**
 * @brief Gets the `onupdatefound` property. 
*/
jb_Any ServiceWorkerRegistration_onupdatefound(const ServiceWorkerRegistration *self);

/**
 * @brief Sets the `onupdatefound` property. 
*/
void ServiceWorkerRegistration_set_onupdatefound(ServiceWorkerRegistration* self, jb_Any * value);

/**
 * @brief Gets the `backgroundFetch` property. 
*/
BackgroundFetchManager ServiceWorkerRegistration_backgroundFetch(const ServiceWorkerRegistration *self);

/**
 * @brief Gets the `sync` property. 
*/
SyncManager ServiceWorkerRegistration_sync(const ServiceWorkerRegistration *self);

/**
 * @brief Gets the `index` property. 
*/
ContentIndex ServiceWorkerRegistration_index(const ServiceWorkerRegistration *self);

/**
 * @brief Gets the `cookies` property. 
*/
CookieStoreManager ServiceWorkerRegistration_cookies(const ServiceWorkerRegistration *self);

/**
 * @brief Calls the `showNotification` method. 
*/
jb_Promise ServiceWorkerRegistration_showNotification0(ServiceWorkerRegistration* self , jb_String * title);

/**
 * @brief Calls the `showNotification` method. 
*/
jb_Promise ServiceWorkerRegistration_showNotification1(ServiceWorkerRegistration* self , jb_String * title, NotificationOptions * options);

/**
 * @brief Calls the `getNotifications` method. 
*/
jb_Promise ServiceWorkerRegistration_getNotifications0(ServiceWorkerRegistration* self );

/**
 * @brief Calls the `getNotifications` method. 
*/
jb_Promise ServiceWorkerRegistration_getNotifications1(ServiceWorkerRegistration* self , GetNotificationOptions * filter);

/**
 * @brief Gets the `paymentManager` property. 
*/
PaymentManager ServiceWorkerRegistration_paymentManager(const ServiceWorkerRegistration *self);

/**
 * @brief Gets the `periodicSync` property. 
*/
PeriodicSyncManager ServiceWorkerRegistration_periodicSync(const ServiceWorkerRegistration *self);

/**
 * @brief Gets the `pushManager` property. 
*/
PushManager ServiceWorkerRegistration_pushManager(const ServiceWorkerRegistration *self);

#ifdef __cplusplus
}
#endif
