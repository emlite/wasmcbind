#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PushSubscriptionJSON, em_Val);

jb_String PushSubscriptionJSON_endpoint(const PushSubscriptionJSON *self);

void PushSubscriptionJSON_set_endpoint(PushSubscriptionJSON* self, jb_String * value);

jb_Any PushSubscriptionJSON_expirationTime(const PushSubscriptionJSON *self);

void PushSubscriptionJSON_set_expirationTime(PushSubscriptionJSON* self, jb_Any * value);

jb_Object PushSubscriptionJSON_keys(const PushSubscriptionJSON *self);

void PushSubscriptionJSON_set_keys(PushSubscriptionJSON* self, jb_Object * value);

PushSubscriptionJSON PushSubscriptionJSON_new();

#ifdef __cplusplus
}
#endif
