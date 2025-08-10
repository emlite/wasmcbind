#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PushSubscription PushSubscription;

DECLARE_EMLITE_TYPE(PushSubscriptionChangeEventInit, ExtendableEventInit);

PushSubscription PushSubscriptionChangeEventInit_newSubscription(const PushSubscriptionChangeEventInit *self);

void PushSubscriptionChangeEventInit_set_newSubscription(PushSubscriptionChangeEventInit* self, PushSubscription * value);

PushSubscription PushSubscriptionChangeEventInit_oldSubscription(const PushSubscriptionChangeEventInit *self);

void PushSubscriptionChangeEventInit_set_oldSubscription(PushSubscriptionChangeEventInit* self, PushSubscription * value);

PushSubscriptionChangeEventInit PushSubscriptionChangeEventInit_new();

#ifdef __cplusplus
}
#endif
