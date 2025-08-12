#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct StructuredSerializeOptions StructuredSerializeOptions;


/**
 * @brief Interface ServiceWorker
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorker)
 */
DECLARE_EMLITE_TYPE(ServiceWorker, EventTarget);

/**
 * @brief Gets the `scriptURL` property. 
*/
jb_String ServiceWorker_scriptURL(const ServiceWorker *self);

/**
 * @brief Gets the `state` property. 
*/
ServiceWorkerState ServiceWorker_state(const ServiceWorker *self);

/**
 * @brief Calls the `postMessage` method. 
*/
jb_Undefined ServiceWorker_postMessage0(ServiceWorker* self , jb_Any * message);

/**
 * @brief Calls the `postMessage` method. 
*/
jb_Undefined ServiceWorker_postMessage1(ServiceWorker* self , jb_Any * message, StructuredSerializeOptions * options);

/**
 * @brief Gets the `onstatechange` property. 
*/
jb_Any ServiceWorker_onstatechange(const ServiceWorker *self);

/**
 * @brief Sets the `onstatechange` property. 
*/
void ServiceWorker_set_onstatechange(ServiceWorker* self, jb_Any * value);

/**
 * @brief Gets the `onerror` property. 
*/
jb_Any ServiceWorker_onerror(const ServiceWorker *self);

/**
 * @brief Sets the `onerror` property. 
*/
void ServiceWorker_set_onerror(ServiceWorker* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
