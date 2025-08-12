#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "WorkerGlobalScope.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Clients Clients;
typedef struct ServiceWorkerRegistration ServiceWorkerRegistration;
typedef struct ServiceWorker ServiceWorker;
typedef struct CookieStore CookieStore;


/**
 * @brief Interface ServiceWorkerGlobalScope
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerGlobalScope)
 */
DECLARE_EMLITE_TYPE(ServiceWorkerGlobalScope, WorkerGlobalScope);

/**
 * @brief Gets the `clients` property. 
*/
Clients ServiceWorkerGlobalScope_clients(const ServiceWorkerGlobalScope *self);

/**
 * @brief Gets the `registration` property. 
*/
ServiceWorkerRegistration ServiceWorkerGlobalScope_registration(const ServiceWorkerGlobalScope *self);

/**
 * @brief Gets the `serviceWorker` property. 
*/
ServiceWorker ServiceWorkerGlobalScope_serviceWorker(const ServiceWorkerGlobalScope *self);

/**
 * @brief Calls the `skipWaiting` method. 
*/
jb_Promise ServiceWorkerGlobalScope_skipWaiting(ServiceWorkerGlobalScope* self );

/**
 * @brief Gets the `oninstall` property. 
*/
jb_Any ServiceWorkerGlobalScope_oninstall(const ServiceWorkerGlobalScope *self);

/**
 * @brief Sets the `oninstall` property. 
*/
void ServiceWorkerGlobalScope_set_oninstall(ServiceWorkerGlobalScope* self, jb_Any * value);

/**
 * @brief Gets the `onactivate` property. 
*/
jb_Any ServiceWorkerGlobalScope_onactivate(const ServiceWorkerGlobalScope *self);

/**
 * @brief Sets the `onactivate` property. 
*/
void ServiceWorkerGlobalScope_set_onactivate(ServiceWorkerGlobalScope* self, jb_Any * value);

/**
 * @brief Gets the `onfetch` property. 
*/
jb_Any ServiceWorkerGlobalScope_onfetch(const ServiceWorkerGlobalScope *self);

/**
 * @brief Sets the `onfetch` property. 
*/
void ServiceWorkerGlobalScope_set_onfetch(ServiceWorkerGlobalScope* self, jb_Any * value);

/**
 * @brief Gets the `onmessage` property. 
*/
jb_Any ServiceWorkerGlobalScope_onmessage(const ServiceWorkerGlobalScope *self);

/**
 * @brief Sets the `onmessage` property. 
*/
void ServiceWorkerGlobalScope_set_onmessage(ServiceWorkerGlobalScope* self, jb_Any * value);

/**
 * @brief Gets the `onmessageerror` property. 
*/
jb_Any ServiceWorkerGlobalScope_onmessageerror(const ServiceWorkerGlobalScope *self);

/**
 * @brief Sets the `onmessageerror` property. 
*/
void ServiceWorkerGlobalScope_set_onmessageerror(ServiceWorkerGlobalScope* self, jb_Any * value);

/**
 * @brief Gets the `onbackgroundfetchsuccess` property. 
*/
jb_Any ServiceWorkerGlobalScope_onbackgroundfetchsuccess(const ServiceWorkerGlobalScope *self);

/**
 * @brief Sets the `onbackgroundfetchsuccess` property. 
*/
void ServiceWorkerGlobalScope_set_onbackgroundfetchsuccess(ServiceWorkerGlobalScope* self, jb_Any * value);

/**
 * @brief Gets the `onbackgroundfetchfail` property. 
*/
jb_Any ServiceWorkerGlobalScope_onbackgroundfetchfail(const ServiceWorkerGlobalScope *self);

/**
 * @brief Sets the `onbackgroundfetchfail` property. 
*/
void ServiceWorkerGlobalScope_set_onbackgroundfetchfail(ServiceWorkerGlobalScope* self, jb_Any * value);

/**
 * @brief Gets the `onbackgroundfetchabort` property. 
*/
jb_Any ServiceWorkerGlobalScope_onbackgroundfetchabort(const ServiceWorkerGlobalScope *self);

/**
 * @brief Sets the `onbackgroundfetchabort` property. 
*/
void ServiceWorkerGlobalScope_set_onbackgroundfetchabort(ServiceWorkerGlobalScope* self, jb_Any * value);

