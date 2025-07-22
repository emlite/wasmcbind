#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ExtendableEvent.h"
#include "enums.h"

typedef struct PushSubscription PushSubscription;


typedef struct {
  ExtendableEvent inner;
} PushSubscriptionChangeEvent;


DECLARE_EMLITE_TYPE(PushSubscriptionChangeEvent, ExtendableEvent);

PushSubscriptionChangeEvent PushSubscriptionChangeEvent_new(const jb_DOMString* type);

PushSubscriptionChangeEvent PushSubscriptionChangeEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

PushSubscription PushSubscriptionChangeEvent_newSubscription( const PushSubscriptionChangeEvent *self);

PushSubscription PushSubscriptionChangeEvent_oldSubscription( const PushSubscriptionChangeEvent *self);
