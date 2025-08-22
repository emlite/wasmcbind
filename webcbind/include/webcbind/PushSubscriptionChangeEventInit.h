#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "ExtendableEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PushSubscription PushSubscription;

/** @brief Dictionary type PushSubscriptionChangeEventInit */
DECLARE_EMLITE_TYPE(PushSubscriptionChangeEventInit, ExtendableEventInit);

/** @brief Getter of the newSubscription property */
PushSubscription PushSubscriptionChangeEventInit_newSubscription(const PushSubscriptionChangeEventInit *self);

/** @brief Setter of the newSubscription property */
void PushSubscriptionChangeEventInit_set_newSubscription(PushSubscriptionChangeEventInit* self, PushSubscription * value);

/** @brief Getter of the oldSubscription property */
PushSubscription PushSubscriptionChangeEventInit_oldSubscription(const PushSubscriptionChangeEventInit *self);

/** @brief Setter of the oldSubscription property */
void PushSubscriptionChangeEventInit_set_oldSubscription(PushSubscriptionChangeEventInit* self, PushSubscription * value);

/** @brief Constructor of the PushSubscriptionChangeEventInit dictionary type */
PushSubscriptionChangeEventInit PushSubscriptionChangeEventInit_new();

#ifdef __cplusplus
}
#endif
