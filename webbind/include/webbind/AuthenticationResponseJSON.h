#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AuthenticatorAssertionResponseJSON.h"
#include "AuthenticationExtensionsClientOutputsJSON.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AuthenticationResponseJSON, em_Val);

jb_String AuthenticationResponseJSON_id(const AuthenticationResponseJSON *self);

void AuthenticationResponseJSON_set_id(AuthenticationResponseJSON* self, jb_String * value);

jb_Any AuthenticationResponseJSON_rawId(const AuthenticationResponseJSON *self);

void AuthenticationResponseJSON_set_rawId(AuthenticationResponseJSON* self, jb_Any * value);

AuthenticatorAssertionResponseJSON AuthenticationResponseJSON_response(const AuthenticationResponseJSON *self);

void AuthenticationResponseJSON_set_response(AuthenticationResponseJSON* self, AuthenticatorAssertionResponseJSON * value);

jb_String AuthenticationResponseJSON_authenticatorAttachment(const AuthenticationResponseJSON *self);

void AuthenticationResponseJSON_set_authenticatorAttachment(AuthenticationResponseJSON* self, jb_String * value);

AuthenticationExtensionsClientOutputsJSON AuthenticationResponseJSON_clientExtensionResults(const AuthenticationResponseJSON *self);

void AuthenticationResponseJSON_set_clientExtensionResults(AuthenticationResponseJSON* self, AuthenticationExtensionsClientOutputsJSON * value);

jb_String AuthenticationResponseJSON_type(const AuthenticationResponseJSON *self);

void AuthenticationResponseJSON_set_type(AuthenticationResponseJSON* self, jb_String * value);

AuthenticationResponseJSON AuthenticationResponseJSON_new();

#ifdef __cplusplus
}
#endif
