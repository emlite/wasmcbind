#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PushSubscription PushSubscription;
typedef struct PushSubscriptionOptionsInit PushSubscriptionOptionsInit;


/**
 * @brief Interface PushManager
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PushManager)
 */
DECLARE_EMLITE_TYPE(PushManager, em_Val);

/**
 * @brief Gets the `supportedContentEncodings` property. 
*/
jb_Array PushManager_supportedContentEncodings(const PushManager *self);

/**
 * @brief Calls the `subscribe` method. 
*/
jb_Promise PushManager_subscribe0(PushManager* self );

/**
 * @brief Calls the `subscribe` method. 
*/
jb_Promise PushManager_subscribe1(PushManager* self , PushSubscriptionOptionsInit * options);

/**
 * @brief Calls the `getSubscription` method. 
*/
jb_Promise PushManager_getSubscription(PushManager* self );

/**
 * @brief Calls the `permissionState` method. 
*/
jb_Promise PushManager_permissionState0(PushManager* self );

/**
 * @brief Calls the `permissionState` method. 
*/
jb_Promise PushManager_permissionState1(PushManager* self , PushSubscriptionOptionsInit * options);

#ifdef __cplusplus
}
#endif
