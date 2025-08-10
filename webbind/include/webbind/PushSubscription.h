#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PushSubscriptionOptions PushSubscriptionOptions;
typedef struct PushSubscriptionJSON PushSubscriptionJSON;

DECLARE_EMLITE_TYPE(PushSubscription, em_Val);

jb_String PushSubscription_endpoint(const PushSubscription *self);

jb_Any PushSubscription_expirationTime(const PushSubscription *self);

PushSubscriptionOptions PushSubscription_options(const PushSubscription *self);

jb_ArrayBuffer PushSubscription_getKey(PushSubscription* self , PushEncryptionKeyName * name);

jb_Promise PushSubscription_unsubscribe(PushSubscription* self );

PushSubscriptionJSON PushSubscription_toJSON(PushSubscription* self );

#ifdef __cplusplus
}
#endif
