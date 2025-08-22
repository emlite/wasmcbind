#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PushSubscriptionOptionsInit */
DECLARE_EMLITE_TYPE(PushSubscriptionOptionsInit, em_Val);

/** @brief Getter of the userVisibleOnly property */
bool PushSubscriptionOptionsInit_userVisibleOnly(const PushSubscriptionOptionsInit *self);

/** @brief Setter of the userVisibleOnly property */
void PushSubscriptionOptionsInit_set_userVisibleOnly(PushSubscriptionOptionsInit* self, bool value);

/** @brief Getter of the applicationServerKey property */
jb_Any PushSubscriptionOptionsInit_applicationServerKey(const PushSubscriptionOptionsInit *self);

/** @brief Setter of the applicationServerKey property */
void PushSubscriptionOptionsInit_set_applicationServerKey(PushSubscriptionOptionsInit* self, jb_Any * value);

/** @brief Constructor of the PushSubscriptionOptionsInit dictionary type */
PushSubscriptionOptionsInit PushSubscriptionOptionsInit_new();

#ifdef __cplusplus
}
#endif
