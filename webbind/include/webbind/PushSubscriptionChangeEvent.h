#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ExtendableEvent.h"
#include "enums.h"

typedef struct PushSubscription PushSubscription;


DECLARE_EMLITE_TYPE(PushSubscriptionChangeEvent, ExtendableEvent);

PushSubscriptionChangeEvent PushSubscriptionChangeEvent_new0(jb_DOMString * type);

PushSubscriptionChangeEvent PushSubscriptionChangeEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

PushSubscription PushSubscriptionChangeEvent_newSubscription(const PushSubscriptionChangeEvent *self);

PushSubscription PushSubscriptionChangeEvent_oldSubscription(const PushSubscriptionChangeEvent *self);
