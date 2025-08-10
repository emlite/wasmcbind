#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SubscriptionObserver, em_Val);

jb_Function SubscriptionObserver_next(const SubscriptionObserver *self);

void SubscriptionObserver_set_next(SubscriptionObserver* self, jb_Function * value);

jb_Function SubscriptionObserver_error(const SubscriptionObserver *self);

void SubscriptionObserver_set_error(SubscriptionObserver* self, jb_Function * value);

jb_Function SubscriptionObserver_complete(const SubscriptionObserver *self);

void SubscriptionObserver_set_complete(SubscriptionObserver* self, jb_Function * value);

SubscriptionObserver SubscriptionObserver_new();

#ifdef __cplusplus
}
#endif
