#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AuthenticatorAssertionResponseJSON */
DECLARE_EMLITE_TYPE(AuthenticatorAssertionResponseJSON, em_Val);

/** @brief Getter of the clientDataJSON property */
jb_Any AuthenticatorAssertionResponseJSON_clientDataJSON(const AuthenticatorAssertionResponseJSON *self);

/** @brief Setter of the clientDataJSON property */
void AuthenticatorAssertionResponseJSON_set_clientDataJSON(AuthenticatorAssertionResponseJSON* self, jb_Any * value);

/** @brief Getter of the authenticatorData property */
jb_Any AuthenticatorAssertionResponseJSON_authenticatorData(const AuthenticatorAssertionResponseJSON *self);

/** @brief Setter of the authenticatorData property */
void AuthenticatorAssertionResponseJSON_set_authenticatorData(AuthenticatorAssertionResponseJSON* self, jb_Any * value);

/** @brief Getter of the signature property */
jb_Any AuthenticatorAssertionResponseJSON_signature(const AuthenticatorAssertionResponseJSON *self);

/** @brief Setter of the signature property */
void AuthenticatorAssertionResponseJSON_set_signature(AuthenticatorAssertionResponseJSON* self, jb_Any * value);

/** @brief Getter of the userHandle property */
jb_Any AuthenticatorAssertionResponseJSON_userHandle(const AuthenticatorAssertionResponseJSON *self);

/** @brief Setter of the userHandle property */
void AuthenticatorAssertionResponseJSON_set_userHandle(AuthenticatorAssertionResponseJSON* self, jb_Any * value);

/** @brief Constructor of the AuthenticatorAssertionResponseJSON dictionary type */
AuthenticatorAssertionResponseJSON AuthenticatorAssertionResponseJSON_new();

#ifdef __cplusplus
}
#endif
