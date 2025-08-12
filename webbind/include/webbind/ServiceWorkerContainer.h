#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ServiceWorker ServiceWorker;
typedef struct ServiceWorkerRegistration ServiceWorkerRegistration;
typedef struct RegistrationOptions RegistrationOptions;


/**
 * @brief Interface ServiceWorkerContainer
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerContainer)
 */
DECLARE_EMLITE_TYPE(ServiceWorkerContainer, EventTarget);

/**
 * @brief Gets the `controller` property. 
*/
ServiceWorker ServiceWorkerContainer_controller(const ServiceWorkerContainer *self);

/**
 * @brief Gets the `ready` property. 
*/
jb_Promise ServiceWorkerContainer_ready(const ServiceWorkerContainer *self);

/**
 * @brief Calls the `register` method. 
*/
jb_Promise ServiceWorkerContainer_register_0(ServiceWorkerContainer* self , jb_Any * scriptURL);

/**
 * @brief Calls the `register` method. 
*/
jb_Promise ServiceWorkerContainer_register_1(ServiceWorkerContainer* self , jb_Any * scriptURL, RegistrationOptions * options);

/**
 * @brief Calls the `getRegistration` method. 
*/
jb_Promise ServiceWorkerContainer_getRegistration0(ServiceWorkerContainer* self );

/**
 * @brief Calls the `getRegistration` method. 
*/
jb_Promise ServiceWorkerContainer_getRegistration1(ServiceWorkerContainer* self , jb_String * clientURL);

/**
 * @brief Calls the `getRegistrations` method. 
*/
jb_Promise ServiceWorkerContainer_getRegistrations(ServiceWorkerContainer* self );

/**
 * @brief Calls the `startMessages` method. 
*/
jb_Undefined ServiceWorkerContainer_startMessages(ServiceWorkerContainer* self );

/**
 * @brief Gets the `oncontrollerchange` property. 
*/
jb_Any ServiceWorkerContainer_oncontrollerchange(const ServiceWorkerContainer *self);

/**
 * @brief Sets the `oncontrollerchange` property. 
*/
void ServiceWorkerContainer_set_oncontrollerchange(ServiceWorkerContainer* self, jb_Any * value);

/**
 * @brief Gets the `onmessage` property. 
*/
jb_Any ServiceWorkerContainer_onmessage(const ServiceWorkerContainer *self);

/**
 * @brief Sets the `onmessage` property. 
*/
void ServiceWorkerContainer_set_onmessage(ServiceWorkerContainer* self, jb_Any * value);

/**
 * @brief Gets the `onmessageerror` property. 
*/
jb_Any ServiceWorkerContainer_onmessageerror(const ServiceWorkerContainer *self);

/**
 * @brief Sets the `onmessageerror` property. 
*/
void ServiceWorkerContainer_set_onmessageerror(ServiceWorkerContainer* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
