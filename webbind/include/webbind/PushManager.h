#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct PushSubscription PushSubscription;
typedef struct PushSubscriptionOptionsInit PushSubscriptionOptionsInit;


typedef struct {
  em_Val inner;
} PushSubscriptionOptionsInit;


DECLARE_EMLITE_TYPE(PushSubscriptionOptionsInit, em_Val);

bool PushSubscriptionOptionsInit_userVisibleOnly( const PushSubscriptionOptionsInit *self);

void PushSubscriptionOptionsInit_set_userVisibleOnly(PushSubscriptionOptionsInit* self, bool value);

jb_Any PushSubscriptionOptionsInit_applicationServerKey( const PushSubscriptionOptionsInit *self);

void PushSubscriptionOptionsInit_set_applicationServerKey(PushSubscriptionOptionsInit* self, const jb_Any* value);
typedef struct {
  em_Val inner;
} PushManager;


DECLARE_EMLITE_TYPE(PushManager, em_Val);

jb_FrozenArray PushManager_supportedContentEncodings( PushManager *self);

jb_Promise PushManager_subscribe(PushManager* self );

jb_Promise PushManager_subscribe(PushManager* self , const PushSubscriptionOptionsInit* options);

jb_Promise PushManager_getSubscription(PushManager* self );

jb_Promise PushManager_permissionState(PushManager* self );

jb_Promise PushManager_permissionState(PushManager* self , const PushSubscriptionOptionsInit* options);
