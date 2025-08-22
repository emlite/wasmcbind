#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PushSubscriptionJSON */
DECLARE_EMLITE_TYPE(PushSubscriptionJSON, em_Val);

/** @brief Getter of the endpoint property */
jb_String PushSubscriptionJSON_endpoint(const PushSubscriptionJSON *self);

/** @brief Setter of the endpoint property */
void PushSubscriptionJSON_set_endpoint(PushSubscriptionJSON* self, jb_String * value);

/** @brief Getter of the expirationTime property */
jb_Any PushSubscriptionJSON_expirationTime(const PushSubscriptionJSON *self);

/** @brief Setter of the expirationTime property */
void PushSubscriptionJSON_set_expirationTime(PushSubscriptionJSON* self, jb_Any * value);

/** @brief Getter of the keys property */
jb_Object PushSubscriptionJSON_keys(const PushSubscriptionJSON *self);

/** @brief Setter of the keys property */
void PushSubscriptionJSON_set_keys(PushSubscriptionJSON* self, jb_Object * value);

/** @brief Constructor of the PushSubscriptionJSON dictionary type */
PushSubscriptionJSON PushSubscriptionJSON_new();

#ifdef __cplusplus
}
#endif
