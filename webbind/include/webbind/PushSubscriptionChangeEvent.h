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

DECLARE_EMLITE_TYPE(PushSubscriptionChangeEvent, ExtendableEvent);

PushSubscriptionChangeEvent PushSubscriptionChangeEvent_new0(jb_String * type);

PushSubscriptionChangeEvent PushSubscriptionChangeEvent_new1(jb_String * type, PushSubscriptionChangeEventInit * eventInitDict);

PushSubscription PushSubscriptionChangeEvent_newSubscription(const PushSubscriptionChangeEvent *self);

PushSubscription PushSubscriptionChangeEvent_oldSubscription(const PushSubscriptionChangeEvent *self);

#ifdef __cplusplus
}
#endif
