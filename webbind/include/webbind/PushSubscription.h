#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct PushSubscriptionOptions PushSubscriptionOptions;
typedef struct PushSubscriptionJSON PushSubscriptionJSON;


typedef struct {
  em_Val inner;
} PushSubscriptionJSON;


DECLARE_EMLITE_TYPE(PushSubscriptionJSON, em_Val);

jb_USVString PushSubscriptionJSON_endpoint( const PushSubscriptionJSON *self);

void PushSubscriptionJSON_set_endpoint(PushSubscriptionJSON* self, const jb_USVString* value);

jb_Any PushSubscriptionJSON_expirationTime( const PushSubscriptionJSON *self);

void PushSubscriptionJSON_set_expirationTime(PushSubscriptionJSON* self, const jb_Any* value);

jb_Record PushSubscriptionJSON_keys( const PushSubscriptionJSON *self);

void PushSubscriptionJSON_set_keys(PushSubscriptionJSON* self, const jb_Record* value);
typedef struct {
  em_Val inner;
} PushSubscription;


DECLARE_EMLITE_TYPE(PushSubscription, em_Val);

jb_USVString PushSubscription_endpoint( const PushSubscription *self);

jb_Any PushSubscription_expirationTime( const PushSubscription *self);

PushSubscriptionOptions PushSubscription_options( const PushSubscription *self);

jb_ArrayBuffer PushSubscription_getKey(PushSubscription* self , const PushEncryptionKeyName* name);

jb_Promise PushSubscription_unsubscribe(PushSubscription* self );

PushSubscriptionJSON PushSubscription_toJSON(PushSubscription* self );
