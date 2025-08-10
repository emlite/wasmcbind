#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PushSubscriptionOptionsInit, em_Val);

bool PushSubscriptionOptionsInit_userVisibleOnly(const PushSubscriptionOptionsInit *self);

void PushSubscriptionOptionsInit_set_userVisibleOnly(PushSubscriptionOptionsInit* self, bool value);

jb_Any PushSubscriptionOptionsInit_applicationServerKey(const PushSubscriptionOptionsInit *self);

void PushSubscriptionOptionsInit_set_applicationServerKey(PushSubscriptionOptionsInit* self, jb_Any * value);

PushSubscriptionOptionsInit PushSubscriptionOptionsInit_new();

#ifdef __cplusplus
}
#endif