/**
 * @brief Gets the `onbackgroundfetchclick` property. 
*/
jb_Any ServiceWorkerGlobalScope_onbackgroundfetchclick(const ServiceWorkerGlobalScope *self);

/**
 * @brief Sets the `onbackgroundfetchclick` property. 
*/
void ServiceWorkerGlobalScope_set_onbackgroundfetchclick(ServiceWorkerGlobalScope* self, jb_Any * value);

/**
 * @brief Gets the `onsync` property. 
*/
jb_Any ServiceWorkerGlobalScope_onsync(const ServiceWorkerGlobalScope *self);

/**
 * @brief Sets the `onsync` property. 
*/
void ServiceWorkerGlobalScope_set_onsync(ServiceWorkerGlobalScope* self, jb_Any * value);

/**
 * @brief Gets the `oncontentdelete` property. 
*/
jb_Any ServiceWorkerGlobalScope_oncontentdelete(const ServiceWorkerGlobalScope *self);

/**
 * @brief Sets the `oncontentdelete` property. 
*/
void ServiceWorkerGlobalScope_set_oncontentdelete(ServiceWorkerGlobalScope* self, jb_Any * value);

/**
 * @brief Gets the `cookieStore` property. 
*/
CookieStore ServiceWorkerGlobalScope_cookieStore(const ServiceWorkerGlobalScope *self);

/**
 * @brief Gets the `oncookiechange` property. 
*/
jb_Any ServiceWorkerGlobalScope_oncookiechange(const ServiceWorkerGlobalScope *self);

/**
 * @brief Sets the `oncookiechange` property. 
*/
void ServiceWorkerGlobalScope_set_oncookiechange(ServiceWorkerGlobalScope* self, jb_Any * value);

/**
 * @brief Gets the `onnotificationclick` property. 
*/
jb_Any ServiceWorkerGlobalScope_onnotificationclick(const ServiceWorkerGlobalScope *self);

/**
 * @brief Sets the `onnotificationclick` property. 
*/
void ServiceWorkerGlobalScope_set_onnotificationclick(ServiceWorkerGlobalScope* self, jb_Any * value);

/**
 * @brief Gets the `onnotificationclose` property. 
*/
jb_Any ServiceWorkerGlobalScope_onnotificationclose(const ServiceWorkerGlobalScope *self);

/**
 * @brief Sets the `onnotificationclose` property. 
*/
void ServiceWorkerGlobalScope_set_onnotificationclose(ServiceWorkerGlobalScope* self, jb_Any * value);

/**
 * @brief Gets the `oncanmakepayment` property. 
*/
jb_Any ServiceWorkerGlobalScope_oncanmakepayment(const ServiceWorkerGlobalScope *self);

/**
 * @brief Sets the `oncanmakepayment` property. 
*/
void ServiceWorkerGlobalScope_set_oncanmakepayment(ServiceWorkerGlobalScope* self, jb_Any * value);

/**
 * @brief Gets the `onpaymentrequest` property. 
*/
jb_Any ServiceWorkerGlobalScope_onpaymentrequest(const ServiceWorkerGlobalScope *self);

/**
 * @brief Sets the `onpaymentrequest` property. 
*/
void ServiceWorkerGlobalScope_set_onpaymentrequest(ServiceWorkerGlobalScope* self, jb_Any * value);

/**
 * @brief Gets the `onperiodicsync` property. 
*/
jb_Any ServiceWorkerGlobalScope_onperiodicsync(const ServiceWorkerGlobalScope *self);

/**
 * @brief Sets the `onperiodicsync` property. 
*/
void ServiceWorkerGlobalScope_set_onperiodicsync(ServiceWorkerGlobalScope* self, jb_Any * value);

/**
 * @brief Gets the `onpush` property. 
*/
jb_Any ServiceWorkerGlobalScope_onpush(const ServiceWorkerGlobalScope *self);

/**
 * @brief Sets the `onpush` property. 
*/
void ServiceWorkerGlobalScope_set_onpush(ServiceWorkerGlobalScope* self, jb_Any * value);

/**
 * @brief Gets the `onpushsubscriptionchange` property. 
*/
jb_Any ServiceWorkerGlobalScope_onpushsubscriptionchange(const ServiceWorkerGlobalScope *self);

/**
 * @brief Sets the `onpushsubscriptionchange` property. 
*/
void ServiceWorkerGlobalScope_set_onpushsubscriptionchange(ServiceWorkerGlobalScope* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
