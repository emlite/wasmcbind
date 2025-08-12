#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FetchEventInit FetchEventInit;
typedef struct Request Request;
typedef struct Response Response;


/**
 * @brief Interface FetchEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/FetchEvent)
 */
DECLARE_EMLITE_TYPE(FetchEvent, ExtendableEvent);

/**
 * @brief Creates a new `FetchEvent` object. 
*/
FetchEvent FetchEvent_new(jb_String * type, FetchEventInit * eventInitDict);

/**
 * @brief Gets the `request` property. 
*/
Request FetchEvent_request(const FetchEvent *self);

/**
 * @brief Gets the `preloadResponse` property. 
*/
jb_Promise FetchEvent_preloadResponse(const FetchEvent *self);

/**
 * @brief Gets the `clientId` property. 
*/
jb_String FetchEvent_clientId(const FetchEvent *self);

/**
 * @brief Gets the `resultingClientId` property. 
*/
jb_String FetchEvent_resultingClientId(const FetchEvent *self);

/**
 * @brief Gets the `replacesClientId` property. 
*/
jb_String FetchEvent_replacesClientId(const FetchEvent *self);

/**
 * @brief Gets the `handled` property. 
*/
jb_Promise FetchEvent_handled(const FetchEvent *self);

/**
 * @brief Calls the `respondWith` method. 
*/
jb_Undefined FetchEvent_respondWith(FetchEvent* self , jb_Promise * r);

#ifdef __cplusplus
}
#endif
