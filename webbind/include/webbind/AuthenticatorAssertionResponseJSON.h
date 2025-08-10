#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AuthenticatorAssertionResponseJSON, em_Val);

jb_Any AuthenticatorAssertionResponseJSON_clientDataJSON(const AuthenticatorAssertionResponseJSON *self);

void AuthenticatorAssertionResponseJSON_set_clientDataJSON(AuthenticatorAssertionResponseJSON* self, jb_Any * value);

jb_Any AuthenticatorAssertionResponseJSON_authenticatorData(const AuthenticatorAssertionResponseJSON *self);

void AuthenticatorAssertionResponseJSON_set_authenticatorData(AuthenticatorAssertionResponseJSON* self, jb_Any * value);

jb_Any AuthenticatorAssertionResponseJSON_signature(const AuthenticatorAssertionResponseJSON *self);

void AuthenticatorAssertionResponseJSON_set_signature(AuthenticatorAssertionResponseJSON* self, jb_Any * value);

jb_Any AuthenticatorAssertionResponseJSON_userHandle(const AuthenticatorAssertionResponseJSON *self);

void AuthenticatorAssertionResponseJSON_set_userHandle(AuthenticatorAssertionResponseJSON* self, jb_Any * value);

AuthenticatorAssertionResponseJSON AuthenticatorAssertionResponseJSON_new();

#ifdef __cplusplus
}
#endif
