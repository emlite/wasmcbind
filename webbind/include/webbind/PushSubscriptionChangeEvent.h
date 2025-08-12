#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PushSubscriptionChangeEventInit PushSubscriptionChangeEventInit;
typedef struct PushSubscription PushSubscription;


/**
 * @brief Interface PushSubscriptionChangeEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PushSubscriptionChangeEvent)
 */
DECLARE_EMLITE_TYPE(PushSubscriptionChangeEvent, ExtendableEvent);

/**
 * @brief Creates a new `PushSubscriptionChangeEvent` object. 
*/
PushSubscriptionChangeEvent PushSubscriptionChangeEvent_new0(jb_String * type);

/**
 * @brief Creates a new `PushSubscriptionChangeEvent` object. 
*/
PushSubscriptionChangeEvent PushSubscriptionChangeEvent_new1(jb_String * type, PushSubscriptionChangeEventInit * eventInitDict);

/**
 * @brief Gets the `newSubscription` property. 
*/
PushSubscription PushSubscriptionChangeEvent_newSubscription(const PushSubscriptionChangeEvent *self);

/**
 * @brief Gets the `oldSubscription` property. 
*/
PushSubscription PushSubscriptionChangeEvent_oldSubscription(const PushSubscriptionChangeEvent *self);

#ifdef __cplusplus
}
#endif
