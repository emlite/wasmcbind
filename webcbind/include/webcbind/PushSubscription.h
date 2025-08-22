#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PushSubscriptionOptions PushSubscriptionOptions;
typedef struct PushSubscriptionJSON PushSubscriptionJSON;


/**
 * @brief Interface PushSubscription
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PushSubscription)
 */
DECLARE_EMLITE_TYPE(PushSubscription, em_Val);

/**
 * @brief Gets the `endpoint` property. 
*/
jb_String PushSubscription_endpoint(const PushSubscription *self);

/**
 * @brief Gets the `expirationTime` property. 
*/
jb_Any PushSubscription_expirationTime(const PushSubscription *self);

/**
 * @brief Gets the `options` property. 
*/
PushSubscriptionOptions PushSubscription_options(const PushSubscription *self);

/**
 * @brief Calls the `getKey` method. 
*/
jb_ArrayBuffer PushSubscription_getKey(PushSubscription* self , PushEncryptionKeyName * name);

/**
 * @brief Calls the `unsubscribe` method. 
*/
jb_Promise PushSubscription_unsubscribe(PushSubscription* self );

/**
 * @brief Calls the `toJSON` method. 
*/
PushSubscriptionJSON PushSubscription_toJSON(PushSubscription* self );

#ifdef __cplusplus
}
#endif
