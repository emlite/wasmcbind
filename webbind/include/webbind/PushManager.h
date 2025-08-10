#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PushSubscription PushSubscription;
typedef struct PushSubscriptionOptionsInit PushSubscriptionOptionsInit;

DECLARE_EMLITE_TYPE(PushManager, em_Val);

jb_Array PushManager_supportedContentEncodings(const PushManager *self);

jb_Promise PushManager_subscribe0(PushManager* self );

jb_Promise PushManager_subscribe1(PushManager* self , PushSubscriptionOptionsInit * options);

jb_Promise PushManager_getSubscription(PushManager* self );

jb_Promise PushManager_permissionState0(PushManager* self );

jb_Promise PushManager_permissionState1(PushManager* self , PushSubscriptionOptionsInit * options);

#ifdef __cplusplus
}
#endif
